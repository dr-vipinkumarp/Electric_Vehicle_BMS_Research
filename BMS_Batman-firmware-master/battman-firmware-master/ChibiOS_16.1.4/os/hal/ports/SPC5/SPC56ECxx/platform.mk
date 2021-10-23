# List of all the SPC56ECxx platform files.
PLATFORMSRC = ${CHIBIOS}/os/hal/ports/SPC5/SPC56ECxx/hal_lld.c \
              ${CHIBIOS}/os/hal/ports/SPC5/SPC5xx/ADC_v1/adc_lld.c \
              ${CHIBIOS}/os/hal/ports/SPC5/SPC5xx/EDMA_v1/spc5_edma.c \
              ${CHIBIOS}/os/hal/ports/SPC5/SPC5xx/eMIOS_v1/spc5_emios.c \
              ${CHIBIOS}/os/hal/ports/SPC5/SPC5xx/FlexCAN_v1/can_lld.c \
              ${CHIBIOS}/os/hal/ports/SPC5/SPC5xx/eMIOS_v1/icu_lld.c \
              ${CHIBIOS}/os/hal/ports/SPC5/SPC5xx/SIUL_v1/pal_lld.c \
              ${CHIBIOS}/os/hal/ports/SPC5/SPC5xx/eMIOS_v1/pwm_lld.c \
              ${CHIBIOS}/os/hal/ports/SPC5/SPC5xx/LINFlex_v1/serial_lld.c \
              ${CHIBIOS}/os/hal/ports/SPC5/SPC5xx/DSPI_v1/spi_lld.c \
              ${CHIBIOS}/os/hal/ports/SPC5/SPC5xx/STM_v1/st_lld.c

# Required include directories
PLATFORMINC = ${CHIBIOS}/os/hal/ports/SPC5/SPC56ECxx \
              ${CHIBIOS}/os/hal/ports/SPC5/SPC5xx/ADC_v1 \
              ${CHIBIOS}/os/hal/ports/SPC5/SPC5xx/EDMA_v1 \
              ${CHIBIOS}/os/hal/ports/SPC5/SPC5xx/eMIOS_v1 \
              ${CHIBIOS}/os/hal/ports/SPC5/SPC5xx/FlexCAN_v1 \
              ${CHIBIOS}/os/hal/ports/SPC5/SPC5xx/SIUL_v1 \
              ${CHIBIOS}/os/hal/ports/SPC5/SPC5xx/LINFlex_v1 \
              ${CHIBIOS}/os/hal/ports/SPC5/SPC5xx/DSPI_v1 \
              ${CHIBIOS}/os/hal/ports/SPC5/SPC5xx/STM_v1
