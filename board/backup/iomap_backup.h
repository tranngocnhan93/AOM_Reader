#ifndef IOMAP_H
#define IOMAP_H
/*
 * IO pins assignments.
 */
#define GPIOA_PA0_WDKICK                      0U
#define GPIOA_PA1_NC                          1U
#define GPIOA_PA2_NC                          2U
#define GPIOA_PA3_NC                          3U
#define GPIOA_PA4_WDOGDIS_N                   4U
#define GPIOA_PA5_SPI1_CLK                    5U
#define GPIOA_PA6_SPI1_MISO                   6U
#define GPIOA_PA7_NC                          7U
#define GPIOA_PA8_TP_E41                      8U
#define GPIOA_PA9_SPI1_CS_A_N                 9U
#define GPIOA_PA10_SPI1_CS_B_N                10U
#define GPIOA_PA11_NC                         11U
#define GPIOA_PA12_NC                         12U
#define GPIOA_PA13_CPU_SWDIO                  13U
#define GPIOA_PA14_CPU_SWCLK                  14U
#define GPIOA_PA15_NC                         15U
#define GPIOB_PB0_MEAS_5VCURR                 0U
#define GPIOB_PB1_MEAS_12VCURR                1U
#define GPIOB_PB2_NC                          2U
#define GPIOB_PB3_NC                          3U
#define GPIOB_PB4_NC                          4U
#define GPIOB_PB5_SPI1_MOSI                   5U
#define GPIOB_PB6_I2C_SCL                     6U
#define GPIOB_PB7_I2C_SDA                     7U
#define GPIOB_PB8_POWER_EN_A                  8U
#define GPIOB_PB9_NC                          9U
#define GPIOB_PB10_NC                         10U
#define GPIOB_PB11_NC                         11U
#define GPIOB_PB12_NC                         12U
#define GPIOB_PB13_NC                         13U
#define GPIOB_PB14_NC                         14U
#define GPIOB_PB15_RELAYCTRL                  15U
#define GPIOC_PC0_MEAS_3V3                    0U
#define GPIOC_PC1_MEAS_5V                     1U
#define GPIOC_PC2_MEAS_12V                    2U
#define GPIOC_PC3_NC                          3U
#define GPIOC_PC4_NC                          4U
#define GPIOC_PC5_SYSRESET_ENA                5U
#define GPIOC_PC6_NC                          6U
#define GPIOC_PC7_NC                          7U
#define GPIOC_PC8_NC                          8U
#define GPIOC_PC9_NC                          9U
#define GPIOC_PC10_FADRN_0                    10U
#define GPIOC_PC11_FADRN_1                    11U
#define GPIOC_PC12_FADRN_2                    12U
#define GPIOC_PC13_FTOGGLE                    13U
#define GPIOC_PC14_NC                         14U
#define GPIOC_PC15_NC                         15U
#define GPIOD_PD0_ACFAIL_IN                   0U
#define GPIOD_PD1_NC                          1U
#define GPIOD_PD2_SYSRESET_IN                 2U
#define GPIOD_PD3_SYSFAIL_IN                  3U
#define GPIOD_PD4_USART2_TXEN                 4U
#define GPIOD_PD5_USART2_TX                   5U
#define GPIOD_PD6_USART2_RX                   6U
#define GPIOD_PD7_NC                          7U
#define GPIOD_PD8_USART_TX                    8U
#define GPIOD_PD9_USART_RX                    9U
#define GPIOD_PD10_NC                         10U
#define GPIOD_PD11_LED_DEBUG                  11U
#define GPIOD_PD12_NC                         12U
#define GPIOD_PD13_NC                         13U
#define GPIOD_PD14_NC                         14U
#define GPIOD_PD15_NC                         15U
#define GPIOE_PE0_NC                          0U
#define GPIOE_PE1_NC                          1U
#define GPIOE_PE2_NC                          2U
#define GPIOE_PE3_NC                          3U
#define GPIOE_PE4_NC                          4U
#define GPIOE_PE5_NC                          5U
#define GPIOE_PE6_NC                          6U
#define GPIOE_PE7_NC                          7U
#define GPIOE_PE8_TP1_PE8                     8U
#define GPIOE_PE9_TP2_PE9                     9U
#define GPIOE_PE10_TP3_PE10                   10U
#define GPIOE_PE11_TP4_PE11                   11U
#define GPIOE_PE12_NC                         12U
#define GPIOE_PE13_NC                         13U
#define GPIOE_PE14_SYSTEM_ERROR               14U
#define GPIOE_PE15_SYSTEM_OK                  15U
#define GPIOF_PF0_NC                          0U
#define GPIOF_PF1_NC                          1U
#define GPIOF_PF2_NC                          2U
#define GPIOF_PF3_NC                          3U
#define GPIOF_PF4_NC                          4U
#define GPIOF_PF5_NC                          5U
#define GPIOF_PF6_NC                          6U
#define GPIOF_PF7_NC                          7U
#define GPIOF_PF8_NC                          8U
#define GPIOF_PF9_NC                          9U
#define GPIOF_PF10_NC                         10U
#define GPIOF_PF11_NC                         11U
#define GPIOF_PF12_NC                         12U
#define GPIOF_PF13_NC                         13U
#define GPIOF_PF14_NC                         14U
#define GPIOF_PF15_NC                         15U
#define GPIOG_PG0_NC                          0U
#define GPIOG_PG1_NC                          1U
#define GPIOG_PG2_NC                          2U
#define GPIOG_PG3_NC                          3U
#define GPIOG_PG4_NC                          4U
#define GPIOG_PG5_NC                          5U
#define GPIOG_PG6_NC                          6U
#define GPIOG_PG7_NC                          7U
#define GPIOG_PG8_NC                          8U
#define GPIOG_PG9_NC                          9U
#define GPIOG_PG10_NC                         10U
#define GPIOG_PG11_NC                         11U
#define GPIOG_PG12_NC                         12U
#define GPIOG_PG13_NC                         13U
#define GPIOG_PG14_NC                         14U
#define GPIOG_PG15_NC                         15U
#define GPIOH_PH0_CLK25                       0U
#define GPIOH_PH1_NC                          1U
#define GPIOH_PH2_NC                          2U
#define GPIOH_PH3_NC                          3U
#define GPIOH_PH4_NC                          4U
#define GPIOH_PH5_NC                          5U
#define GPIOH_PH6_NC                          6U
#define GPIOH_PH7_NC                          7U
#define GPIOH_PH8_NC                          8U
#define GPIOH_PH9_NC                          9U
#define GPIOH_PH10_NC                         10U
#define GPIOH_PH11_NC                         11U
#define GPIOH_PH12_NC                         12U
#define GPIOH_PH13_NC                         13U
#define GPIOH_PH14_NC                         14U
#define GPIOH_PH15_NC                         15U
#define GPIOI_PI0_NC                          0U
#define GPIOI_PI1_NC                          1U
#define GPIOI_PI2_NC                          2U
#define GPIOI_PI3_NC                          3U
#define GPIOI_PI4_NC                          4U
#define GPIOI_PI5_NC                          5U
#define GPIOI_PI6_NC                          6U
#define GPIOI_PI7_NC                          7U
#define GPIOI_PI8_NC                          8U
#define GPIOI_PI9_NC                          9U
#define GPIOI_PI10_NC                         10U
#define GPIOI_PI11_NC                         11U
#define GPIOI_PI12_NC                         12U
#define GPIOI_PI13_NC                         13U
#define GPIOI_PI14_NC                         14U
#define GPIOI_PI15_NC                         15U
#define GPIOJ_PJ0_NC                          0U
#define GPIOJ_PJ1_NC                          1U
#define GPIOJ_PJ2_NC                          2U
#define GPIOJ_PJ3_NC                          3U
#define GPIOJ_PJ4_NC                          4U
#define GPIOJ_PJ5_NC                          5U
#define GPIOJ_PJ6_NC                          6U
#define GPIOJ_PJ7_NC                          7U
#define GPIOJ_PJ8_NC                          8U
#define GPIOJ_PJ9_NC                          9U
#define GPIOJ_PJ10_NC                         10U
#define GPIOJ_PJ11_NC                         11U
#define GPIOJ_PJ12_NC                         12U
#define GPIOJ_PJ13_NC                         13U
#define GPIOJ_PJ14_NC                         14U
#define GPIOJ_PJ15_NC                         15U
#define GPIOK_PK0_NC                          0U
#define GPIOK_PK1_NC                          1U
#define GPIOK_PK2_NC                          2U
#define GPIOK_PK3_NC                          3U
#define GPIOK_PK4_NC                          4U
#define GPIOK_PK5_NC                          5U
#define GPIOK_PK6_NC                          6U
#define GPIOK_PK7_NC                          7U
#define GPIOK_PK8_NC                          8U
#define GPIOK_PK9_NC                          9U
#define GPIOK_PK10_NC                         10U
#define GPIOK_PK11_NC                         11U
#define GPIOK_PK12_NC                         12U
#define GPIOK_PK13_NC                         13U
#define GPIOK_PK14_NC                         14U
#define GPIOK_PK15_NC                         15U

/*
 * IO lines assignments.
 */
#define LINE_GPIOA_WDKICK                     PAL_LINE(GPIOA, 0U)
#define LINE_GPIOA_WDOGDIS_N                  PAL_LINE(GPIOA, 4U)
#define LINE_GPIOA_SPI1_CLK                   PAL_LINE(GPIOA, 5U)
#define LINE_GPIOA_SPI1_MISO                  PAL_LINE(GPIOA, 6U)
#define LINE_GPIOA_TP_E41                     PAL_LINE(GPIOA, 8U)
#define LINE_GPIOA_SPI1_CS_A_N                PAL_LINE(GPIOA, 9U)
#define LINE_GPIOA_SPI1_CS_B_N                PAL_LINE(GPIOA, 10U)
#define LINE_GPIOA_CPU_SWDIO                  PAL_LINE(GPIOA, 13U)
#define LINE_GPIOA_CPU_SWCLK                  PAL_LINE(GPIOA, 14U)
#define LINE_GPIOB_MEAS_5VCURR                PAL_LINE(GPIOB, 0U)
#define LINE_GPIOB_MEAS_12VCURR               PAL_LINE(GPIOB, 1U)
#define LINE_GPIOB_SPI1_MOSI                  PAL_LINE(GPIOB, 5U)
#define LINE_GPIOB_I2C_SCL                    PAL_LINE(GPIOB, 6U)
#define LINE_GPIOB_I2C_SDA                    PAL_LINE(GPIOB, 7U)
#define LINE_GPIOB_POWER_EN_A                 PAL_LINE(GPIOB, 8U)
#define LINE_GPIOB_RELAYCTRL                  PAL_LINE(GPIOB, 15U)
#define LINE_GPIOC_MEAS_3V3                   PAL_LINE(GPIOC, 0U)
#define LINE_GPIOC_MEAS_5V                    PAL_LINE(GPIOC, 1U)
#define LINE_GPIOC_MEAS_12V                   PAL_LINE(GPIOC, 2U)
#define LINE_GPIOC_SYSRESET_ENA               PAL_LINE(GPIOC, 5U)
#define LINE_GPIOC_FADRN_0                    PAL_LINE(GPIOC, 10U)
#define LINE_GPIOC_FADRN_1                    PAL_LINE(GPIOC, 11U)
#define LINE_GPIOC_FADRN_2                    PAL_LINE(GPIOC, 12U)
#define LINE_GPIOC_FTOGGLE                    PAL_LINE(GPIOC, 13U)
#define LINE_GPIOD_ACFAIL_IN                  PAL_LINE(GPIOD, 0U)
#define LINE_GPIOD_SYSRESET_IN                PAL_LINE(GPIOD, 2U)
#define LINE_GPIOD_SYSFAIL_IN                 PAL_LINE(GPIOD, 3U)
#define LINE_GPIOD_USART2_TXEN                PAL_LINE(GPIOD, 4U)
#define LINE_GPIOD_USART2_TX                  PAL_LINE(GPIOD, 5U)
#define LINE_GPIOD_USART2_RX                  PAL_LINE(GPIOD, 6U)
#define LINE_GPIOD_USART_TX                   PAL_LINE(GPIOD, 8U)
#define LINE_GPIOD_USART_RX                   PAL_LINE(GPIOD, 9U)
#define LINE_GPIOD_LED_DEBUG                  PAL_LINE(GPIOD, 11U)
#define LINE_GPIOE_TP1_PE8                    PAL_LINE(GPIOE, 8U)
#define LINE_GPIOE_TP2_PE9                    PAL_LINE(GPIOE, 9U)
#define LINE_GPIOE_TP3_PE10                   PAL_LINE(GPIOE, 10U)
#define LINE_GPIOE_TP4_PE11                   PAL_LINE(GPIOE, 11U)
#define LINE_GPIOE_SYSTEM_ERROR               PAL_LINE(GPIOE, 14U)
#define LINE_GPIOE_SYSTEM_OK                  PAL_LINE(GPIOE, 15U)
#define LINE_GPIOH_CLK25                      PAL_LINE(GPIOH, 0U)

