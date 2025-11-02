#include <stdio.h>
#include "bmp3.h"
#include "common.h"

/* Global device struct */
static struct bmp3_dev dev;
static struct bmp3_settings settings = {0};
static struct bmp3_status status = {{0}};

int8_t bmp3_init_sensor(void)
{
    int8_t rslt;
    uint16_t settings_sel;

    // Initialize interface (choose SPI or I2C here) 
    rslt = bmp3_interface_init(&dev, BMP3_SPI_INTF); 
    bmp3_check_rslt("bmp3_interface_init", rslt);

    // Voodoo magic here
    rslt = bmp3_init(&dev);
    bmp3_check_rslt("bmp3_init", rslt);
    settings.int_settings.drdy_en = BMP3_ENABLE;
    settings.press_en = BMP3_ENABLE;
    settings.temp_en = BMP3_ENABLE;
    settings.odr_filter.press_os = BMP3_OVERSAMPLING_2X;
    settings.odr_filter.temp_os  = BMP3_OVERSAMPLING_2X;
    settings.odr_filter.odr      = BMP3_ODR_100_HZ;
    settings_sel = BMP3_SEL_PRESS_EN | BMP3_SEL_TEMP_EN | BMP3_SEL_PRESS_OS |
                   BMP3_SEL_TEMP_OS | BMP3_SEL_ODR | BMP3_SEL_DRDY_EN;

    rslt = bmp3_set_sensor_settings(settings_sel, &settings, &dev);
    bmp3_check_rslt("bmp3_set_sensor_settings", rslt);
    settings.op_mode = BMP3_MODE_NORMAL;
    rslt = bmp3_set_op_mode(&settings, &dev);
    bmp3_check_rslt("bmp3_set_op_mode", rslt);

    return rslt;
}

struct bmp3_data updateBMP3(void)
{
    int8_t rslt;
    struct bmp3_data data = {};

    // Check data ready status 
    rslt = bmp3_get_status(&status, &dev);
    bmp3_check_rslt("bmp3_get_status", rslt);

    if ((rslt == BMP3_OK) && (status.intr.drdy == BMP3_ENABLE))
    {
        // Read both temperature and pressure 
        rslt = bmp3_get_sensor_data(BMP3_PRESS_TEMP, &data, &dev);
        bmp3_check_rslt("bmp3_get_sensor_data", rslt);

        // Clear data ready interrupt by reading status again 
        rslt = bmp3_get_status(&status, &dev);
        bmp3_check_rslt("bmp3_get_status", rslt);
    }

    return data;
}