/*
 * I/O ports initial setup, this configuration is established soon after reset
 * in the initialization code.
 * Please refer to the STM32 Reference Manual for details.
 */
#define PIN_MODE_INPUT(n)           (0U << ((n) * 2U))
#define PIN_MODE_OUTPUT(n)          (1U << ((n) * 2U))
#define PIN_MODE_ALTERNATE(n)       (2U << ((n) * 2U))
#define PIN_MODE_ANALOG(n)          (3U << ((n) * 2U))
#define PIN_ODR_LOW(n)              (0U << (n))
#define PIN_ODR_HIGH(n)             (1U << (n))
#define PIN_OTYPE_PUSHPULL(n)       (0U << (n))
#define PIN_OTYPE_OPENDRAIN(n)      (1U << (n))
#define PIN_OSPEED_VERYLOW(n)       (0U << ((n) * 2U))
#define PIN_OSPEED_LOW(n)           (1U << ((n) * 2U))
#define PIN_OSPEED_MEDIUM(n)        (2U << ((n) * 2U))
#define PIN_OSPEED_HIGH(n)          (3U << ((n) * 2U))
#define PIN_PUPDR_FLOATING(n)       (0U << ((n) * 2U))
#define PIN_PUPDR_PULLUP(n)         (1U << ((n) * 2U))
#define PIN_PUPDR_PULLDOWN(n)       (2U << ((n) * 2U))
#define PIN_AFIO_AF_0(n)            ((0) << (((n) % 8U) * 4U))
#define PIN_AFIO_AF_1(n)            ((1) << (((n) % 8U) * 4U))
#define PIN_AFIO_AF_2(n)            ((2) << (((n) % 8U) * 4U))
#define PIN_AFIO_AF_3(n)            ((3) << (((n) % 8U) * 4U))
#define PIN_AFIO_AF_4(n)            ((4) << (((n) % 8U) * 4U))
#define PIN_AFIO_AF_5(n)            ((5) << (((n) % 8U) * 4U))
#define PIN_AFIO_AF_6(n)            ((6) << (((n) % 8U) * 4U))
#define PIN_AFIO_AF_7(n)            ((7) << (((n) % 8U) * 4U))
#define PIN_AFIO_AF_8(n)            ((8) << (((n) % 8U) * 4U))
#define PIN_AFIO_AF_9(n)            ((9) << (((n) % 8U) * 4U))
#define PIN_AFIO_AF_10(n)           ((10) << (((n) % 8U) * 4U))
#define PIN_AFIO_AF_11(n)           ((11) << (((n) % 8U) * 4U))
#define PIN_AFIO_AF_12(n)           ((12) << (((n) % 8U) * 4U))
#define PIN_AFIO_AF_13(n)           ((13) << (((n) % 8U) * 4U))
#define PIN_AFIO_AF_14(n)           ((14) << (((n) % 8U) * 4U))
#define PIN_AFIO_AF_15(n)           ((15) << (((n) % 8U) * 4U))

/*
 * GPIO Port A Modes
 */
#define VAL_GPIOA_MODER             (PIN_MODE_OUTPUT(GPIOA_PA0_WDKICK) | \
                                     PIN_MODE_INPUT(GPIOA_PA1_NC) | \
                                     PIN_MODE_INPUT(GPIOA_PA2_NC) | \
                                     PIN_MODE_INPUT(GPIOA_PA3_NC) | \
                                     PIN_MODE_INPUT(GPIOA_PA4_WDOGDIS_N) | \
                                     PIN_MODE_ALTERNATE(GPIOA_PA5_SPI1_CLK) | \
                                     PIN_MODE_ALTERNATE(GPIOA_PA6_SPI1_MISO) | \
                                     PIN_MODE_INPUT(GPIOA_PA7_NC) | \
                                     PIN_MODE_INPUT(GPIOA_PA8_TP_E41) | \
                                     PIN_MODE_OUTPUT(GPIOA_PA9_SPI1_CS_A_N) | \
                                     PIN_MODE_OUTPUT(GPIOA_PA10_SPI1_CS_B_N) | \
                                     PIN_MODE_INPUT(GPIOA_PA11_NC) | \
                                     PIN_MODE_INPUT(GPIOA_PA12_NC) | \
                                     PIN_MODE_ALTERNATE(GPIOA_PA13_CPU_SWDIO) | \
                                     PIN_MODE_ALTERNATE(GPIOA_PA14_CPU_SWCLK) | \
                                     PIN_MODE_INPUT(GPIOA_PA15_NC))

/*
 * GPIO Port B Modes
 */
#define VAL_GPIOB_MODER             (PIN_MODE_ANALOG(GPIOB_PB0_MEAS_5VCURR) | \
                                     PIN_MODE_ANALOG(GPIOB_PB1_MEAS_12VCURR) | \
                                     PIN_MODE_INPUT(GPIOB_PB2_NC) | \
                                     PIN_MODE_INPUT(GPIOB_PB3_NC) | \
                                     PIN_MODE_INPUT(GPIOB_PB4_NC) | \
                                     PIN_MODE_ALTERNATE(GPIOB_PB5_SPI1_MOSI) | \
                                     PIN_MODE_ALTERNATE(GPIOB_PB6_I2C_SCL) | \
                                     PIN_MODE_ALTERNATE(GPIOB_PB7_I2C_SDA) | \
                                     PIN_MODE_OUTPUT(GPIOB_PB8_POWER_EN_A) | \
                                     PIN_MODE_INPUT(GPIOB_PB9_NC) | \
                                     PIN_MODE_INPUT(GPIOB_PB10_NC) | \
                                     PIN_MODE_INPUT(GPIOB_PB11_NC) | \
                                     PIN_MODE_INPUT(GPIOB_PB12_NC) | \
                                     PIN_MODE_INPUT(GPIOB_PB13_NC) | \
                                     PIN_MODE_INPUT(GPIOB_PB14_NC) | \
                                     PIN_MODE_OUTPUT(GPIOB_PB15_RELAYCTRL))

/*
 * GPIO Port C Modes
 */
#define VAL_GPIOC_MODER             (PIN_MODE_ANALOG(GPIOC_PC0_MEAS_3V3) | \
                                     PIN_MODE_ANALOG(GPIOC_PC1_MEAS_5V) | \
                                     PIN_MODE_ANALOG(GPIOC_PC2_MEAS_12V) | \
                                     PIN_MODE_INPUT(GPIOC_PC3_NC) | \
                                     PIN_MODE_INPUT(GPIOC_PC4_NC) | \
                                     PIN_MODE_OUTPUT(GPIOC_PC5_SYSRESET_ENA) | \
                                     PIN_MODE_INPUT(GPIOC_PC6_NC) | \
                                     PIN_MODE_INPUT(GPIOC_PC7_NC) | \
                                     PIN_MODE_INPUT(GPIOC_PC8_NC) | \
                                     PIN_MODE_INPUT(GPIOC_PC9_NC) | \
                                     PIN_MODE_INPUT(GPIOC_PC10_FADRN_0) | \
                                     PIN_MODE_INPUT(GPIOC_PC11_FADRN_1) | \
                                     PIN_MODE_INPUT(GPIOC_PC12_FADRN_2) | \
                                     PIN_MODE_OUTPUT(GPIOC_PC13_FTOGGLE) | \
                                     PIN_MODE_INPUT(GPIOC_PC14_NC) | \
                                     PIN_MODE_INPUT(GPIOC_PC15_NC))

/*
 * GPIO Port D Modes
 */
#define VAL_GPIOD_MODER             (PIN_MODE_INPUT(GPIOD_PD0_ACFAIL_IN) | \
                                     PIN_MODE_INPUT(GPIOD_PD1_NC) | \
                                     PIN_MODE_INPUT(GPIOD_PD2_SYSRESET_IN) | \
                                     PIN_MODE_INPUT(GPIOD_PD3_SYSFAIL_IN) | \
                                     PIN_MODE_OUTPUT(GPIOD_PD4_USART2_TXEN) | \
                                     PIN_MODE_ALTERNATE(GPIOD_PD5_USART2_TX) | \
                                     PIN_MODE_ALTERNATE(GPIOD_PD6_USART2_RX) | \
                                     PIN_MODE_INPUT(GPIOD_PD7_NC) | \
                                     PIN_MODE_ALTERNATE(GPIOD_PD8_USART_TX) | \
                                     PIN_MODE_ALTERNATE(GPIOD_PD9_USART_RX) | \
                                     PIN_MODE_INPUT(GPIOD_PD10_NC) | \
                                     PIN_MODE_OUTPUT(GPIOD_PD11_LED_DEBUG) | \
                                     PIN_MODE_INPUT(GPIOD_PD12_NC) | \
                                     PIN_MODE_INPUT(GPIOD_PD13_NC) | \
                                     PIN_MODE_INPUT(GPIOD_PD14_NC) | \
                                     PIN_MODE_INPUT(GPIOD_PD15_NC))

/*
 * GPIO Port E Modes
 */
#define VAL_GPIOE_MODER             (PIN_MODE_INPUT(GPIOE_PE0_NC) | \
                                     PIN_MODE_INPUT(GPIOE_PE1_NC) | \
                                     PIN_MODE_INPUT(GPIOE_PE2_NC) | \
                                     PIN_MODE_INPUT(GPIOE_PE3_NC) | \
                                     PIN_MODE_INPUT(GPIOE_PE4_NC) | \
                                     PIN_MODE_INPUT(GPIOE_PE5_NC) | \
                                     PIN_MODE_INPUT(GPIOE_PE6_NC) | \
                                     PIN_MODE_INPUT(GPIOE_PE7_NC) | \
                                     PIN_MODE_OUTPUT(GPIOE_PE8_TP1_PE8) | \
                                     PIN_MODE_OUTPUT(GPIOE_PE9_TP2_PE9) | \
                                     PIN_MODE_OUTPUT(GPIOE_PE10_TP3_PE10) | \
                                     PIN_MODE_OUTPUT(GPIOE_PE11_TP4_PE11) | \
                                     PIN_MODE_INPUT(GPIOE_PE12_NC) | \
                                     PIN_MODE_INPUT(GPIOE_PE13_NC) | \
                                     PIN_MODE_OUTPUT(GPIOE_PE14_SYSTEM_ERROR) | \
                                     PIN_MODE_OUTPUT(GPIOE_PE15_SYSTEM_OK))

/*
 * GPIO Port F Modes
 */
#define VAL_GPIOF_MODER             (PIN_MODE_INPUT(GPIOF_PF0_NC) | \
                                     PIN_MODE_INPUT(GPIOF_PF1_NC) | \
                                     PIN_MODE_INPUT(GPIOF_PF2_NC) | \
                                     PIN_MODE_INPUT(GPIOF_PF3_NC) | \
                                     PIN_MODE_INPUT(GPIOF_PF4_NC) | \
                                     PIN_MODE_INPUT(GPIOF_PF5_NC) | \
                                     PIN_MODE_INPUT(GPIOF_PF6_NC) | \
                                     PIN_MODE_INPUT(GPIOF_PF7_NC) | \
                                     PIN_MODE_INPUT(GPIOF_PF8_NC) | \
                                     PIN_MODE_INPUT(GPIOF_PF9_NC) | \
                                     PIN_MODE_INPUT(GPIOF_PF10_NC) | \
                                     PIN_MODE_INPUT(GPIOF_PF11_NC) | \
                                     PIN_MODE_INPUT(GPIOF_PF12_NC) | \
                                     PIN_MODE_INPUT(GPIOF_PF13_NC) | \
                                     PIN_MODE_INPUT(GPIOF_PF14_NC) | \
                                     PIN_MODE_INPUT(GPIOF_PF15_NC))

/*
 * GPIO Port G Modes
 */
#define VAL_GPIOG_MODER             (PIN_MODE_INPUT(GPIOG_PG0_NC) | \
                                     PIN_MODE_INPUT(GPIOG_PG1_NC) | \
                                     PIN_MODE_INPUT(GPIOG_PG2_NC) | \
                                     PIN_MODE_INPUT(GPIOG_PG3_NC) | \
                                     PIN_MODE_INPUT(GPIOG_PG4_NC) | \
                                     PIN_MODE_INPUT(GPIOG_PG5_NC) | \
                                     PIN_MODE_INPUT(GPIOG_PG6_NC) | \
                                     PIN_MODE_INPUT(GPIOG_PG7_NC) | \
                                     PIN_MODE_INPUT(GPIOG_PG8_NC) | \
                                     PIN_MODE_INPUT(GPIOG_PG9_NC) | \
                                     PIN_MODE_INPUT(GPIOG_PG10_NC) | \
                                     PIN_MODE_INPUT(GPIOG_PG11_NC) | \
                                     PIN_MODE_INPUT(GPIOG_PG12_NC) | \
                                     PIN_MODE_INPUT(GPIOG_PG13_NC) | \
                                     PIN_MODE_INPUT(GPIOG_PG14_NC) | \
                                     PIN_MODE_INPUT(GPIOG_PG15_NC))

/*
 * GPIO Port H Modes
 */
#define VAL_GPIOH_MODER             (PIN_MODE_INPUT(GPIOH_PH0_CLK25) | \
                                     PIN_MODE_INPUT(GPIOH_PH1_NC) | \
                                     PIN_MODE_INPUT(GPIOH_PH2_NC) | \
                                     PIN_MODE_INPUT(GPIOH_PH3_NC) | \
                                     PIN_MODE_INPUT(GPIOH_PH4_NC) | \
                                     PIN_MODE_INPUT(GPIOH_PH5_NC) | \
                                     PIN_MODE_INPUT(GPIOH_PH6_NC) | \
                                     PIN_MODE_INPUT(GPIOH_PH7_NC) | \
                                     PIN_MODE_INPUT(GPIOH_PH8_NC) | \
                                     PIN_MODE_INPUT(GPIOH_PH9_NC) | \
                                     PIN_MODE_INPUT(GPIOH_PH10_NC) | \
                                     PIN_MODE_INPUT(GPIOH_PH11_NC) | \
                                     PIN_MODE_INPUT(GPIOH_PH12_NC) | \
                                     PIN_MODE_INPUT(GPIOH_PH13_NC) | \
                                     PIN_MODE_INPUT(GPIOH_PH14_NC) | \
                                     PIN_MODE_INPUT(GPIOH_PH15_NC))

/*
 * GPIO Port I Modes
 */
#define VAL_GPIOI_MODER             (PIN_MODE_INPUT(GPIOI_PI0_NC) | \
                                     PIN_MODE_INPUT(GPIOI_PI1_NC) | \
                                     PIN_MODE_INPUT(GPIOI_PI2_NC) | \
                                     PIN_MODE_INPUT(GPIOI_PI3_NC) | \
                                     PIN_MODE_INPUT(GPIOI_PI4_NC) | \
                                     PIN_MODE_INPUT(GPIOI_PI5_NC) | \
                                     PIN_MODE_INPUT(GPIOI_PI6_NC) | \
                                     PIN_MODE_INPUT(GPIOI_PI7_NC) | \
                                     PIN_MODE_INPUT(GPIOI_PI8_NC) | \
                                     PIN_MODE_INPUT(GPIOI_PI9_NC) | \
                                     PIN_MODE_INPUT(GPIOI_PI10_NC) | \
                                     PIN_MODE_INPUT(GPIOI_PI11_NC) | \
                                     PIN_MODE_INPUT(GPIOI_PI12_NC) | \
                                     PIN_MODE_INPUT(GPIOI_PI13_NC) | \
                                     PIN_MODE_INPUT(GPIOI_PI14_NC) | \
                                     PIN_MODE_INPUT(GPIOI_PI15_NC))

/*
 * GPIO Port J Modes
 */
#define VAL_GPIOJ_MODER             (PIN_MODE_INPUT(GPIOJ_PJ0_NC) | \
                                     PIN_MODE_INPUT(GPIOJ_PJ1_NC) | \
                                     PIN_MODE_INPUT(GPIOJ_PJ2_NC) | \
                                     PIN_MODE_INPUT(GPIOJ_PJ3_NC) | \
                                     PIN_MODE_INPUT(GPIOJ_PJ4_NC) | \
                                     PIN_MODE_INPUT(GPIOJ_PJ5_NC) | \
                                     PIN_MODE_INPUT(GPIOJ_PJ6_NC) | \
                                     PIN_MODE_INPUT(GPIOJ_PJ7_NC) | \
                                     PIN_MODE_INPUT(GPIOJ_PJ8_NC) | \
                                     PIN_MODE_INPUT(GPIOJ_PJ9_NC) | \
                                     PIN_MODE_INPUT(GPIOJ_PJ10_NC) | \
                                     PIN_MODE_INPUT(GPIOJ_PJ11_NC) | \
                                     PIN_MODE_INPUT(GPIOJ_PJ12_NC) | \
                                     PIN_MODE_INPUT(GPIOJ_PJ13_NC) | \
                                     PIN_MODE_INPUT(GPIOJ_PJ14_NC) | \
                                     PIN_MODE_INPUT(GPIOJ_PJ15_NC))

/*
 * GPIO Port K Modes
 */
#define VAL_GPIOK_MODER             (PIN_MODE_INPUT(GPIOK_PK0_NC) | \
                                     PIN_MODE_INPUT(GPIOK_PK1_NC) | \
                                     PIN_MODE_INPUT(GPIOK_PK2_NC) | \
                                     PIN_MODE_INPUT(GPIOK_PK3_NC) | \
                                     PIN_MODE_INPUT(GPIOK_PK4_NC) | \
                                     PIN_MODE_INPUT(GPIOK_PK5_NC) | \
                                     PIN_MODE_INPUT(GPIOK_PK6_NC) | \
                                     PIN_MODE_INPUT(GPIOK_PK7_NC) | \
                                     PIN_MODE_INPUT(GPIOK_PK8_NC) | \
                                     PIN_MODE_INPUT(GPIOK_PK9_NC) | \
                                     PIN_MODE_INPUT(GPIOK_PK10_NC) | \
                                     PIN_MODE_INPUT(GPIOK_PK11_NC) | \
                                     PIN_MODE_INPUT(GPIOK_PK12_NC) | \
                                     PIN_MODE_INPUT(GPIOK_PK13_NC) | \
                                     PIN_MODE_INPUT(GPIOK_PK14_NC) | \
                                     PIN_MODE_INPUT(GPIOK_PK15_NC))

/*
 * GPIO Port A Output types
 */
#define VAL_GPIOA_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOA_PA0_WDKICK) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PA1_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PA2_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PA3_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PA4_WDOGDIS_N) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PA5_SPI1_CLK) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PA6_SPI1_MISO) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PA7_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PA8_TP_E41) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PA9_SPI1_CS_A_N) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PA10_SPI1_CS_B_N) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PA11_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PA12_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PA13_CPU_SWDIO) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PA14_CPU_SWCLK) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PA15_NC))

/*
 * GPIO Port B Output types
 */
#define VAL_GPIOB_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOB_PB0_MEAS_5VCURR) | \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PB1_MEAS_12VCURR) | \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PB2_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PB3_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PB4_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PB5_SPI1_MOSI) | \
                                     PIN_OTYPE_OPENDRAIN(GPIOB_PB6_I2C_SCL) | \
                                     PIN_OTYPE_OPENDRAIN(GPIOB_PB7_I2C_SDA) | \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PB8_POWER_EN_A) | \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PB9_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PB10_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PB11_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PB12_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PB13_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PB14_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PB15_RELAYCTRL))

/*
 * GPIO Port C Output types
 */
#define VAL_GPIOC_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOC_PC0_MEAS_3V3) | \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PC1_MEAS_5V) | \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PC2_MEAS_12V) | \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PC3_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PC4_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PC5_SYSRESET_ENA) | \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PC6_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PC7_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PC8_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PC9_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PC10_FADRN_0) | \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PC11_FADRN_1) | \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PC12_FADRN_2) | \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PC13_FTOGGLE) | \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PC14_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PC15_NC))

/*
 * GPIO Port D Output types
 */
#define VAL_GPIOD_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOD_PD0_ACFAIL_IN) | \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PD1_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PD2_SYSRESET_IN) | \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PD3_SYSFAIL_IN) | \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PD4_USART2_TXEN) | \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PD5_USART2_TX) | \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PD6_USART2_RX) | \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PD7_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PD8_USART_TX) | \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PD9_USART_RX) | \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PD10_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PD11_LED_DEBUG) | \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PD12_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PD13_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PD14_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PD15_NC))

/*
 * GPIO Port E Output types
 */
#define VAL_GPIOE_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOE_PE0_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PE1_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PE2_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PE3_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PE4_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PE5_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PE6_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PE7_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PE8_TP1_PE8) | \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PE9_TP2_PE9) | \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PE10_TP3_PE10) | \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PE11_TP4_PE11) | \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PE12_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PE13_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PE14_SYSTEM_ERROR) | \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PE15_SYSTEM_OK))

/*
 * GPIO Port F Output types
 */
#define VAL_GPIOF_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOF_PF0_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PF1_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PF2_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PF3_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PF4_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PF5_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PF6_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PF7_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PF8_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PF9_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PF10_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PF11_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PF12_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PF13_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PF14_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PF15_NC))

/*
 * GPIO Port G Output types
 */
#define VAL_GPIOG_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOG_PG0_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PG1_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PG2_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PG3_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PG4_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PG5_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PG6_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PG7_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PG8_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PG9_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PG10_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PG11_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PG12_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PG13_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PG14_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PG15_NC))

/*
 * GPIO Port H Output types
 */
#define VAL_GPIOH_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOH_PH0_CLK25) | \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PH1_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PH2_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PH3_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PH4_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PH5_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PH6_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PH7_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PH8_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PH9_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PH10_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PH11_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PH12_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PH13_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PH14_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PH15_NC))

/*
 * GPIO Port I Output types
 */
#define VAL_GPIOI_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOI_PI0_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PI1_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PI2_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PI3_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PI4_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PI5_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PI6_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PI7_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PI8_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PI9_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PI10_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PI11_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PI12_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PI13_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PI14_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PI15_NC))

/*
 * GPIO Port J Output types
 */
#define VAL_GPIOJ_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOJ_PJ0_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_PJ1_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_PJ2_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_PJ3_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_PJ4_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_PJ5_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_PJ6_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_PJ7_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_PJ8_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_PJ9_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_PJ10_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_PJ11_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_PJ12_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_PJ13_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_PJ14_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_PJ15_NC))

/*
 * GPIO Port K Output types
 */
#define VAL_GPIOK_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOK_PK0_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOK_PK1_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOK_PK2_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOK_PK3_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOK_PK4_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOK_PK5_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOK_PK6_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOK_PK7_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOK_PK8_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOK_PK9_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOK_PK10_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOK_PK11_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOK_PK12_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOK_PK13_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOK_PK14_NC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOK_PK15_NC))

/*
 * GPIO Port A Output speeds
 */
#define VAL_GPIOA_OSPEEDR           (PIN_OSPEED_HIGH(GPIOA_PA0_WDKICK) | \
                                     PIN_OSPEED_HIGH(GPIOA_PA1_NC) | \
                                     PIN_OSPEED_HIGH(GPIOA_PA2_NC) | \
                                     PIN_OSPEED_HIGH(GPIOA_PA3_NC) | \
                                     PIN_OSPEED_LOW(GPIOA_PA4_WDOGDIS_N) | \
                                     PIN_OSPEED_HIGH(GPIOA_PA5_SPI1_CLK) | \
                                     PIN_OSPEED_HIGH(GPIOA_PA6_SPI1_MISO) | \
                                     PIN_OSPEED_HIGH(GPIOA_PA7_NC) | \
                                     PIN_OSPEED_LOW(GPIOA_PA8_TP_E41) | \
                                     PIN_OSPEED_HIGH(GPIOA_PA9_SPI1_CS_A_N) | \
                                     PIN_OSPEED_HIGH(GPIOA_PA10_SPI1_CS_B_N) | \
                                     PIN_OSPEED_LOW(GPIOA_PA11_NC) | \
                                     PIN_OSPEED_LOW(GPIOA_PA12_NC) | \
                                     PIN_OSPEED_LOW(GPIOA_PA13_CPU_SWDIO) | \
                                     PIN_OSPEED_LOW(GPIOA_PA14_CPU_SWCLK) | \
                                     PIN_OSPEED_LOW(GPIOA_PA15_NC))

/*
 * GPIO Port B Output speeds
 */
#define VAL_GPIOB_OSPEEDR           (PIN_OSPEED_HIGH(GPIOB_PB0_MEAS_5VCURR) | \
                                     PIN_OSPEED_HIGH(GPIOB_PB1_MEAS_12VCURR) | \
                                     PIN_OSPEED_HIGH(GPIOB_PB2_NC) | \
                                     PIN_OSPEED_LOW(GPIOB_PB3_NC) | \
                                     PIN_OSPEED_LOW(GPIOB_PB4_NC) | \
                                     PIN_OSPEED_HIGH(GPIOB_PB5_SPI1_MOSI) | \
                                     PIN_OSPEED_HIGH(GPIOB_PB6_I2C_SCL) | \
                                     PIN_OSPEED_HIGH(GPIOB_PB7_I2C_SDA) | \
                                     PIN_OSPEED_LOW(GPIOB_PB8_POWER_EN_A) | \
                                     PIN_OSPEED_LOW(GPIOB_PB9_NC) | \
                                     PIN_OSPEED_HIGH(GPIOB_PB10_NC) | \
                                     PIN_OSPEED_HIGH(GPIOB_PB11_NC) | \
                                     PIN_OSPEED_HIGH(GPIOB_PB12_NC) | \
                                     PIN_OSPEED_HIGH(GPIOB_PB13_NC) | \
                                     PIN_OSPEED_LOW(GPIOB_PB14_NC) | \
                                     PIN_OSPEED_HIGH(GPIOB_PB15_RELAYCTRL))

/*
 * GPIO Port C Output speeds
 */
#define VAL_GPIOC_OSPEEDR           (PIN_OSPEED_LOW(GPIOC_PC0_MEAS_3V3) | \
                                     PIN_OSPEED_HIGH(GPIOC_PC1_MEAS_5V) | \
                                     PIN_OSPEED_HIGH(GPIOC_PC2_MEAS_12V) | \
                                     PIN_OSPEED_HIGH(GPIOC_PC3_NC) | \
                                     PIN_OSPEED_HIGH(GPIOC_PC4_NC) | \
                                     PIN_OSPEED_HIGH(GPIOC_PC5_SYSRESET_ENA) | \
                                     PIN_OSPEED_HIGH(GPIOC_PC6_NC) | \
                                     PIN_OSPEED_LOW(GPIOC_PC7_NC) | \
                                     PIN_OSPEED_LOW(GPIOC_PC8_NC) | \
                                     PIN_OSPEED_LOW(GPIOC_PC9_NC) | \
                                     PIN_OSPEED_LOW(GPIOC_PC10_FADRN_0) | \
                                     PIN_OSPEED_LOW(GPIOC_PC11_FADRN_1) | \
                                     PIN_OSPEED_LOW(GPIOC_PC12_FADRN_2) | \
                                     PIN_OSPEED_LOW(GPIOC_PC13_FTOGGLE) | \
                                     PIN_OSPEED_LOW(GPIOC_PC14_NC) | \
                                     PIN_OSPEED_LOW(GPIOC_PC15_NC))

/*
 * GPIO Port D Output speeds
 */
#define VAL_GPIOD_OSPEEDR           (PIN_OSPEED_LOW(GPIOD_PD0_ACFAIL_IN) | \
                                     PIN_OSPEED_LOW(GPIOD_PD1_NC) | \
                                     PIN_OSPEED_LOW(GPIOD_PD2_SYSRESET_IN) | \
                                     PIN_OSPEED_LOW(GPIOD_PD3_SYSFAIL_IN) | \
                                     PIN_OSPEED_HIGH(GPIOD_PD4_USART2_TXEN) | \
                                     PIN_OSPEED_HIGH(GPIOD_PD5_USART2_TX) | \
                                     PIN_OSPEED_HIGH(GPIOD_PD6_USART2_RX) | \
                                     PIN_OSPEED_LOW(GPIOD_PD7_NC) | \
                                     PIN_OSPEED_LOW(GPIOD_PD8_USART_TX) | \
                                     PIN_OSPEED_LOW(GPIOD_PD9_USART_RX) | \
                                     PIN_OSPEED_LOW(GPIOD_PD10_NC) | \
                                     PIN_OSPEED_LOW(GPIOD_PD11_LED_DEBUG) | \
                                     PIN_OSPEED_HIGH(GPIOD_PD12_NC) | \
                                     PIN_OSPEED_LOW(GPIOD_PD13_NC) | \
                                     PIN_OSPEED_LOW(GPIOD_PD14_NC) | \
                                     PIN_OSPEED_LOW(GPIOD_PD15_NC))

/*
 * GPIO Port E Output speeds
 */
#define VAL_GPIOE_OSPEEDR           (PIN_OSPEED_LOW(GPIOE_PE0_NC) | \
                                     PIN_OSPEED_LOW(GPIOE_PE1_NC) | \
                                     PIN_OSPEED_LOW(GPIOE_PE2_NC) | \
                                     PIN_OSPEED_LOW(GPIOE_PE3_NC) | \
                                     PIN_OSPEED_LOW(GPIOE_PE4_NC) | \
                                     PIN_OSPEED_LOW(GPIOE_PE5_NC) | \
                                     PIN_OSPEED_LOW(GPIOE_PE6_NC) | \
                                     PIN_OSPEED_LOW(GPIOE_PE7_NC) | \
                                     PIN_OSPEED_HIGH(GPIOE_PE8_TP1_PE8) | \
                                     PIN_OSPEED_HIGH(GPIOE_PE9_TP2_PE9) | \
                                     PIN_OSPEED_HIGH(GPIOE_PE10_TP3_PE10) | \
                                     PIN_OSPEED_HIGH(GPIOE_PE11_TP4_PE11) | \
                                     PIN_OSPEED_LOW(GPIOE_PE12_NC) | \
                                     PIN_OSPEED_LOW(GPIOE_PE13_NC) | \
                                     PIN_OSPEED_HIGH(GPIOE_PE14_SYSTEM_ERROR) | \
                                     PIN_OSPEED_HIGH(GPIOE_PE15_SYSTEM_OK))

/*
 * GPIO Port F Output speeds
 */
#define VAL_GPIOF_OSPEEDR           (PIN_OSPEED_LOW(GPIOF_PF0_NC) | \
                                     PIN_OSPEED_LOW(GPIOF_PF1_NC) | \
                                     PIN_OSPEED_LOW(GPIOF_PF2_NC) | \
                                     PIN_OSPEED_LOW(GPIOF_PF3_NC) | \
                                     PIN_OSPEED_LOW(GPIOF_PF4_NC) | \
                                     PIN_OSPEED_LOW(GPIOF_PF5_NC) | \
                                     PIN_OSPEED_LOW(GPIOF_PF6_NC) | \
                                     PIN_OSPEED_LOW(GPIOF_PF7_NC) | \
                                     PIN_OSPEED_LOW(GPIOF_PF8_NC) | \
                                     PIN_OSPEED_LOW(GPIOF_PF9_NC) | \
                                     PIN_OSPEED_LOW(GPIOF_PF10_NC) | \
                                     PIN_OSPEED_LOW(GPIOF_PF11_NC) | \
                                     PIN_OSPEED_LOW(GPIOF_PF12_NC) | \
                                     PIN_OSPEED_LOW(GPIOF_PF13_NC) | \
                                     PIN_OSPEED_LOW(GPIOF_PF14_NC) | \
                                     PIN_OSPEED_LOW(GPIOF_PF15_NC))

/*
 * GPIO Port G Output speeds
 */
#define VAL_GPIOG_OSPEEDR           (PIN_OSPEED_LOW(GPIOG_PG0_NC) | \
                                     PIN_OSPEED_LOW(GPIOG_PG1_NC) | \
                                     PIN_OSPEED_LOW(GPIOG_PG2_NC) | \
                                     PIN_OSPEED_LOW(GPIOG_PG3_NC) | \
                                     PIN_OSPEED_LOW(GPIOG_PG4_NC) | \
                                     PIN_OSPEED_LOW(GPIOG_PG5_NC) | \
                                     PIN_OSPEED_LOW(GPIOG_PG6_NC) | \
                                     PIN_OSPEED_LOW(GPIOG_PG7_NC) | \
                                     PIN_OSPEED_LOW(GPIOG_PG8_NC) | \
                                     PIN_OSPEED_LOW(GPIOG_PG9_NC) | \
                                     PIN_OSPEED_LOW(GPIOG_PG10_NC) | \
                                     PIN_OSPEED_LOW(GPIOG_PG11_NC) | \
                                     PIN_OSPEED_LOW(GPIOG_PG12_NC) | \
                                     PIN_OSPEED_LOW(GPIOG_PG13_NC) | \
                                     PIN_OSPEED_LOW(GPIOG_PG14_NC) | \
                                     PIN_OSPEED_LOW(GPIOG_PG15_NC))

/*
 * GPIO Port H Output speeds
 */
#define VAL_GPIOH_OSPEEDR           (PIN_OSPEED_LOW(GPIOH_PH0_CLK25) | \
                                     PIN_OSPEED_LOW(GPIOH_PH1_NC) | \
                                     PIN_OSPEED_LOW(GPIOH_PH2_NC) | \
                                     PIN_OSPEED_LOW(GPIOH_PH3_NC) | \
                                     PIN_OSPEED_LOW(GPIOH_PH4_NC) | \
                                     PIN_OSPEED_LOW(GPIOH_PH5_NC) | \
                                     PIN_OSPEED_LOW(GPIOH_PH6_NC) | \
                                     PIN_OSPEED_LOW(GPIOH_PH7_NC) | \
                                     PIN_OSPEED_LOW(GPIOH_PH8_NC) | \
                                     PIN_OSPEED_LOW(GPIOH_PH9_NC) | \
                                     PIN_OSPEED_LOW(GPIOH_PH10_NC) | \
                                     PIN_OSPEED_LOW(GPIOH_PH11_NC) | \
                                     PIN_OSPEED_LOW(GPIOH_PH12_NC) | \
                                     PIN_OSPEED_LOW(GPIOH_PH13_NC) | \
                                     PIN_OSPEED_LOW(GPIOH_PH14_NC) | \
                                     PIN_OSPEED_LOW(GPIOH_PH15_NC))

/*
 * GPIO Port I Output speeds
 */
#define VAL_GPIOI_OSPEEDR           (PIN_OSPEED_LOW(GPIOI_PI0_NC) | \
                                     PIN_OSPEED_LOW(GPIOI_PI1_NC) | \
                                     PIN_OSPEED_LOW(GPIOI_PI2_NC) | \
                                     PIN_OSPEED_LOW(GPIOI_PI3_NC) | \
                                     PIN_OSPEED_LOW(GPIOI_PI4_NC) | \
                                     PIN_OSPEED_LOW(GPIOI_PI5_NC) | \
                                     PIN_OSPEED_LOW(GPIOI_PI6_NC) | \
                                     PIN_OSPEED_LOW(GPIOI_PI7_NC) | \
                                     PIN_OSPEED_LOW(GPIOI_PI8_NC) | \
                                     PIN_OSPEED_LOW(GPIOI_PI9_NC) | \
                                     PIN_OSPEED_LOW(GPIOI_PI10_NC) | \
                                     PIN_OSPEED_LOW(GPIOI_PI11_NC) | \
                                     PIN_OSPEED_LOW(GPIOI_PI12_NC) | \
                                     PIN_OSPEED_LOW(GPIOI_PI13_NC) | \
                                     PIN_OSPEED_LOW(GPIOI_PI14_NC) | \
                                     PIN_OSPEED_LOW(GPIOI_PI15_NC))

/*
 * GPIO Port J Output speeds
 */
#define VAL_GPIOJ_OSPEEDR           (PIN_OSPEED_LOW(GPIOJ_PJ0_NC) | \
                                     PIN_OSPEED_LOW(GPIOJ_PJ1_NC) | \
                                     PIN_OSPEED_LOW(GPIOJ_PJ2_NC) | \
                                     PIN_OSPEED_LOW(GPIOJ_PJ3_NC) | \
                                     PIN_OSPEED_LOW(GPIOJ_PJ4_NC) | \
                                     PIN_OSPEED_LOW(GPIOJ_PJ5_NC) | \
                                     PIN_OSPEED_LOW(GPIOJ_PJ6_NC) | \
                                     PIN_OSPEED_LOW(GPIOJ_PJ7_NC) | \
                                     PIN_OSPEED_LOW(GPIOJ_PJ8_NC) | \
                                     PIN_OSPEED_LOW(GPIOJ_PJ9_NC) | \
                                     PIN_OSPEED_LOW(GPIOJ_PJ10_NC) | \
                                     PIN_OSPEED_LOW(GPIOJ_PJ11_NC) | \
                                     PIN_OSPEED_LOW(GPIOJ_PJ12_NC) | \
                                     PIN_OSPEED_LOW(GPIOJ_PJ13_NC) | \
                                     PIN_OSPEED_LOW(GPIOJ_PJ14_NC) | \
                                     PIN_OSPEED_LOW(GPIOJ_PJ15_NC))

/*
 * GPIO Port K Output speeds
 */
#define VAL_GPIOK_OSPEEDR           (PIN_OSPEED_LOW(GPIOK_PK0_NC) | \
                                     PIN_OSPEED_LOW(GPIOK_PK1_NC) | \
                                     PIN_OSPEED_LOW(GPIOK_PK2_NC) | \
                                     PIN_OSPEED_LOW(GPIOK_PK3_NC) | \
                                     PIN_OSPEED_LOW(GPIOK_PK4_NC) | \
                                     PIN_OSPEED_LOW(GPIOK_PK5_NC) | \
                                     PIN_OSPEED_LOW(GPIOK_PK6_NC) | \
                                     PIN_OSPEED_LOW(GPIOK_PK7_NC) | \
                                     PIN_OSPEED_LOW(GPIOK_PK8_NC) | \
                                     PIN_OSPEED_LOW(GPIOK_PK9_NC) | \
                                     PIN_OSPEED_LOW(GPIOK_PK10_NC) | \
                                     PIN_OSPEED_LOW(GPIOK_PK11_NC) | \
                                     PIN_OSPEED_LOW(GPIOK_PK12_NC) | \
                                     PIN_OSPEED_LOW(GPIOK_PK13_NC) | \
                                     PIN_OSPEED_LOW(GPIOK_PK14_NC) | \
                                     PIN_OSPEED_LOW(GPIOK_PK15_NC))

/*
 * GPIO Port A Output default values
 */
#define VAL_GPIOA_ODR               (PIN_ODR_HIGH(GPIOA_PA0_WDKICK) | \
                                     PIN_ODR_HIGH(GPIOA_PA1_NC) | \
                                     PIN_ODR_HIGH(GPIOA_PA2_NC) | \
                                     PIN_ODR_HIGH(GPIOA_PA3_NC) | \
                                     PIN_ODR_HIGH(GPIOA_PA4_WDOGDIS_N) | \
                                     PIN_ODR_HIGH(GPIOA_PA5_SPI1_CLK) | \
                                     PIN_ODR_HIGH(GPIOA_PA6_SPI1_MISO) | \
                                     PIN_ODR_HIGH(GPIOA_PA7_NC) | \
                                     PIN_ODR_HIGH(GPIOA_PA8_TP_E41) | \
                                     PIN_ODR_HIGH(GPIOA_PA9_SPI1_CS_A_N) | \
                                     PIN_ODR_HIGH(GPIOA_PA10_SPI1_CS_B_N) | \
                                     PIN_ODR_HIGH(GPIOA_PA11_NC) | \
                                     PIN_ODR_HIGH(GPIOA_PA12_NC) | \
                                     PIN_ODR_HIGH(GPIOA_PA13_CPU_SWDIO) | \
                                     PIN_ODR_HIGH(GPIOA_PA14_CPU_SWCLK) | \
                                     PIN_ODR_HIGH(GPIOA_PA15_NC))

/*
 * GPIO Port B Output default values
 */
#define VAL_GPIOB_ODR               (PIN_ODR_HIGH(GPIOB_PB0_MEAS_5VCURR) | \
                                     PIN_ODR_HIGH(GPIOB_PB1_MEAS_12VCURR) | \
                                     PIN_ODR_HIGH(GPIOB_PB2_NC) | \
                                     PIN_ODR_HIGH(GPIOB_PB3_NC) | \
                                     PIN_ODR_HIGH(GPIOB_PB4_NC) | \
                                     PIN_ODR_HIGH(GPIOB_PB5_SPI1_MOSI) | \
                                     PIN_ODR_HIGH(GPIOB_PB6_I2C_SCL) | \
                                     PIN_ODR_HIGH(GPIOB_PB7_I2C_SDA) | \
                                     PIN_ODR_LOW(GPIOB_PB8_POWER_EN_A) | \
                                     PIN_ODR_HIGH(GPIOB_PB9_NC) | \
                                     PIN_ODR_HIGH(GPIOB_PB10_NC) | \
                                     PIN_ODR_HIGH(GPIOB_PB11_NC) | \
                                     PIN_ODR_HIGH(GPIOB_PB12_NC) | \
                                     PIN_ODR_HIGH(GPIOB_PB13_NC) | \
                                     PIN_ODR_HIGH(GPIOB_PB14_NC) | \
                                     PIN_ODR_LOW(GPIOB_PB15_RELAYCTRL))

/*
 * GPIO Port C Output default values
 */
#define VAL_GPIOC_ODR               (PIN_ODR_HIGH(GPIOC_PC0_MEAS_3V3) | \
                                     PIN_ODR_HIGH(GPIOC_PC1_MEAS_5V) | \
                                     PIN_ODR_HIGH(GPIOC_PC2_MEAS_12V) | \
                                     PIN_ODR_HIGH(GPIOC_PC3_NC) | \
                                     PIN_ODR_HIGH(GPIOC_PC4_NC) | \
                                     PIN_ODR_HIGH(GPIOC_PC5_SYSRESET_ENA) | \
                                     PIN_ODR_HIGH(GPIOC_PC6_NC) | \
                                     PIN_ODR_HIGH(GPIOC_PC7_NC) | \
                                     PIN_ODR_HIGH(GPIOC_PC8_NC) | \
                                     PIN_ODR_HIGH(GPIOC_PC9_NC) | \
                                     PIN_ODR_HIGH(GPIOC_PC10_FADRN_0) | \
                                     PIN_ODR_HIGH(GPIOC_PC11_FADRN_1) | \
                                     PIN_ODR_HIGH(GPIOC_PC12_FADRN_2) | \
                                     PIN_ODR_LOW(GPIOC_PC13_FTOGGLE) | \
                                     PIN_ODR_HIGH(GPIOC_PC14_NC) | \
                                     PIN_ODR_HIGH(GPIOC_PC15_NC))

/*
 * GPIO Port D Output default values
 */
#define VAL_GPIOD_ODR               (PIN_ODR_HIGH(GPIOD_PD0_ACFAIL_IN) | \
                                     PIN_ODR_HIGH(GPIOD_PD1_NC) | \
                                     PIN_ODR_HIGH(GPIOD_PD2_SYSRESET_IN) | \
                                     PIN_ODR_HIGH(GPIOD_PD3_SYSFAIL_IN) | \
                                     PIN_ODR_HIGH(GPIOD_PD4_USART2_TXEN) | \
                                     PIN_ODR_HIGH(GPIOD_PD5_USART2_TX) | \
                                     PIN_ODR_HIGH(GPIOD_PD6_USART2_RX) | \
                                     PIN_ODR_HIGH(GPIOD_PD7_NC) | \
                                     PIN_ODR_HIGH(GPIOD_PD8_USART_TX) | \
                                     PIN_ODR_HIGH(GPIOD_PD9_USART_RX) | \
                                     PIN_ODR_HIGH(GPIOD_PD10_NC) | \
                                     PIN_ODR_LOW(GPIOD_PD11_LED_DEBUG) | \
                                     PIN_ODR_HIGH(GPIOD_PD12_NC) | \
                                     PIN_ODR_HIGH(GPIOD_PD13_NC) | \
                                     PIN_ODR_HIGH(GPIOD_PD14_NC) | \
                                     PIN_ODR_HIGH(GPIOD_PD15_NC))

/*
 * GPIO Port E Output default values
 */
#define VAL_GPIOE_ODR               (PIN_ODR_LOW(GPIOE_PE0_NC) | \
                                     PIN_ODR_HIGH(GPIOE_PE1_NC) | \
                                     PIN_ODR_HIGH(GPIOE_PE2_NC) | \
                                     PIN_ODR_HIGH(GPIOE_PE3_NC) | \
                                     PIN_ODR_HIGH(GPIOE_PE4_NC) | \
                                     PIN_ODR_HIGH(GPIOE_PE5_NC) | \
                                     PIN_ODR_HIGH(GPIOE_PE6_NC) | \
                                     PIN_ODR_HIGH(GPIOE_PE7_NC) | \
                                     PIN_ODR_LOW(GPIOE_PE8_TP1_PE8) | \
                                     PIN_ODR_LOW(GPIOE_PE9_TP2_PE9) | \
                                     PIN_ODR_LOW(GPIOE_PE10_TP3_PE10) | \
                                     PIN_ODR_LOW(GPIOE_PE11_TP4_PE11) | \
                                     PIN_ODR_HIGH(GPIOE_PE12_NC) | \
                                     PIN_ODR_HIGH(GPIOE_PE13_NC) | \
                                     PIN_ODR_LOW(GPIOE_PE14_SYSTEM_ERROR) | \
                                     PIN_ODR_LOW(GPIOE_PE15_SYSTEM_OK))

/*
 * GPIO Port F Output default values
 */
#define VAL_GPIOF_ODR               (PIN_ODR_HIGH(GPIOF_PF0_NC) | \
                                     PIN_ODR_HIGH(GPIOF_PF1_NC) | \
                                     PIN_ODR_HIGH(GPIOF_PF2_NC) | \
                                     PIN_ODR_HIGH(GPIOF_PF3_NC) | \
                                     PIN_ODR_HIGH(GPIOF_PF4_NC) | \
                                     PIN_ODR_HIGH(GPIOF_PF5_NC) | \
                                     PIN_ODR_HIGH(GPIOF_PF6_NC) | \
                                     PIN_ODR_HIGH(GPIOF_PF7_NC) | \
                                     PIN_ODR_HIGH(GPIOF_PF8_NC) | \
                                     PIN_ODR_HIGH(GPIOF_PF9_NC) | \
                                     PIN_ODR_HIGH(GPIOF_PF10_NC) | \
                                     PIN_ODR_HIGH(GPIOF_PF11_NC) | \
                                     PIN_ODR_HIGH(GPIOF_PF12_NC) | \
                                     PIN_ODR_HIGH(GPIOF_PF13_NC) | \
                                     PIN_ODR_HIGH(GPIOF_PF14_NC) | \
                                     PIN_ODR_HIGH(GPIOF_PF15_NC))

/*
 * GPIO Port G Output default values
 */
#define VAL_GPIOG_ODR               (PIN_ODR_HIGH(GPIOG_PG0_NC) | \
                                     PIN_ODR_HIGH(GPIOG_PG1_NC) | \
                                     PIN_ODR_HIGH(GPIOG_PG2_NC) | \
                                     PIN_ODR_HIGH(GPIOG_PG3_NC) | \
                                     PIN_ODR_HIGH(GPIOG_PG4_NC) | \
                                     PIN_ODR_HIGH(GPIOG_PG5_NC) | \
                                     PIN_ODR_HIGH(GPIOG_PG6_NC) | \
                                     PIN_ODR_HIGH(GPIOG_PG7_NC) | \
                                     PIN_ODR_HIGH(GPIOG_PG8_NC) | \
                                     PIN_ODR_HIGH(GPIOG_PG9_NC) | \
                                     PIN_ODR_HIGH(GPIOG_PG10_NC) | \
                                     PIN_ODR_HIGH(GPIOG_PG11_NC) | \
                                     PIN_ODR_HIGH(GPIOG_PG12_NC) | \
                                     PIN_ODR_HIGH(GPIOG_PG13_NC) | \
                                     PIN_ODR_HIGH(GPIOG_PG14_NC) | \
                                     PIN_ODR_HIGH(GPIOG_PG15_NC))

/*
 * GPIO Port H Output default values
 */
#define VAL_GPIOH_ODR               (PIN_ODR_HIGH(GPIOH_PH0_CLK25) | \
                                     PIN_ODR_HIGH(GPIOH_PH1_NC) | \
                                     PIN_ODR_HIGH(GPIOH_PH2_NC) | \
                                     PIN_ODR_HIGH(GPIOH_PH3_NC) | \
                                     PIN_ODR_HIGH(GPIOH_PH4_NC) | \
                                     PIN_ODR_HIGH(GPIOH_PH5_NC) | \
                                     PIN_ODR_HIGH(GPIOH_PH6_NC) | \
                                     PIN_ODR_HIGH(GPIOH_PH7_NC) | \
                                     PIN_ODR_HIGH(GPIOH_PH8_NC) | \
                                     PIN_ODR_HIGH(GPIOH_PH9_NC) | \
                                     PIN_ODR_HIGH(GPIOH_PH10_NC) | \
                                     PIN_ODR_HIGH(GPIOH_PH11_NC) | \
                                     PIN_ODR_HIGH(GPIOH_PH12_NC) | \
                                     PIN_ODR_HIGH(GPIOH_PH13_NC) | \
                                     PIN_ODR_HIGH(GPIOH_PH14_NC) | \
                                     PIN_ODR_HIGH(GPIOH_PH15_NC))

/*
 * GPIO Port I Output default values
 */
#define VAL_GPIOI_ODR               (PIN_ODR_HIGH(GPIOI_PI0_NC) | \
                                     PIN_ODR_HIGH(GPIOI_PI1_NC) | \
                                     PIN_ODR_HIGH(GPIOI_PI2_NC) | \
                                     PIN_ODR_HIGH(GPIOI_PI3_NC) | \
                                     PIN_ODR_HIGH(GPIOI_PI4_NC) | \
                                     PIN_ODR_HIGH(GPIOI_PI5_NC) | \
                                     PIN_ODR_HIGH(GPIOI_PI6_NC) | \
                                     PIN_ODR_HIGH(GPIOI_PI7_NC) | \
                                     PIN_ODR_HIGH(GPIOI_PI8_NC) | \
                                     PIN_ODR_HIGH(GPIOI_PI9_NC) | \
                                     PIN_ODR_HIGH(GPIOI_PI10_NC) | \
                                     PIN_ODR_HIGH(GPIOI_PI11_NC) | \
                                     PIN_ODR_HIGH(GPIOI_PI12_NC) | \
                                     PIN_ODR_HIGH(GPIOI_PI13_NC) | \
                                     PIN_ODR_HIGH(GPIOI_PI14_NC) | \
                                     PIN_ODR_HIGH(GPIOI_PI15_NC))

/*
 * GPIO Port J Output default values
 */
#define VAL_GPIOJ_ODR               (PIN_ODR_HIGH(GPIOJ_PJ0_NC) | \
                                     PIN_ODR_HIGH(GPIOJ_PJ1_NC) | \
                                     PIN_ODR_HIGH(GPIOJ_PJ2_NC) | \
                                     PIN_ODR_HIGH(GPIOJ_PJ3_NC) | \
                                     PIN_ODR_HIGH(GPIOJ_PJ4_NC) | \
                                     PIN_ODR_HIGH(GPIOJ_PJ5_NC) | \
                                     PIN_ODR_HIGH(GPIOJ_PJ6_NC) | \
                                     PIN_ODR_HIGH(GPIOJ_PJ7_NC) | \
                                     PIN_ODR_HIGH(GPIOJ_PJ8_NC) | \
                                     PIN_ODR_HIGH(GPIOJ_PJ9_NC) | \
                                     PIN_ODR_HIGH(GPIOJ_PJ10_NC) | \
                                     PIN_ODR_HIGH(GPIOJ_PJ11_NC) | \
                                     PIN_ODR_HIGH(GPIOJ_PJ12_NC) | \
                                     PIN_ODR_HIGH(GPIOJ_PJ13_NC) | \
                                     PIN_ODR_HIGH(GPIOJ_PJ14_NC) | \
                                     PIN_ODR_HIGH(GPIOJ_PJ15_NC))

/*
 * GPIO Port K Output default values
 */
#define VAL_GPIOK_ODR               (PIN_ODR_HIGH(GPIOK_PK0_NC) | \
                                     PIN_ODR_HIGH(GPIOK_PK1_NC) | \
                                     PIN_ODR_HIGH(GPIOK_PK2_NC) | \
                                     PIN_ODR_HIGH(GPIOK_PK3_NC) | \
                                     PIN_ODR_HIGH(GPIOK_PK4_NC) | \
                                     PIN_ODR_HIGH(GPIOK_PK5_NC) | \
                                     PIN_ODR_HIGH(GPIOK_PK6_NC) | \
                                     PIN_ODR_HIGH(GPIOK_PK7_NC) | \
                                     PIN_ODR_HIGH(GPIOK_PK8_NC) | \
                                     PIN_ODR_HIGH(GPIOK_PK9_NC) | \
                                     PIN_ODR_HIGH(GPIOK_PK10_NC) | \
                                     PIN_ODR_HIGH(GPIOK_PK11_NC) | \
                                     PIN_ODR_HIGH(GPIOK_PK12_NC) | \
                                     PIN_ODR_HIGH(GPIOK_PK13_NC) | \
                                     PIN_ODR_HIGH(GPIOK_PK14_NC) | \
                                     PIN_ODR_HIGH(GPIOK_PK15_NC))

/*
 * GPIO Port A Pullups and downs
 */
#define VAL_GPIOA_PUPDR             (PIN_PUPDR_PULLUP(GPIOA_PA0_WDKICK) | \
                                     PIN_PUPDR_PULLUP(GPIOA_PA1_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOA_PA2_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOA_PA3_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOA_PA4_WDOGDIS_N) | \
                                     PIN_PUPDR_PULLUP(GPIOA_PA5_SPI1_CLK) | \
                                     PIN_PUPDR_PULLUP(GPIOA_PA6_SPI1_MISO) | \
                                     PIN_PUPDR_PULLUP(GPIOA_PA7_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOA_PA8_TP_E41) | \
                                     PIN_PUPDR_PULLUP(GPIOA_PA9_SPI1_CS_A_N) | \
                                     PIN_PUPDR_PULLUP(GPIOA_PA10_SPI1_CS_B_N) | \
                                     PIN_PUPDR_PULLUP(GPIOA_PA11_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOA_PA12_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOA_PA13_CPU_SWDIO) | \
                                     PIN_PUPDR_PULLUP(GPIOA_PA14_CPU_SWCLK) | \
                                     PIN_PUPDR_PULLUP(GPIOA_PA15_NC))

/*
 * GPIO Port B Pullups and downs
 */
#define VAL_GPIOB_PUPDR             (PIN_PUPDR_FLOATING(GPIOB_PB0_MEAS_5VCURR) | \
                                     PIN_PUPDR_FLOATING(GPIOB_PB1_MEAS_12VCURR) | \
                                     PIN_PUPDR_PULLUP(GPIOB_PB2_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOB_PB3_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOB_PB4_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOB_PB5_SPI1_MOSI) | \
                                     PIN_PUPDR_PULLUP(GPIOB_PB6_I2C_SCL) | \
                                     PIN_PUPDR_PULLUP(GPIOB_PB7_I2C_SDA) | \
                                     PIN_PUPDR_PULLUP(GPIOB_PB8_POWER_EN_A) | \
                                     PIN_PUPDR_PULLUP(GPIOB_PB9_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOB_PB10_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOB_PB11_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOB_PB12_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOB_PB13_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOB_PB14_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOB_PB15_RELAYCTRL))

/*
 * GPIO Port C Pullups and downs
 */
#define VAL_GPIOC_PUPDR             (PIN_PUPDR_FLOATING(GPIOC_PC0_MEAS_3V3) | \
                                     PIN_PUPDR_FLOATING(GPIOC_PC1_MEAS_5V) | \
                                     PIN_PUPDR_FLOATING(GPIOC_PC2_MEAS_12V) | \
                                     PIN_PUPDR_PULLUP(GPIOC_PC3_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOC_PC4_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOC_PC5_SYSRESET_ENA) | \
                                     PIN_PUPDR_PULLUP(GPIOC_PC6_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOC_PC7_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOC_PC8_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOC_PC9_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOC_PC10_FADRN_0) | \
                                     PIN_PUPDR_PULLUP(GPIOC_PC11_FADRN_1) | \
                                     PIN_PUPDR_PULLUP(GPIOC_PC12_FADRN_2) | \
                                     PIN_PUPDR_PULLUP(GPIOC_PC13_FTOGGLE) | \
                                     PIN_PUPDR_PULLUP(GPIOC_PC14_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOC_PC15_NC))

/*
 * GPIO Port D Pullups and downs
 */
#define VAL_GPIOD_PUPDR             (PIN_PUPDR_PULLUP(GPIOD_PD0_ACFAIL_IN) | \
                                     PIN_PUPDR_PULLUP(GPIOD_PD1_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOD_PD2_SYSRESET_IN) | \
                                     PIN_PUPDR_PULLUP(GPIOD_PD3_SYSFAIL_IN) | \
                                     PIN_PUPDR_PULLUP(GPIOD_PD4_USART2_TXEN) | \
                                     PIN_PUPDR_PULLUP(GPIOD_PD5_USART2_TX) | \
                                     PIN_PUPDR_PULLUP(GPIOD_PD6_USART2_RX) | \
                                     PIN_PUPDR_PULLUP(GPIOD_PD7_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOD_PD8_USART_TX) | \
                                     PIN_PUPDR_PULLUP(GPIOD_PD9_USART_RX) | \
                                     PIN_PUPDR_PULLUP(GPIOD_PD10_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOD_PD11_LED_DEBUG) | \
                                     PIN_PUPDR_PULLUP(GPIOD_PD12_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOD_PD13_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOD_PD14_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOD_PD15_NC))

/*
 * GPIO Port E Pullups and downs
 */
#define VAL_GPIOE_PUPDR             (PIN_PUPDR_PULLUP(GPIOE_PE0_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOE_PE1_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOE_PE2_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOE_PE3_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOE_PE4_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOE_PE5_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOE_PE6_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOE_PE7_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOE_PE8_TP1_PE8) | \
                                     PIN_PUPDR_PULLUP(GPIOE_PE9_TP2_PE9) | \
                                     PIN_PUPDR_PULLUP(GPIOE_PE10_TP3_PE10) | \
                                     PIN_PUPDR_PULLUP(GPIOE_PE11_TP4_PE11) | \
                                     PIN_PUPDR_PULLUP(GPIOE_PE12_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOE_PE13_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOE_PE14_SYSTEM_ERROR) | \
                                     PIN_PUPDR_PULLUP(GPIOE_PE15_SYSTEM_OK))

/*
 * GPIO Port F Pullups and downs
 */
#define VAL_GPIOF_PUPDR             (PIN_PUPDR_PULLUP(GPIOF_PF0_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOF_PF1_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOF_PF2_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOF_PF3_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOF_PF4_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOF_PF5_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOF_PF6_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOF_PF7_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOF_PF8_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOF_PF9_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOF_PF10_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOF_PF11_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOF_PF12_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOF_PF13_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOF_PF14_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOF_PF15_NC))

/*
 * GPIO Port G Pullups and downs
 */
#define VAL_GPIOG_PUPDR             (PIN_PUPDR_PULLUP(GPIOG_PG0_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOG_PG1_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOG_PG2_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOG_PG3_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOG_PG4_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOG_PG5_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOG_PG6_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOG_PG7_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOG_PG8_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOG_PG9_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOG_PG10_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOG_PG11_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOG_PG12_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOG_PG13_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOG_PG14_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOG_PG15_NC))

/*
 * GPIO Port H Pullups and downs
 */
#define VAL_GPIOH_PUPDR             (PIN_PUPDR_PULLUP(GPIOH_PH0_CLK25) | \
                                     PIN_PUPDR_PULLUP(GPIOH_PH1_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOH_PH2_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOH_PH3_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOH_PH4_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOH_PH5_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOH_PH6_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOH_PH7_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOH_PH8_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOH_PH9_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOH_PH10_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOH_PH11_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOH_PH12_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOH_PH13_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOH_PH14_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOH_PH15_NC))

/*
 * GPIO Port I Pullups and downs
 */
#define VAL_GPIOI_PUPDR             (PIN_PUPDR_PULLUP(GPIOI_PI0_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOI_PI1_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOI_PI2_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOI_PI3_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOI_PI4_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOI_PI5_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOI_PI6_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOI_PI7_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOI_PI8_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOI_PI9_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOI_PI10_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOI_PI11_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOI_PI12_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOI_PI13_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOI_PI14_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOI_PI15_NC))

/*
 * GPIO Port J Pullups and downs
 */
#define VAL_GPIOJ_PUPDR             (PIN_PUPDR_PULLUP(GPIOJ_PJ0_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOJ_PJ1_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOJ_PJ2_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOJ_PJ3_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOJ_PJ4_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOJ_PJ5_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOJ_PJ6_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOJ_PJ7_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOJ_PJ8_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOJ_PJ9_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOJ_PJ10_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOJ_PJ11_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOJ_PJ12_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOJ_PJ13_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOJ_PJ14_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOJ_PJ15_NC))

/*
 * GPIO Port K Pullups and downs
 */
#define VAL_GPIOK_PUPDR             (PIN_PUPDR_PULLUP(GPIOK_PK0_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOK_PK1_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOK_PK2_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOK_PK3_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOK_PK4_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOK_PK5_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOK_PK6_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOK_PK7_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOK_PK8_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOK_PK9_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOK_PK10_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOK_PK11_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOK_PK12_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOK_PK13_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOK_PK14_NC) | \
                                     PIN_PUPDR_PULLUP(GPIOK_PK15_NC))

/*
 * GPIO Port A Alternate functions
 */
#define VAL_GPIOA_AFRL              (PIN_AFIO_AF_0(GPIOA_PA0_WDKICK) | \
                                     PIN_AFIO_AF_0(GPIOA_PA1_NC) | \
                                     PIN_AFIO_AF_0(GPIOA_PA2_NC) | \
                                     PIN_AFIO_AF_0(GPIOA_PA3_NC) | \
                                     PIN_AFIO_AF_0(GPIOA_PA4_WDOGDIS_N) | \
                                     PIN_AFIO_AF_5(GPIOA_PA5_SPI1_CLK) | \
                                     PIN_AFIO_AF_5(GPIOA_PA6_SPI1_MISO) | \
                                     PIN_AFIO_AF_0(GPIOA_PA7_NC))
#define VAL_GPIOA_AFRH              (PIN_AFIO_AF_0(GPIOA_PA8_TP_E41) | \
                                     PIN_AFIO_AF_0(GPIOA_PA9_SPI1_CS_A_N) | \
                                     PIN_AFIO_AF_0(GPIOA_PA10_SPI1_CS_B_N) | \
                                     PIN_AFIO_AF_0(GPIOA_PA11_NC) | \
                                     PIN_AFIO_AF_0(GPIOA_PA12_NC) | \
                                     PIN_AFIO_AF_0(GPIOA_PA13_CPU_SWDIO) | \
                                     PIN_AFIO_AF_0(GPIOA_PA14_CPU_SWCLK) | \
                                     PIN_AFIO_AF_0(GPIOA_PA15_NC))

/*
 * GPIO Port B Alternate functions
 */
#define VAL_GPIOB_AFRL              (PIN_AFIO_AF_0(GPIOB_PB0_MEAS_5VCURR) | \
                                     PIN_AFIO_AF_0(GPIOB_PB1_MEAS_12VCURR) | \
                                     PIN_AFIO_AF_0(GPIOB_PB2_NC) | \
                                     PIN_AFIO_AF_0(GPIOB_PB3_NC) | \
                                     PIN_AFIO_AF_0(GPIOB_PB4_NC) | \
                                     PIN_AFIO_AF_5(GPIOB_PB5_SPI1_MOSI) | \
                                     PIN_AFIO_AF_4(GPIOB_PB6_I2C_SCL) | \
                                     PIN_AFIO_AF_4(GPIOB_PB7_I2C_SDA))
#define VAL_GPIOB_AFRH              (PIN_AFIO_AF_0(GPIOB_PB8_POWER_EN_A) | \
                                     PIN_AFIO_AF_0(GPIOB_PB9_NC) | \
                                     PIN_AFIO_AF_0(GPIOB_PB10_NC) | \
                                     PIN_AFIO_AF_0(GPIOB_PB11_NC) | \
                                     PIN_AFIO_AF_0(GPIOB_PB12_NC) | \
                                     PIN_AFIO_AF_0(GPIOB_PB13_NC) | \
                                     PIN_AFIO_AF_0(GPIOB_PB14_NC) | \
                                     PIN_AFIO_AF_0(GPIOB_PB15_RELAYCTRL))

/*
 * GPIO Port C Alternate functions
 */
#define VAL_GPIOC_AFRL              (PIN_AFIO_AF_0(GPIOC_PC0_MEAS_3V3) | \
                                     PIN_AFIO_AF_0(GPIOC_PC1_MEAS_5V) | \
                                     PIN_AFIO_AF_0(GPIOC_PC2_MEAS_12V) | \
                                     PIN_AFIO_AF_0(GPIOC_PC3_NC) | \
                                     PIN_AFIO_AF_0(GPIOC_PC4_NC) | \
                                     PIN_AFIO_AF_0(GPIOC_PC5_SYSRESET_ENA) | \
                                     PIN_AFIO_AF_0(GPIOC_PC6_NC) | \
                                     PIN_AFIO_AF_0(GPIOC_PC7_NC))
#define VAL_GPIOC_AFRH              (PIN_AFIO_AF_0(GPIOC_PC8_NC) | \
                                     PIN_AFIO_AF_0(GPIOC_PC9_NC) | \
                                     PIN_AFIO_AF_0(GPIOC_PC10_FADRN_0) | \
                                     PIN_AFIO_AF_0(GPIOC_PC11_FADRN_1) | \
                                     PIN_AFIO_AF_0(GPIOC_PC12_FADRN_2) | \
                                     PIN_AFIO_AF_0(GPIOC_PC13_FTOGGLE) | \
                                     PIN_AFIO_AF_0(GPIOC_PC14_NC) | \
                                     PIN_AFIO_AF_0(GPIOC_PC15_NC))

/*
 * GPIO Port D Alternate functions
 */
#define VAL_GPIOD_AFRL              (PIN_AFIO_AF_0(GPIOD_PD0_ACFAIL_IN) | \
                                     PIN_AFIO_AF_0(GPIOD_PD1_NC) | \
                                     PIN_AFIO_AF_0(GPIOD_PD2_SYSRESET_IN) | \
                                     PIN_AFIO_AF_0(GPIOD_PD3_SYSFAIL_IN) | \
                                     PIN_AFIO_AF_0(GPIOD_PD4_USART2_TXEN) | \
                                     PIN_AFIO_AF_7(GPIOD_PD5_USART2_TX) | \
                                     PIN_AFIO_AF_7(GPIOD_PD6_USART2_RX) | \
                                     PIN_AFIO_AF_0(GPIOD_PD7_NC))
#define VAL_GPIOD_AFRH              (PIN_AFIO_AF_7(GPIOD_PD8_USART_TX) | \
                                     PIN_AFIO_AF_7(GPIOD_PD9_USART_RX) | \
                                     PIN_AFIO_AF_0(GPIOD_PD10_NC) | \
                                     PIN_AFIO_AF_0(GPIOD_PD11_LED_DEBUG) | \
                                     PIN_AFIO_AF_0(GPIOD_PD12_NC) | \
                                     PIN_AFIO_AF_0(GPIOD_PD13_NC) | \
                                     PIN_AFIO_AF_0(GPIOD_PD14_NC) | \
                                     PIN_AFIO_AF_0(GPIOD_PD15_NC))

/*
 * GPIO Port E Alternate functions
 */
#define VAL_GPIOE_AFRL              (PIN_AFIO_AF_0(GPIOE_PE0_NC) | \
                                     PIN_AFIO_AF_0(GPIOE_PE1_NC) | \
                                     PIN_AFIO_AF_0(GPIOE_PE2_NC) | \
                                     PIN_AFIO_AF_0(GPIOE_PE3_NC) | \
                                     PIN_AFIO_AF_0(GPIOE_PE4_NC) | \
                                     PIN_AFIO_AF_0(GPIOE_PE5_NC) | \
                                     PIN_AFIO_AF_0(GPIOE_PE6_NC) | \
                                     PIN_AFIO_AF_0(GPIOE_PE7_NC))
#define VAL_GPIOE_AFRH              (PIN_AFIO_AF_0(GPIOE_PE8_TP1_PE8) | \
                                     PIN_AFIO_AF_0(GPIOE_PE9_TP2_PE9) | \
                                     PIN_AFIO_AF_0(GPIOE_PE10_TP3_PE10) | \
                                     PIN_AFIO_AF_0(GPIOE_PE11_TP4_PE11) | \
                                     PIN_AFIO_AF_0(GPIOE_PE12_NC) | \
                                     PIN_AFIO_AF_0(GPIOE_PE13_NC) | \
                                     PIN_AFIO_AF_0(GPIOE_PE14_SYSTEM_ERROR) | \
                                     PIN_AFIO_AF_0(GPIOE_PE15_SYSTEM_OK))

/*
 * GPIO Port F Alternate functions
 */
#define VAL_GPIOF_AFRL              (PIN_AFIO_AF_0(GPIOF_PF0_NC) | \
                                     PIN_AFIO_AF_0(GPIOF_PF1_NC) | \
                                     PIN_AFIO_AF_0(GPIOF_PF2_NC) | \
                                     PIN_AFIO_AF_0(GPIOF_PF3_NC) | \
                                     PIN_AFIO_AF_0(GPIOF_PF4_NC) | \
                                     PIN_AFIO_AF_0(GPIOF_PF5_NC) | \
                                     PIN_AFIO_AF_0(GPIOF_PF6_NC) | \
                                     PIN_AFIO_AF_0(GPIOF_PF7_NC))
#define VAL_GPIOF_AFRH              (PIN_AFIO_AF_0(GPIOF_PF8_NC) | \
                                     PIN_AFIO_AF_0(GPIOF_PF9_NC) | \
                                     PIN_AFIO_AF_0(GPIOF_PF10_NC) | \
                                     PIN_AFIO_AF_0(GPIOF_PF11_NC) | \
                                     PIN_AFIO_AF_0(GPIOF_PF12_NC) | \
                                     PIN_AFIO_AF_0(GPIOF_PF13_NC) | \
                                     PIN_AFIO_AF_0(GPIOF_PF14_NC) | \
                                     PIN_AFIO_AF_0(GPIOF_PF15_NC))

/*
 * GPIO Port G Alternate functions
 */
#define VAL_GPIOG_AFRL              (PIN_AFIO_AF_0(GPIOG_PG0_NC) | \
                                     PIN_AFIO_AF_0(GPIOG_PG1_NC) | \
                                     PIN_AFIO_AF_0(GPIOG_PG2_NC) | \
                                     PIN_AFIO_AF_0(GPIOG_PG3_NC) | \
                                     PIN_AFIO_AF_0(GPIOG_PG4_NC) | \
                                     PIN_AFIO_AF_0(GPIOG_PG5_NC) | \
                                     PIN_AFIO_AF_0(GPIOG_PG6_NC) | \
                                     PIN_AFIO_AF_0(GPIOG_PG7_NC))
#define VAL_GPIOG_AFRH              (PIN_AFIO_AF_0(GPIOG_PG8_NC) | \
                                     PIN_AFIO_AF_0(GPIOG_PG9_NC) | \
                                     PIN_AFIO_AF_0(GPIOG_PG10_NC) | \
                                     PIN_AFIO_AF_0(GPIOG_PG11_NC) | \
                                     PIN_AFIO_AF_0(GPIOG_PG12_NC) | \
                                     PIN_AFIO_AF_0(GPIOG_PG13_NC) | \
                                     PIN_AFIO_AF_0(GPIOG_PG14_NC) | \
                                     PIN_AFIO_AF_0(GPIOG_PG15_NC))

/*
 * GPIO Port H Alternate functions
 */
#define VAL_GPIOH_AFRL              (PIN_AFIO_AF_0(GPIOH_PH0_CLK25) | \
                                     PIN_AFIO_AF_0(GPIOH_PH1_NC) | \
                                     PIN_AFIO_AF_0(GPIOH_PH2_NC) | \
                                     PIN_AFIO_AF_0(GPIOH_PH3_NC) | \
                                     PIN_AFIO_AF_0(GPIOH_PH4_NC) | \
                                     PIN_AFIO_AF_0(GPIOH_PH5_NC) | \
                                     PIN_AFIO_AF_0(GPIOH_PH6_NC) | \
                                     PIN_AFIO_AF_0(GPIOH_PH7_NC))
#define VAL_GPIOH_AFRH              (PIN_AFIO_AF_0(GPIOH_PH8_NC) | \
                                     PIN_AFIO_AF_0(GPIOH_PH9_NC) | \
                                     PIN_AFIO_AF_0(GPIOH_PH10_NC) | \
                                     PIN_AFIO_AF_0(GPIOH_PH11_NC) | \
                                     PIN_AFIO_AF_0(GPIOH_PH12_NC) | \
                                     PIN_AFIO_AF_0(GPIOH_PH13_NC) | \
                                     PIN_AFIO_AF_0(GPIOH_PH14_NC) | \
                                     PIN_AFIO_AF_0(GPIOH_PH15_NC))

/*
 * GPIO Port I Alternate functions
 */
#define VAL_GPIOI_AFRL              (PIN_AFIO_AF_0(GPIOI_PI0_NC) | \
                                     PIN_AFIO_AF_0(GPIOI_PI1_NC) | \
                                     PIN_AFIO_AF_0(GPIOI_PI2_NC) | \
                                     PIN_AFIO_AF_0(GPIOI_PI3_NC) | \
                                     PIN_AFIO_AF_0(GPIOI_PI4_NC) | \
                                     PIN_AFIO_AF_0(GPIOI_PI5_NC) | \
                                     PIN_AFIO_AF_0(GPIOI_PI6_NC) | \
                                     PIN_AFIO_AF_0(GPIOI_PI7_NC))
#define VAL_GPIOI_AFRH              (PIN_AFIO_AF_0(GPIOI_PI8_NC) | \
                                     PIN_AFIO_AF_0(GPIOI_PI9_NC) | \
                                     PIN_AFIO_AF_0(GPIOI_PI10_NC) | \
                                     PIN_AFIO_AF_0(GPIOI_PI11_NC) | \
                                     PIN_AFIO_AF_0(GPIOI_PI12_NC) | \
                                     PIN_AFIO_AF_0(GPIOI_PI13_NC) | \
                                     PIN_AFIO_AF_0(GPIOI_PI14_NC) | \
                                     PIN_AFIO_AF_0(GPIOI_PI15_NC))

/*
 * GPIO Port J Alternate functions
 */
#define VAL_GPIOJ_AFRL              (PIN_AFIO_AF_0(GPIOJ_PJ0_NC) | \
                                     PIN_AFIO_AF_0(GPIOJ_PJ1_NC) | \
                                     PIN_AFIO_AF_0(GPIOJ_PJ2_NC) | \
                                     PIN_AFIO_AF_0(GPIOJ_PJ3_NC) | \
                                     PIN_AFIO_AF_0(GPIOJ_PJ4_NC) | \
                                     PIN_AFIO_AF_0(GPIOJ_PJ5_NC) | \
                                     PIN_AFIO_AF_0(GPIOJ_PJ6_NC) | \
                                     PIN_AFIO_AF_0(GPIOJ_PJ7_NC))
#define VAL_GPIOJ_AFRH              (PIN_AFIO_AF_0(GPIOJ_PJ8_NC) | \
                                     PIN_AFIO_AF_0(GPIOJ_PJ9_NC) | \
                                     PIN_AFIO_AF_0(GPIOJ_PJ10_NC) | \
                                     PIN_AFIO_AF_0(GPIOJ_PJ11_NC) | \
                                     PIN_AFIO_AF_0(GPIOJ_PJ12_NC) | \
                                     PIN_AFIO_AF_0(GPIOJ_PJ13_NC) | \
                                     PIN_AFIO_AF_0(GPIOJ_PJ14_NC) | \
                                     PIN_AFIO_AF_0(GPIOJ_PJ15_NC))

/*
 * GPIO Port K Alternate functions
 */
#define VAL_GPIOK_AFRL              (PIN_AFIO_AF_0(GPIOK_PK0_NC) | \
                                     PIN_AFIO_AF_0(GPIOK_PK1_NC) | \
                                     PIN_AFIO_AF_0(GPIOK_PK2_NC) | \
                                     PIN_AFIO_AF_0(GPIOK_PK3_NC) | \
                                     PIN_AFIO_AF_0(GPIOK_PK4_NC) | \
                                     PIN_AFIO_AF_0(GPIOK_PK5_NC) | \
                                     PIN_AFIO_AF_0(GPIOK_PK6_NC) | \
                                     PIN_AFIO_AF_0(GPIOK_PK7_NC))
#define VAL_GPIOK_AFRH              (PIN_AFIO_AF_0(GPIOK_PK8_NC) | \
                                     PIN_AFIO_AF_0(GPIOK_PK9_NC) | \
                                     PIN_AFIO_AF_0(GPIOK_PK10_NC) | \
                                     PIN_AFIO_AF_0(GPIOK_PK11_NC) | \
                                     PIN_AFIO_AF_0(GPIOK_PK12_NC) | \
                                     PIN_AFIO_AF_0(GPIOK_PK13_NC) | \
                                     PIN_AFIO_AF_0(GPIOK_PK14_NC) | \
                                     PIN_AFIO_AF_0(GPIOK_PK15_NC))

#endif // IOMAP_H
