/*
    Copyright (C) 2014 Marco Veeneman

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

/**
 * @addtogroup CMSIS
 * @{
 */

/**
 * @addtogroup TM4C129x
 * @{
 */

#ifndef __TM4C129x_H
#define __TM4C129x_H

/** 
 * @addtogroup Configuration_section_for_CMSIS
 * @{
 */

/**
 * @brief Configuration of the Cortex-M4 Processor and Core Peripherals 
 */
#define __CM4_REV               0x0001  /**< Cortex-M4 Core Revision         */
#define __MPU_PRESENT           1       /**< MPU present                     */
#define __NVIC_PRIO_BITS        3       /**< Bits used for Priority Levels   */
#define __Vendor_SysTickConfig  0       /**< Use different SysTick Config    */
#define __FPU_PRESENT           1       /**< FPU present                     */

/**
 * @brief   TM4C129x Interrupt Number Definitions
 */
typedef enum IRQn
{
  /* TODO: check interrupt numbers with tm4c129 device */
  /***** Cortex-M4 Processor Exceptions Numbers ******************************/
  NonMaskableInt_IRQn   = -14,  /**< Cortex-M4 Non-Maskable Interrupt        */
  HardFault_IRQn        = -13,  /**< Cortex-M4 Hard Fault Interrupt          */
  MemoryManagement_IRQn = -12,  /**< Cortex-M4 Memory Management Interrupt   */
  BusFault_IRQn         = -11,  /**< Cortex-M4 Bus Fault Interrupt           */
  UsageFault_IRQn       = -10,  /**< Cortex-M4 Usage Fault Interrupt         */
  SVCall_IRQn           = -5,   /**< Cortex-M4 SV Call Interrupt             */
  DebugMonitor_IRQn     = -4,   /**< Cortex-M4 Debug Monitor Interrupt       */
  PendSV_IRQn           = -3,   /**< Cortex-M4 Pend SV Interrupt             */
  SysTick_IRQn          = -1,   /**< Cortex-M4 System Tick Interrupt         */
  /***** TM4C129x Specific Interrupt Numbers *********************************/
  GPIOA_IRQn            = 0,    /**< GPIO Port A                             */
  GPIOB_IRQn            = 1,    /**< GPIO Port B                             */
  GPIOC_IRQn            = 2,    /**< GPIO Port C                             */
  GPIOD_IRQn            = 3,    /**< GPIO Port D                             */
  GPIOE_IRQn            = 4,    /**< GPIO Port E                             */
  UART0_IRQn            = 5,    /**< UART0                                   */
  UART1_IRQn            = 6,    /**< UART1                                   */
  SSI0_IRQn             = 7,    /**< SSI0                                    */
  I2C0_IRQn             = 8,    /**< I2C0                                    */
  PWM0FAULT_IRQn        = 9,    /**< PWM0 Fault                              */
  PWM0GEN0_IRQn         = 10,   /**< PWM0 Generator 0                        */
  PWM0GEN1_IRQn         = 11,   /**< PWM0 Generator 1                        */
  PWM0GEN2_IRQn         = 12,   /**< PWM0 Generator 2                        */
  QEI0_IRQn             = 13,   /**< QEI0                                    */
  ADC0SEQ0_IRQn         = 14,   /**< ADC0 Sequence 0                         */
  ADC0SEQ1_IRQn         = 15,   /**< ADC0 Sequence 1                         */
  ADC0SEQ2_IRQn         = 16,   /**< ADC0 Sequence 2                         */
  ADC0SEQ3_IRQn         = 17,   /**< ADC0 Sequence 3                         */
  WATCHDOG_IRQn         = 18,   /**< Watchdog Timers 0 and 1                 */
  TIMER0A_IRQn          = 19,   /**< 16/32-Bit Timer 0A                      */
  TIMER0B_IRQn          = 20,   /**< 16/32-Bit Timer 0B                      */
  TIMER1A_IRQn          = 21,   /**< 16/32-Bit Timer 1A                      */
  TIMER1B_IRQn          = 22,   /**< 16/32-Bit Timer 1B                      */
  TIMER2A_IRQn          = 23,   /**< 16/32-Bit Timer 2A                      */
  TIMER2B_IRQn          = 24,   /**< 16/32-Bit Timer 2B                      */
  ACOMP0_IRQn           = 25,   /**< Analog Comparator 0                     */
  ACOMP1_IRQn           = 26,   /**< Analog Comparator 1                     */
  SYSCON_IRQn           = 28,   /**< System Control                          */
  FMCEECON_IRQn         = 29,   /**< Flash Memory Control and EEPROM Control */
  GPIOF_IRQn            = 30,   /**< GPIO Port F                             */
  UART2_IRQn            = 33,   /**< UART2                                   */
  SSI1_IRQn             = 34,   /**< SSI1                                    */
  TIMER3A_IRQn          = 35,   /**< 16/32-Bit Timer 3A                      */
  TIMER3B_IRQn          = 36,   /**< 16/32-Bit Timer 3B                      */
  I2C1_IRQn             = 37,   /**< I2C1                                    */
  QEI1_IRQn             = 38,   /**< QEI1                                    */
  CAN0_IRQn             = 39,   /**< CAN0                                    */
  CAN1_IRQn             = 40,   /**< CAN1                                    */
  HIBMODULE_IRQn        = 43,   /**< Hibernation Module                      */
  USB_IRQn              = 44,   /**< USB                                     */
  PWM0GEN3_IRQn         = 45,   /**< PWM0 Generator 3                        */
  UDMASFW_IRQn          = 46,   /**< UDMA Software                           */
  UDMAERR_IRQn          = 47,   /**< UDMA Error                              */
  ADC1SEQ0_IRQn         = 48,   /**< ADC1 Sequence 0                         */
  ADC1SEQ1_IRQn         = 49,   /**< ADC1 Sequence 1                         */
  ADC1SEQ2_IRQn         = 50,   /**< ADC1 Sequence 2                         */
  ADC1SEQ3_IRQn         = 51,   /**< ADC1 Sequence 3                         */
  SSI2_IRQn             = 57,   /**< SSI2                                    */
  SSI3_IRQn             = 58,   /**< SSI3                                    */
  UART3_IRQn            = 59,   /**< UART3                                   */
  UART4_IRQn            = 60,   /**< UART4                                   */
  UART5_IRQn            = 61,   /**< UART5                                   */
  UART6_IRQn            = 62,   /**< UART6                                   */
  UART7_IRQn            = 63,   /**< UART7                                   */
  I2C2_IRQn             = 68,   /**< I2C2                                    */
  I2C3_IRQn             = 69,   /**< I2C3                                    */
  TIMER4A_IRQn          = 70,   /**< 16/32-Bit Timer 4A                      */
  TIMER4B_IRQn          = 71,   /**< 16/32-Bit Timer 4B                      */
  TIMER5A_IRQn          = 92,   /**< 16/32-Bit Timer 5A                      */
  TIMER5B_IRQn          = 93,   /**< 16/32-Bit Timer 5B                      */
  WTIMER0A_IRQn         = 94,   /**< 32/64-Bit Timer 0A                      */
  WTIMER0B_IRQn         = 95,   /**< 32/64-Bit Timer 0B                      */
  WTIMER1A_IRQn         = 96,   /**< 32/64-Bit Timer 1A                      */
  WTIMER1B_IRQn         = 97,   /**< 32/64-Bit Timer 1B                      */
  WTIMER2A_IRQn         = 98,   /**< 32/64-Bit Timer 2A                      */
  WTIMER2B_IRQn         = 99,   /**< 32/64-Bit Timer 2B                      */
  WTIMER3A_IRQn         = 100,  /**< 32/64-Bit Timer 3A                      */
  WTIMER3B_IRQn         = 101,  /**< 32/64-Bit Timer 3B                      */
  WTIMER4A_IRQn         = 102,  /**< 32/64-Bit Timer 4A                      */
  WTIMER4B_IRQn         = 103,  /**< 32/64-Bit Timer 4B                      */
  WTIMER5A_IRQn         = 104,  /**< 32/64-Bit Timer 5A                      */
  WTIMER5B_IRQn         = 105,  /**< 32/64-Bit Timer 5B                      */
  SYSEXCEPT_IRQn        = 106,  /**< System Exception (imprecise)            */
  PWM1GEN0_IRQn         = 134,  /**< PWM1 Generator 0                        */
  PWM1GEN1_IRQn         = 135,  /**< PWM1 Generator 1                        */
  PWM1GEN2_IRQn         = 136,  /**< PWM1 Generator 2                        */
  PWM1GEN3_IRQn         = 137,  /**< PWM1 Generator 3                        */
  PWM1FAULT_IRQn        = 138   /**< PWM1 Fault                              */
} IRQn_Type;
 
/**
 * @}
 */

#include "core_cm4.h"   /* Cortex-M4 processor and core peripherals.*/
#include <stdint.h>

/**
 * @addtogroup Peripheral_registers_structures
 * @{
 */

/**
 * @brief Analog Comparator
 */
typedef struct
{
  __IO uint32_t MIS;            /**< Masked Interrupt Status                 */
  __I  uint32_t RIS;            /**< Raw Interrupt Status                    */
  __IO uint32_t INTEN;          /**< Interrupt Enable                        */
  __I  uint32_t _RESERVED0[1];  /**< Reserved                                */
  __IO uint32_t REFCTL;         /**< Reference Voltage Control               */
  __I  uint32_t _RESERVED1[3];  /**< Reserved                                */
  __I  uint32_t STAT0;          /**< Status 0                                */
  __IO uint32_t CTL0;           /**< Control 0                               */
  __I  uint32_t _RESERVED2[6];  /**< Reserved                                */
  __I  uint32_t STAT1;          /**< Status 1                                */
  __IO uint32_t CTL1;           /**< Control 1                               */
  __I  uint32_t _RESERVED3[990];/**< Reserved                                */
  __I  uint32_t PP;             /**< Peripheral Properties                   */
} ACMP_TypeDef;

/**
 * @brief Analog-to-Digital Converter
 */
typedef struct
{
  __IO uint32_t MUX;            /**< Sample Sequence Input Multiplexer
                                     Select                                  */
  __IO uint32_t CTL;            /**< Sample Sequence Control                 */
  __I  uint32_t FIFO;           /**< Sample Sequence Result FIFO             */
  __I  uint32_t FSTAT;          /**< Sample Sequence FIFO Status             */
  __IO uint32_t OP;             /**< Sample Sequence Operation               */
  __IO uint32_t DC;             /**< Sample Sequence Digital Comparator
                                     Select                                  */
  __I  uint32_t _RESERVED0[2];  /**< Reserved                                */
} ADC_SS_t;

typedef struct
{
  __IO uint32_t ACTSS;          /**< Active Sample Sequencer                 */
  __I  uint32_t RIS;            /**< Raw Interrupt Status                    */
  __IO uint32_t IM;             /**< Interrupt Mask                          */
  __IO uint32_t ISC;            /**< Interrupt Status and Clear              */
  __IO uint32_t OSTAT;          /**< Overflow Status                         */
  __IO uint32_t EMUX;           /**< Event Multiplexer Select                */
  __IO uint32_t USTAT;          /**< Underflow Status                        */
  __IO uint32_t TSSEL;          /**< Trigger Source Select                   */
  __IO uint32_t SSPRI;          /**< Sample Sequencer Priority               */
  __IO uint32_t SPC;            /**< Sample Phase Control                    */
  __IO uint32_t PSSI;           /**< Processor Sample Sequence Initiate      */
  __I  uint32_t _RESERVED0[1];  /**< Reserved                                */
  __IO uint32_t SAC;            /**< Sample Averaging Control                */
  __IO uint32_t DCISC;          /**< Digital Comparator Interrupt Status and
                                     Clear                                   */
  __IO uint32_t CTL;            /**< Control                                 */
  __I  uint32_t _RESERVED1[1];  /**< Reserved                                */
  ADC_SS_t SS[4];               /**< Sample Sequence 0, 1, 2 and 3           */
  __I  uint32_t _RESERVED2[784];/**< Reserved */
  __O  uint32_t DCRIC;          /**< Digital Comparator Reset Initial
                                     Conditions                              */
  __I  uint32_t _RESERVED3[63]; /**< Reserved                                */
  __IO uint32_t DCCTL[8];       /**< Digital Comparator Control 0 - 7        */
  __I  uint32_t _RESERVED4[8];  /**< Reserved                                */
  __IO uint32_t DCCMP[8];       /**< Digital Comparator Range 0 - 7          */
  __I  uint32_t _RESERVED5[88]; /**< Reserved                                */
  __I  uint32_t PP;             /**< Peripheral Properties                   */
  __IO uint32_t PC;             /**< Peripheral Configuration                */
  __IO uint32_t CC;             /**< Clock Configuration                     */
} ADC_TypeDef;

/**
 * @brief Controller Area Network
 */
typedef struct
{
  __IO uint32_t CRQ;            /**< Command Request                         */
  __IO uint32_t CMSK;           /**< Command Mask                            */
  __IO uint32_t MSK[2];         /**< Mask 1 and 2                            */
  __IO uint32_t ARB[2];         /**< Arbitration 1 and 2                     */
  __IO uint32_t MCTL;           /**< Message Control                         */
  __IO uint32_t DA[2];          /**< Data A1 and A2                          */
  __IO uint32_t DB[2];          /**< Data B1 and B2                          */
  __I  uint32_t _RESERVED0[13]; /**< Reserved                                */
} CAN_INTERFACE_t;

typedef struct
{
  __IO uint32_t CTL;            /**< Control                                 */
  __IO uint32_t STS;            /**< Status                                  */
  __I  uint32_t ERR;            /**< Error Counter                           */
  __IO uint32_t BIT;            /**< Bit Timing                              */
  __I  uint32_t INT;            /**< Interrupt                               */
  __IO uint32_t TST;            /**< Test                                    */
  __IO uint32_t BRPE;           /**< Baud Rate Prescaler Extension           */
  __I  uint32_t _RESERVED0[1];  /**< Reserved                                */
  CAN_INTERFACE_t IF[2];        /**< IF1 and IF2                             */
  __I  uint32_t _RESERVED1[8];  /**< Reserved                                */
  __I  uint32_t TXRQ[2];        /**< Transmission Request 1 and 2            */
  __I  uint32_t _RESERVED2[6];  /**< Reserved                                */
  __I  uint32_t NWDA[2];        /**< New Data 1 and 2                        */
  __I  uint32_t _RESERVED3[6];  /**< Reserved                                */
  __I  uint32_t MSGINT[2];      /**< Message 1 and 2 Interrupt Pending       */
  __I  uint32_t _RESERVED4[6];  /**< Reserved                                */
  __I  uint32_t MSGVAL[2];      /**< Message 1 and 2 Valid                   */
} CAN_TypeDef;

/**
 * @brief EEPROM Memory
 */
typedef struct
{
  __IO uint32_t EESIZE;         /**< Size Information                        */
  __IO uint32_t EEBLOCK;        /**< Current Block                           */
  __IO uint32_t EEOFFSET;       /**< Current Offset                          */
  __I  uint32_t _RESERVED0[1];  /**< Reserved                                */
  __IO uint32_t EERDWR;         /**< Read-Write                              */
  __IO uint32_t EERDWRINC;      /**< Read-Write with Increment               */
  __IO uint32_t EEDONE;         /**< Done Status                             */
  __IO uint32_t EESUPP;         /**< Support Control and Status              */
  __IO uint32_t EEUNLOCK;       /**< Unlock                                  */
  __I  uint32_t _RESERVED1[3];  /**< Reserved                                */
  __IO uint32_t EEPROT;         /**< Protection                              */
  __IO uint32_t EEPASS[3];      /**< Password                                */
  __IO uint32_t EEINT;          /**< Interrupt                               */
  __I  uint32_t _RESERVED2[3];  /**< Reserved                                */
  __IO uint32_t EEHIDE;         /**< Block Hide                              */
  __I  uint32_t _RESERVED3[11]; /**< Reserved                                */
  __IO uint32_t EEDBGME;        /**< Debug Mass Erase                        */
  __I  uint32_t _RESERVED4[975];/**< Reserved                                */
  __IO uint32_t EEPROMPP;       /**< Peripheral Properties                   */
} EEPROM_TypeDef;

/**
 * @brief Flash Memory
 */
typedef struct
{
  __IO uint32_t FMA;            /**< Flash Memory Address                    */
  __IO uint32_t FMD;            /**< Flash Memory Data                       */
  __IO uint32_t FMC;            /**< Flash Memory Control                    */
  __I  uint32_t FCRIS;          /**< Flash Controller Raw Interrupt Status   */
  __IO uint32_t FCIM;           /**< Flash Controller Interrupt Mask         */
  __IO uint32_t FCMISC;         /**< Masked Interrupt Status and Clear       */
  __I  uint32_t _RESERVED0[2];  /**< Reserved                                */
  __IO uint32_t FMC2;           /**< Flash Memory Control 2                  */
  __I  uint32_t _RESERVED1[3];  /**< Reserved                                */
  __IO uint32_t FWBVAL;         /**< Flash Write Buffer Valid                */
  __I  uint32_t _RESERVED2[51]; /**< Reserved                                */
  __IO uint32_t FWBN;           /**< Flash Write Buffer n                    */
  __I  uint32_t _RESERVED3[943];/**< Reserved                                */
  __I  uint32_t FSIZE;          /**< Flash Size                              */
  __I  uint32_t SSIZE;          /**< SRAM Size                               */
  __I  uint32_t _RESERVED4[1];  /**< Reserved                                */
  __IO uint32_t ROMSWMAP;       /**< ROM Software Map                        */
} FLASH_TypeDef;



/**
 * @brief General Purpose Input/Outputs
 */
typedef struct
{
  union {
    __IO uint32_t MASKED_ACCESS[256];   /**< Masked access of Data Register  */
    struct {
      __I  uint32_t _RESERVED0[255];    /**< Reserved                        */
      __IO uint32_t DATA;       /**< Data                                    */
    };
  };
  __IO uint32_t DIR;            /**< Direction                               */
  __IO uint32_t IS;             /**< Interrupt Sense                         */
  __IO uint32_t IBE;            /**< Interrupt Both Edges                    */
  __IO uint32_t IEV;            /**< Interrupt Event                         */
  __IO uint32_t IM;             /**< Interrupt Mask                          */
  __I  uint32_t RIS;            /**< Raw Interrupt Status                    */
  __I  uint32_t MIS;            /**< Masked Interrupt Status                 */
  __O  uint32_t ICR;            /**< Interrupt Clear                         */
  __IO uint32_t AFSEL;          /**< Alternate Function Select               */
  __I  uint32_t _RESERVED1[55]; /**< Reserved                                */
  __IO uint32_t DR2R;           /**< 2-mA Drive Select                       */
  __IO uint32_t DR4R;           /**< 4-mA Drive Select                       */
  __IO uint32_t DR8R;           /**< 8-mA Drive Select                       */
  __IO uint32_t ODR;            /**< Open Drain Select                       */
  __IO uint32_t PUR;            /**< Pull-Up Select                          */
  __IO uint32_t PDR;            /**< Pull-Down Select                        */
  __IO uint32_t SLR;            /**< Slew Rate Control Select                */
  __IO uint32_t DEN;            /**< Digital Enable                          */
  __IO uint32_t LOCK;           /**< Lock                                    */
  __IO uint32_t CR;             /**< Commit                                  */
  __IO uint32_t AMSEL;          /**< Analog Mode Select                      */
  __IO uint32_t PCTL;           /**< Port Control                            */
  __IO uint32_t ADCCTL;         /**< ADC Control                             */
  __IO uint32_t DMACTL;         /**< DMA Control                             */
  __IO uint32_t SI;             /**< */
  __IO uint32_t DR12R;          /**< */
  __IO uint32_t WAKEPEN;        /**< */
  __IO uint32_t WAKELVL;        /**< */
  __IO uint32_t WAKESTAT;       /**< */
  __I  uint32_t _RESERVED2[669];/**< */
  __I  uint32_t PP;             /**< */
  __IO uint32_t PC;             /**< */
} GPIO_TypeDef;

/**
 * @brief General Purpose Timer
 */
typedef struct
{
  __IO uint32_t CFG;            /**< Configuration                           */
  __IO uint32_t TAMR;           /**< Timer A Mode                            */
  __IO uint32_t TBMR;           /**< Timer B Mode                            */
  __IO uint32_t CTL;            /**< Control                                 */
  __IO uint32_t SYNC;           /**< Synchronize                             */
  __I  uint32_t _RESERVED0[1];  /**< Reserved                                */
  __IO uint32_t IMR;            /**< Interrupt Mask                          */
  __I  uint32_t RIS;            /**< Raw Interrupt Status                    */
  __I  uint32_t MIS;            /**< Masked Interrupt Status                 */
  __O  uint32_t ICR;            /**< Interrupt Clear                         */
  __IO uint32_t TAILR;          /**< Timer A Interval Load                   */
  __IO uint32_t TBILR;          /**< Timer B Interval Load                   */
  __IO uint32_t TAMATCHR;       /**< Timer A Match                           */
  __IO uint32_t TBMATCHR;       /**< Timer B Match                           */
  __IO uint32_t TAPR;           /**< Timer A Prescale                        */
  __IO uint32_t TBPR;           /**< Timer B Prescale                        */
  __IO uint32_t TAPMR;          /**< Timer A Prescale Match                  */
  __IO uint32_t TBPMR;          /**< Timer B Prescale Match                  */
  __I  uint32_t TAR;            /**< Timer A                                 */
  __I  uint32_t TBR;            /**< Timer B                                 */
  __IO uint32_t TAV;            /**< Timer A Value                           */
  __IO uint32_t TBV;            /**< Timer B Value                           */
  __I  uint32_t RTCPD;          /**< RTC Predivide                           */
  __I  uint32_t TAPS;           /**< Timer A Prescale Snapshot               */
  __I  uint32_t TBPS;           /**< Timer B Prescale Snapshot               */
  __I  uint32_t TAPV;           /**< Timer A Prescale Value                  */
  __I  uint32_t TBPV;           /**< Timer B Prescale Value                  */
  __I  uint32_t _RESERVED1[981];/**< Reserved                                */
  __I  uint32_t PP;             /**< Peripheral Properties                   */
} GPT_TypeDef;

/**
 * @brief Hibernation Module
 */
typedef struct
{
  __I  uint32_t RTCC;           /**< RTC Counter                             */
  __IO uint32_t RTCM0;          /**< RTC Match 0                             */
  __I  uint32_t _RESERVED0[1];  /**< Reserved                                */
  __IO uint32_t RTCLD;          /**< RTC Load                                */
  __IO uint32_t CTL;            /**< Control                                 */
  __IO uint32_t IM;             /**< Interrupt Mask                          */
  __I  uint32_t RIS;            /**< Raw Interrupt Status                    */
  __I  uint32_t MIS;            /**< Masked Interrupt Status                 */
  __IO uint32_t IC;             /**< Interrupt Clear                         */
  __IO uint32_t RTCT;           /**< RTC Trim                                */
  __IO uint32_t RTCSS;          /**< RTC Sub Seconds                         */
  __I  uint32_t _RESERVED1[1];  /**< Reserved                                */
  __IO uint32_t DATA;           /**< Data                                    */
} HIB_TypeDef;

/**
 * @brief Inter-Integrated Circuit
 */
typedef struct
{
  __IO uint32_t MSA;            /**< Master Slave Address                    */
  __IO uint32_t MCS;            /**< Master Control/Status                   */
  __IO uint32_t MDR;            /**< Master Data                             */
  __IO uint32_t MTPR;           /**< Master Timer Period                     */
  __IO uint32_t MIMR;           /**< Master Interrupt Mask                   */
  __I  uint32_t MRIS;           /**< Master Raw Interrupt Status             */
  __IO uint32_t MMIS;           /**< Master Masked Interrupt Status          */
  __O  uint32_t MICR;           /**< Master Interrupt Clear                  */
  __IO uint32_t MCR;            /**< Master Configuration                    */
  __IO uint32_t MCLKOCNT;       /**< Master Clock Low Timeout Count          */
  __I  uint32_t _RESERVED0[1];  /**< Reserved                                */
  __I  uint32_t MBMON;          /**< Master Bus Monitor                      */
  __IO uint32_t MCR2;           /**< Master Configuration 2                  */
  __I  uint32_t _RESERVED1[497];/**< Reserved                                */
  __IO uint32_t SOAR;           /**< Slave Own Address                       */
  __IO uint32_t SCSR;           /**< Slave Control/Status                    */
  __IO uint32_t SDR;            /**< Slave Data                              */
  __IO uint32_t SIMR;           /**< Slave Interrupt Mask                    */
  __I  uint32_t SRIS;           /**< Slave Raw Interrupt Status              */
  __I  uint32_t SMIS;           /**< Slave Masked Interrupt Status           */
  __O  uint32_t SICR;           /**< Slave Interrupt Clear                   */
  __IO uint32_t SOAR2;          /**< Slave Own Address 2                     */
  __IO uint32_t SACKCTL;        /**< Slave ACK Control                       */
  __I  uint32_t _RESERVED2[487];/**< Reserved                                */
  __I  uint32_t PP;             /**< Peripheral Properties                   */
  __I  uint32_t PC;             /**< Peripheral Configuration                */
} I2C_TypeDef;

/*
 * @brief Pulse Width Modulator
 */
typedef struct
{
  __IO uint32_t CTL;            /**< Control                                 */
  __IO uint32_t INTEN;          /**< Interrupt and Trigger Enable            */
  __I  uint32_t RIS;            /**< Raw Interrupt Status                    */
  __IO uint32_t ISC;            /**< Interrupt Status and Clear              */
  __IO uint32_t LOAD;           /**< Load                                    */
  __I  uint32_t COUNT;          /**< Counter                                 */
  __IO uint32_t CMP[2];         /**< Compare A, B                            */
  __IO uint32_t GEN[2];         /**< Generator A, B Control                  */
  __IO uint32_t DBCTL;          /**< Dead-Band Control                       */
  __IO uint32_t DBRISE;         /**< Dead-Band Rising-Edge Delay             */
  __IO uint32_t DBFALL;         /**< Dead-Band Falling-Edge Delay            */
  __IO uint32_t FLTSRC[2];      /**< Fault Source 0, 1                       */
  __IO uint32_t MINFLTPER;      /**< Minimum Fault Period                    */
} PWM_GENERATOR_T;

typedef struct
{
  union {
    __IO uint32_t SEN;          /**< Fault Pin Logic Sense, for GEN 0 and 1  */
    __I  uint32_t _RESERVED0[1];/**< Reserved, for GEN 2 and 3               */
  };
  __IO uint32_t STAT[2];        /**< Fault Status                            */
  __I  uint32_t _RESERVED1[29]; /**< Reserved                                */
} PWM_FLT_t;

typedef struct
{
  __IO uint32_t CTL;            /**< Master Control                          */
  __IO uint32_t SYNC;           /**< Time Base Sync                          */
  __IO uint32_t ENABLE;         /**< Output Enable                           */
  __IO uint32_t INVERT;         /**< Output Inversion                        */
  __IO uint32_t FAULT;          /**< Output Fault                            */
  __IO uint32_t INTEN;          /**< Interrupt Enable                        */
  __I  uint32_t RIS;            /**< Raw Interrupt Status                    */
  __IO uint32_t ISC;            /**< Interrupt Status and Clear              */
  __I  uint32_t STATUS;         /**< Status                                  */
  __IO uint32_t FAULTVAL;       /**< Fault Condition Value                   */
  __IO uint32_t ENUPD;          /**< Enable Update                           */
  __I  uint32_t _RESERVED0[5];  /**< Reserved                                */
  __IO PWM_GENERATOR_T PWM[4];  /**< PWM Generator 0, 1, 2 and 3             */
  __I  uint32_t _RESERVED1[432];/**< Reserved                                */
  PWM_FLT_t FLT[4];             /**< Fault registers 0, 1, 2 and 3           */
  __I  uint32_t _RESERVED2[368];/**< Reserved                                */
  __I  uint32_t PP;             /**< Peripheral Properties                   */
} PWM_TypeDef;

/**
 * @brief Quadrature Encoder Interface
 */
typedef struct
{
  __IO uint32_t CTL;            /**< Control                                 */
  __I  uint32_t STAT;           /**< Status                                  */
  __IO uint32_t POS;            /**< Position                                */
  __IO uint32_t MAXPOS;         /**< Maximum Position                        */
  __IO uint32_t LOAD;           /**< Timer Load                              */
  __I  uint32_t TIME;           /**< Timer                                   */
  __I  uint32_t COUNT;          /**< Velocity Counter                        */
  __I  uint32_t SPEED;          /**< Velocity                                */
  __IO uint32_t INTEN;          /**< Interrupt Enable                        */
  __I  uint32_t RIS;            /**< Raw Interrupt Status                    */
  __IO uint32_t ISC;            /**< Interrupt Status and Clear              */
} QEI_TypeDef;

/**
 * @brief Synchronous Serial Interface
 */
typedef struct
{
  __IO uint32_t CR[2];          /**< Control 0, 1                            */
  __IO uint32_t DR;             /**< Data                                    */
  __I  uint32_t SR;             /**< Status                                  */
  __IO uint32_t CPSR;           /**< Clock Prescale                          */
  __IO uint32_t IM;             /**< Interrupt Mask                          */
  __I  uint32_t RIS;            /**< Raw Interrupt Status                    */
  __I  uint32_t MIS;            /**< Masked Interrupt Status                 */
  __O  uint32_t ICR;            /**< Interrupt Clear                         */
  __IO uint32_t DMACTL;         /**< DMA Control                             */
  __I  uint32_t _RESERVED0[1000];/**< Reserved                               */
  __IO uint32_t CC;             /**< Clock Configuration                     */
} SSI_TypeDef;

/** 
 * @brief System Control
 */
typedef struct
{
  __I  uint32_t DID0;           /**< Device Identification 0                 */
  __I  uint32_t DID1;           /**< Device Identification 1                 */
  __I  uint32_t RESERVED0[12];  /**< Reserved                                */
  __IO uint32_t PBORCTL;        /**< Power-Temp Brown Out Control                 */
  __I  uint32_t RESERVED1[5];   /**< Reserved                                */
  __I  uint32_t RIS;            /**< Raw Interrupt Status                    */
  __IO uint32_t IMC;            /**< Interrupt Mask Control                  */
  __IO uint32_t MISC;           /**< Interrupt Status and Clear              */
  __IO uint32_t RESC;           /**< Reset Cause                             */
  __IO uint32_t PWRTC;          /**< Power-Temperature Cause */
  __IO uint32_t NMIC;           /**< NMI Cause Register */
  __I  uint32_t RESERVED2[5];   /**< Reserved */
  __IO uint32_t MOSCCTL;        /**< Main Oscillator Control */
  __I  uint32_t RESERVED3[12];  /**< Reserved */
  __IO uint32_t RSCLKCFG;       /**< Run and Sleep Mode Configuration Register */
  __I  uint32_t RESERVEDx[3];
  __IO uint32_t MEMTIM0;        /**< Memory Timing Parameter Register 0 for Main Flash and EEPROM */
  __I  uint32_t RESERVED4[29];  /**< Reserved */
  __IO uint32_t ALTCLKCFG;      /**< Alternate Clock Configuration */
  __I  uint32_t RESERVED5[2];   /**< Reserved                                */
  __IO uint32_t DSLPCLKCFG;     /**< Deep Sleep Clock Configuration          */
  __IO uint32_t DIVSCLK;        /**< Divisor and Source Clock Configuration  */
  __I  uint32_t SYSPROP;        /**< System Properties                       */
  __IO uint32_t PIOSCCAL;       /**< PIOSC Calibration                       */
  __I  uint32_t PIOSCSTAT;      /**< PIOSC Statistics                        */
  __I  uint32_t RESERVED6[2];   /**< Reserved                                */
  __IO uint32_t PLLFREQ0;       /**< PLL Frequency 0                         */
  __IO uint32_t PLLFREQ1;       /**< PLL Frequency 1                         */
  __I  uint32_t PLLSTAT;        /**< PLL Frequency Status                    */
  __I  uint32_t RESERVED7[7];   /**< Reserved                                */
  __IO uint32_t SLPPWRCFG;      /**< Sleep Power Configuration               */
  __IO uint32_t DSLPPWRCFG;     /**< Deep-Sleep Power Configuration          */
  __I  uint32_t RESERVED8[4];   /**< Reserved                                */
  __I  uint32_t NVMSTAT;        /**< Non-Volatile Memory Information */
  __I  uint32_t RESERVED9[4];   /**< Reserved */
  __IO uint32_t LDOSPCTL;       /**< LDO Sleep Power Control                 */
  __I  uint32_t LDOSPCAL;       /**< LDO Sleep Power Calibration             */
  __IO uint32_t LDODPCTL;       /**< LDO Deep-Sleep Power Control            */
  __I  uint32_t LDODPCAL;       /**< LDO Deep-Sleep Power Calibration        */
  __I  uint32_t RESERVED10[2];  /**< Reserved                                */
  __I  uint32_t SDPMST;         /**< Sleep/Deep-Sleep Power Mode Status      */
  __I  uint32_t RESERVED11[2];  /**< Reserved */
  __IO uint32_t RESBEHAVCTL;    /**< Reset Behavior Control Register */
  __I  uint32_t RESERVED12[6];  /**< Reserved */
  __IO uint32_t HSSR;           /**< Hardware System Service Request */
  __I  uint32_t RESERVED[34];   /**< Reserved */
  __I  uint32_t USBPDS;         /**< USB Power Domain Status */
  __IO uint32_t USBMPC;         /**< USB Memory Power Control */
  __I  uint32_t EMACPDS;        /**< Ethernet MAC Power Domain Status */
  __IO uint32_t EMACMPC;        /**< Ethernet MAC Memory Power Control */
  __I  uint32_t RESERVED13[2];  /**< Reserved */
  __I  uint32_t CAN0PDS;        /**< CAN 0 Power Domain Status */
  __IO uint32_t CAN0MPC;        /**< CAN 0 Memory Power Control */
  __I  uint32_t CAN1PDS;        /**< CAN 1 Power Domain Status */
  __IO uint32_t CAN1MPC;        /**< CAN 1 Memory Power Control */
  __I  uint32_t RESERVED14[22]; /**< Reserved */
  __I  uint32_t PPWD;           /**< WDT Peripheral Present                  */
  __I  uint32_t PPTIMER;        /**< GPT Peripheral Present                  */
  __I  uint32_t PPGPIO;         /**< GPIO Peripheral Present                 */
  __I  uint32_t PPDMA;          /**< UDMA Peripheral Present                 */
  __I  uint32_t PPEPI;          /**< EPI Peripheral Present */
  __I  uint32_t PPHIB;          /**< HIB Peripheral Present                  */
  __I  uint32_t PPUART;         /**< UART Peripheral Present                 */
  __I  uint32_t PPSSI;          /**< SSI Peripheral Present                  */
  __I  uint32_t PPI2C;          /**< I2C Peripheral Present                  */
  __I  uint32_t RESERVED15[1];  /**< Reserved                                */
  __I  uint32_t PPUSB;          /**< USB Peripheral Present                  */
  __I  uint32_t RESERVED16[1];  /**< Reserved                                */
  __I  uint32_t PPEPHY;         /**< Ethernet PHY Peripheral Present */
  __I  uint32_t PPCAN;          /**< CAN Peripheral Present                  */
  __I  uint32_t PPADC;          /**< ADC Peripheral Present                  */
  __I  uint32_t PPACMP;         /**< ACMP Peripheral Present                 */
  __I  uint32_t PPPWM;          /**< PWM Peripheral Present                  */
  __I  uint32_t PPQEI;          /**< QEI Peripheral Present                  */
  __I  uint32_t PPLPC;          /**< Low Pin Count Interface Peripheral Present */
  __I  uint32_t RESERVED17[1];  /**< Reserved */
  __I  uint32_t PPPECI;         /**< Platform Environment Control Interface Peripheral Present */
  __I  uint32_t PPFAN;          /**< Fan Control Peripheral Present */
  __I  uint32_t PPEEPROM;       /**< EEPROM Peripheral Present               */
  __I  uint32_t PPWTIMER;       /**< Wide GPT Peripheral Present             */
  __I  uint32_t RESERVED18[4];  /**< Reserved */
  __I  uint32_t PPRTS;          /**< Remote Temperature Sensor Peripheral Present */
  __I  uint32_t PPCCM;          /**< CRC Module Peripheral Present */
  __I  uint32_t RESERVED19[6];  /**< Reserved */
  __I  uint32_t PPLCD;          /**< LCD Peripheral Present */
  __I  uint32_t RESERVED20[1];  /**< Reserved */
  __I  uint32_t PPOWIRE;        /**< 1-Wire Peripheral Present */
  __I  uint32_t PPEMAC;         /**< Ethernet MAC Peripheral Present */
  __I  uint32_t PPPRB;          /**< Power Regulator Bus Peripheral Present */
  __I  uint32_t PPHIM;          /**< Human Interface Master Peripheral Present */
  __I  uint32_t RESERVED21[86]; /**< Reserved */
  __IO uint32_t SRWD;           /**< WDT Software Reset                      */
  __IO uint32_t SRTIMER;        /**< GPT Software Reset                      */
  __IO uint32_t SRGPIO;         /**< GPIO Software Reset                     */
  __IO uint32_t SRDMA;          /**< UDMA Software Reset                     */
  __IO uint32_t SREPI;          /**< EPI Software Reset */
  __IO uint32_t SRHIB;          /**< HIB Software Reset                      */
  __IO uint32_t SRUART;         /**< UART Software Reset                     */
  __IO uint32_t SRSSI;          /**< SSI Software Reset                      */
  __IO uint32_t SRI2C;          /**< I2C Software Reset                      */
  __I  uint32_t RESERVED22[1];  /**< Reserved                                */
  __IO uint32_t SRUSB;          /**< USB Software Reset                      */
  __I  uint32_t RESERVED23[1];  /**< Reserved                                */
  __IO uint32_t SREPHY;         /**< Ethernet PHY Software Reset */
  __IO uint32_t SRCAN;          /**< CAN Software Reset                      */
  __IO uint32_t SRADC;          /**< ADC Software Reset                      */
  __IO uint32_t SRACMP;         /**< ACMP Software Reset                     */
  __IO uint32_t SRPWM;          /**< PWM Software Reset                      */
  __IO uint32_t SRQEI;          /**< QEI Software Reset                      */
  __I  uint32_t RESERVED24[4];  /**< Reserved                                */
  __IO uint32_t SREEPROM;       /**< EEPROM Software Reset                   */
  __I  uint32_t RESERVED25[6];  /**< Reserved */
  __IO uint32_t SRCCM;          /**< CRC Module Software Reset */
  __I  uint32_t RESERVED26[9];  /**< Reserved */
  __IO uint32_t SREMAC;         /**< Ethernet MAC Software Reset */
  __I  uint32_t RESERVED27[24]; /**< Reserved                                */
  __IO uint32_t RCGCWD;         /**< WDT Run Mode Clock Gating Control       */
  __IO uint32_t RCGCTIMER;      /**< GPT Run Mode Clock Gating Control       */
  __IO uint32_t RCGCGPIO;       /**< GPIO Run Mode Clock Gating Control      */
  __IO uint32_t RCGCDMA;        /**< UDMA Run Mode Clock Gating Control      */
  __IO uint32_t RCGCEPI;        /**< EPI Run Mode Clock Gating Control */
  __IO uint32_t RCGCHIB;        /**< HIB Run Mode Clock Gating Control       */
  __IO uint32_t RCGCUART;       /**< UART Run Mode Control                   */
  __IO uint32_t RCGCSSI;        /**< SSI Run Mode Clock Gating Control       */
  __IO uint32_t RCGCI2C;        /**< I2C Run Mode Clock Gating Control       */
  __I  uint32_t RESERVED28[1];  /**< Reserved                                */
  __IO uint32_t RCGCUSB;        /**< USB Run Mode Clock Gating Control       */
  __I  uint32_t RESERVED29[1];  /**< Reserved                                */
  __IO uint32_t RCGCEPHY;       /**< Ethernet PHY Run Mode Clock Gating Control */
  __IO uint32_t RCGCCAN;        /**< CAN Run Mode Clock Gating Control       */
  __IO uint32_t RCGCADC;        /**< ADC Run Mode Clock Gating Control       */
  __IO uint32_t RCGCACMP;       /**< ACMP Run Mode Clock Gating Control      */
  __IO uint32_t RCGCPWM;        /**< PWM Run Mode Clock Gating Control       */
  __IO uint32_t RCGCQEI;        /**< QEI Run Mode Clock Gating Control       */
  __I  uint32_t RESERVED30[4];  /**< Reserved                                */
  __IO uint32_t RCGCEEPROM;     /**< EEPROM Run Mode Clock Gating Control    */
  __I  uint32_t RESERVED31[6];  /**< Reserved */
  __IO uint32_t RCGCCCM;        /**< CRC Module Run Mode Clock Gating Control */
  __I  uint32_t RESERVED32[9];  /**< Reserved */
  __IO uint32_t RCGCEMAC;       /**< Ethernet MAC Run Mode Clock Gating Control */
  __I  uint32_t RESERVED33[24]; /**< Reserved */
  __IO uint32_t SCGCWD;         /**< WDT Sleep Mode Clock Gating Control     */
  __IO uint32_t SCGCTIMER;      /**< GPT Sleep Mode Clock Gating Control     */
  __IO uint32_t SCGCGPIO;       /**< GPIO Sleep Mode Clock Gating Control    */
  __IO uint32_t SCGCDMA;        /**< UDMA Sleep Mode Clock Gating Control    */
  __IO uint32_t SCGCEPI;        /**< EPI Sleep Mode Clock Gating Control */
  __IO uint32_t SCGCHIB;        /**< HIB Sleep Mode Clock Gating Control     */
  __IO uint32_t SCGCUART;       /**< UART Sleep Mode Clock Gating Control    */
  __IO uint32_t SCGCSSI;        /**< SSI Sleep Mode Clock Gating Control     */
  __IO uint32_t SCGCI2C;        /**< I2C Sleep Mode Clock Gating Control     */
  __I  uint32_t RESERVED34[1];  /**< Reserved                                */
  __IO uint32_t SCGCUSB;        /**< USB Sleep Mode Clock Gating Control     */
  __I  uint32_t RESERVED35[1];  /**< Reserved                                */
  __IO uint32_t SCGCEPHY;       /**< Ethernet PHY Sleep Mode Clock Gating Control */
  __IO uint32_t SCGCCAN;        /**< CAN Sleep Mode Clock Gating Control     */
  __IO uint32_t SCGCADC;        /**< ADC Sleep Mode Clock Gating Control     */
  __IO uint32_t SCGCACMP;       /**< ACMP Sleep Mode Clock Gating Control    */
  __IO uint32_t SCGCPWM;        /**< PWM Sleep Mode Clock Gating Control     */
  __IO uint32_t SCGCQEI;        /**< QEI Sleep Mode Clock Gating Control     */
  __I  uint32_t RESERVED36[4];  /**< Reserved                                */
  __IO uint32_t SCGCEEPROM;     /**< EEPROM Sleep Mode Clock Gating Control  */
  __I  uint32_t RESERVED37[6];  /**< Reserved */
  __IO uint32_t SCGCCCM;        /**< CRC Module Sleep Mode Clock Gating Control */
  __I  uint32_t RESERVED38[9];  /**< Reserved */
  __IO uint32_t SCGCEMAC;       /**< Ethernet MAC Sleep Mode Clock Gating Control */
  __I  uint32_t RESERVED39[24]; /**< Reserved                                */
  __IO uint32_t DCGCWD;         /**< WDT Deep-Sleep Mode Clock Gating Control*/
  __IO uint32_t DCGCTIMER;      /**< GPT Deep-Sleep Mode Clock Gating Control*/
  __IO uint32_t DCGCGPIO;       /**< GPIO Deep-Sleep Mode Clock Gating
                                     Control                                 */
  __IO uint32_t DCGCDMA;        /**< UDMA Deep-Sleep Mode Clock Gating
                                     Control                                 */
  __IO uint32_t DCGCEPI;        /**< EPI Deep-Sleep Mode Clock Gating Control */
  __IO uint32_t DCGCHIB;        /**< HIB Deep-Sleep Mode Clock Gating Control*/
  __IO uint32_t DCGCUART;       /**< UART Deep-Sleep Mode Clock Gating
                                     Control                                 */
  __IO uint32_t DCGCSSI;        /**< SSI Deep-Sleep Mode Clock Gating Control*/
  __IO uint32_t DCGCI2C;        /**< I2C Deep-Sleep Mode Clock Gating Control*/
  __I  uint32_t RESERVED40[1];  /**< Reserved                                */
  __IO uint32_t DCGCUSB;        /**< USB Deep-Sleep Mode Clock Gating Control*/
  __I  uint32_t RESERVED41[1];  /**< Reserved                                */
  __IO uint32_t DCGCEPHY;       /**< Ethernet PHY Deep-Sleep Mode Clock Gating Control */
  __IO uint32_t DCGCCAN;        /**< CAN Deep-Sleep Mode Clock Gating Control*/
  __IO uint32_t DCGCADC;        /**< ADC Deep-Sleep Mode Clock Gating Control*/
  __IO uint32_t DCGCACMP;       /**< ACMP Deep-Sleep Mode Clock Gating
                                     Control                                 */
  __IO uint32_t DCGCPWM;        /**< PWM Deep-Sleep Mode Clock Gating Control*/
  __IO uint32_t DCGCQEI;        /**< QEI Deep-Sleep Mode Clock Gating Control*/
  __I  uint32_t RESERVED42[4];  /**< Reserved                                */
  __IO uint32_t DCGCEEPROM;     /**< EEPROM Deep-Sleep Mode Clock Gating
                                     Control                                 */
  __I  uint32_t RESERVED43[6];  /**< Reserved */
  __IO uint32_t DCGCCCM;        /**< CRC Module Deep-Sleep Mode Clock Gating Control */
  __I  uint32_t RESERVED44[9];  /**< Reserved */
  __IO uint32_t DCGCEMAC;       /**< Ethernet MAC Deep-Sleep Mode Clock Gating Control */
  __I  uint32_t RESERVED45[24]; /**< Reserved                                */
  __IO uint32_t PCWD;           /**< Watchdog Timer Power Control       */
  __IO uint32_t PCTIMER;        /**< 16/32-Bit General-Purpose Timer Power Control       */
  __IO uint32_t PCGPIO;         /**< General-Purpose Input/Output Power Control      */
  __IO uint32_t PCDMA;          /**< Micro Direct Memory Access Power Control      */
  __IO uint32_t PCEPI;          /**< External Peripheral Interface Power Control */
  __IO uint32_t PCHIB;          /**< Hibernation Power Control       */
  __IO uint32_t PCUART;         /**< Universal Asynchronous Receiver/Transmitter Power Control                   */
  __IO uint32_t PCSSI;          /**< Synchronous Serial Interface Power Control       */
  __IO uint32_t PCI2C;          /**< Inter-Integrated Circuit Power Control       */
  __I  uint32_t RESERVED46[1];  /**< Reserved                                */
  __IO uint32_t PCUSB;          /**< Universal Serial Bus Power Control       */
  __I  uint32_t RESERVED47[1];  /**< Reserved                                */
  __IO uint32_t PCEPHY;         /**< Ethernet PHY Power Control */
  __IO uint32_t PCCAN;          /**< Controller Area Network Power Control       */
  __IO uint32_t PCADC;          /**< Analog-to-Digital Converter Power Control       */
  __IO uint32_t PCACMP;         /**< Analog Comparator Power Control      */
  __IO uint32_t PCPWM;          /**< Pulse Width Modulator Power Control       */
  __IO uint32_t PCQEI;          /**< Quadrature Encoder Interface Power Control       */
  __I  uint32_t RESERVED48[4];  /**< Reserved                                */
  __IO uint32_t PCEEPROM;       /**< EEPROM Power Control    */
  __I  uint32_t RESERVED49[6];  /**< Reserved */
  __IO uint32_t PCCCM;          /**< CRC Module Power Control */
  __I  uint32_t RESERVED50[9];  /**< Reserved */
  __IO uint32_t PCEMAC;         /**< Ethernet MAC Power Control */
  __I  uint32_t RESERVED51[24]; /**< Reserved */
  __IO uint32_t PRWD;           /**< WDT Peripheral Ready                    */
  __IO uint32_t PRTIMER;        /**< GPT Peripheral Ready                    */
  __IO uint32_t PRGPIO;         /**< GPIO Peripheral Ready                   */
  __IO uint32_t PRDMA;          /**< UDMA Peripheral Ready                   */
  __IO uint32_t PREPI;          /**< EPI Peripheral Ready                                */
  __IO uint32_t PRHIB;          /**< HIB Peripheral Ready                    */
  __IO uint32_t PRUART;         /**< UART Peripheral Ready                   */
  __IO uint32_t PRSSI;          /**< SSI Peripheral Ready                    */
  __IO uint32_t PRI2C;          /**< I2C Peripheral Ready                    */
  __I  uint32_t RESERVED52[1];  /**< Reserved                                */
  __IO uint32_t PRUSB;          /**< USB Peripheral Ready                    */
  __I  uint32_t RESERVED53[1];  /**< Reserved                                */
  __IO uint32_t PREPHY;         /**< Ethernet PHY Peripheral Ready */
  __IO uint32_t PRCAN;          /**< CAN Peripheral Ready                    */
  __IO uint32_t PRADC;          /**< ADC Peripheral Ready                    */
  __IO uint32_t PRACMP;         /**< ACMP Peripheral Ready                   */
  __IO uint32_t PRPWM;          /**< PWM Peripheral Ready                    */
  __IO uint32_t PRQEI;          /**< QEI Peripheral Ready                    */
  __I  uint32_t RESERVED54[4];  /**< Reserved                                */
  __IO uint32_t PREEPROM;       /**< EEPROM Peripheral Ready                 */
  __I  uint32_t RESERVED55[6];  /**< Reserved */
  __IO uint32_t PRCCM;          /**< CRC Module Peripheral Ready               */
  __I  uint32_t RESERVED56[9];  /**< Reserved */
  __IO uint32_t PREMAC;         /**< Ethernet MAC Peripheral Ready */
} SYSCTL_TypeDef;

/**
 * @brief Universal Asynchronous Receiver/Transmitter
 */
typedef struct
{
  __IO uint32_t DR;             /**< Data                                    */
  union  {
    __I  uint32_t RSR;          /**< Receive Status                          */
    __O  uint32_t ECR;          /**< Error Clear                             */
  };
  __I  uint32_t _RESERVED0[4];  /**< Reserved                                */
  __I  uint32_t FR;             /**< Flag                                    */
  __I  uint32_t _RESERVED1[1];  /**< Reserved                                */
  __IO uint32_t ILPR;           /**< IrDA Low-Power Register                 */
  __IO uint32_t IBRD;           /**< Integer Baud-Rate Divisor               */
  __IO uint32_t FBRD;           /**< Fractional Baud-Rate Divisor            */
  __IO uint32_t LCRH;           /**< Line Control                            */
  __IO uint32_t CTL;            /**< Control                                 */
  __IO uint32_t IFLS;           /**< Interrupt FIFO Level Select             */
  __IO uint32_t IM;             /**< Interrupt Mask                          */
  __I  uint32_t RIS;            /**< Raw Interrupt Status                    */
  __I  uint32_t MIS;            /**< Masked Interrupt Status                 */
  __O uint32_t ICR;             /**< Interrupt Clear                         */
  __IO uint32_t DMACTL;         /**< DMA Control                             */
  __I  uint32_t _RESERVED2[22]; /**< Reserved                                */
  __IO uint32_t BIT9ADDR;       /**< 9-Bit Self Address                      */
  __IO uint32_t BIT9AMASK;      /**< 9-Bit Self Address Mask                 */
  __I  uint32_t _RESERVED3[965];/**< Reserved                                */
  __I  uint32_t PP;             /**< Peripheral Properties                   */
  __I  uint32_t _RESERVED4[1];  /**< Reserved                                */
  __IO uint32_t CC;             /**< Clock Configuration                     */
} UART_TypeDef;

/**
 * @brief Micro Direct Memory Access
 */
typedef struct
{
  __IO uint32_t SET;            /**< Set                                     */
  __O  uint32_t CLR;            /**< Clear                                   */
} UDMA_SC_t;

typedef struct
{
  __IO uint32_t STAT;           /**< Status                                  */
  __O  uint32_t CFG;            /**< Configuration                           */
  __IO uint32_t CTLBASE;        /**< Channel Control Base Pointer            */
  __IO uint32_t ALTBASE;        /**< Alternate Channel Control Base Pointer  */
  __IO uint32_t WAITSTAT;       /**< Channel Wait-on-Request Status          */
  __O  uint32_t SWREQ;          /**< Channel Software Request                */
  UDMA_SC_t USEBURST;           /**< Channel Useburst registers              */
  UDMA_SC_t REQMASK;            /**< Channel Request Mask registers          */
  UDMA_SC_t ENA;                /**< Channel Enable registers                */
  UDMA_SC_t ALT;                /**< Channel Primary Alternate registers     */
  UDMA_SC_t PRIO;               /**< Channel Priority registers              */
  __I  uint32_t _RESERVED0[3];  /**< Reserved                                */
  __IO uint32_t ERRCLR;         /**< Bus Error Clear                         */
  __I  uint32_t _RESERVED1[300];/**< Reserved                                */
  __IO uint32_t CHASGN;         /**< Channel Assignment                      */
  __IO uint32_t CHIS;           /**< Channel Interrupt Status                */
  __I  uint32_t _RESERVED2[2];  /**< Reserved                                */
  __IO uint32_t CHMAP[4];       /**< Channel Map Select 0, 1, 2 and 3        */
} UDMA_TypeDef;

// USB

/**
 * @brief Watchdog Timer
 */
typedef struct
{
  __IO uint32_t LOAD;           /**< Load                                    */
  __I  uint32_t VALUE;          /**< Value                                   */
  __IO uint32_t CTL;            /**< Control                                 */
  __O  uint32_t ICR;            /**< Interrupt Clear                         */
  __I  uint32_t RIS;            /**< Raw Interrupt Status                    */
  __I  uint32_t MIS;            /**< Masked Interrupt Status                 */
  __I  uint32_t _RESERVED0[256];/**< Reserved                                */
  __IO uint32_t TEST;           /**< Test                                    */
  __I  uint32_t _RESERVED1[505];/**< Reserved                                */
  __IO uint32_t LOCK;           /**< Lock                                    */
} WATCHDOG_TypeDef;

/**
 * @brief   Ethernet peripheral
 */
typedef struct {
  __IO uint32_t CFG;            /**< Configuration                           */
  __IO uint32_t FRAMEFLTR;      /**< Frame Filter                            */
  __IO uint32_t HASHTBLH;       /**< Hash Table High                         */
  __IO uint32_t HASHTBLL;       /**< Hash Table Low                          */
  __IO uint32_t MIIADDR;        /**< MII Address                             */
  __IO uint32_t MIIDATA;        /**< MII Data Register                       */
  __IO uint32_t FLOWCTL;        /**< Flow Control                            */
  __IO uint32_t VLANTG;         /**< VLAN Tag                                */
  __I  uint32_t RESERVED0[1];   /**< Reserved                                */
  __IO uint32_t STATUS;         /**< Status                                  */
  __IO uint32_t RWUFF;          /**< Remote Wake-Up Frame Filter             */
  __IO uint32_t PMTCTLSTAT;     /**< PMT Control and Status Register         */
  __I  uint32_t RESERVED1[2];   /**< Reserved                                */
  __IO uint32_t RIS;            /**< Raw Interrupt Status                    */
  __IO uint32_t IM;             /**< Interrupt Mask                          */
  __IO uint32_t ADDR0H;         /**< Address 0 High                          */
  __IO uint32_t ADDR0L;         /**< Address 0 Low Register                  */
  __IO uint32_t ADDR1H;         /**< Address 1 High                          */
  __IO uint32_t ADDR1L;         /**< Address 1 Low                           */
  __IO uint32_t ADDR2H;         /**< Address 2 High                          */
  __IO uint32_t ADDR2L;         /**< Address 2 Low                           */
  __IO uint32_t ADDR3H;         /**< Address 3 High                          */
  __IO uint32_t ADDR3L;         /**< Address 3 Low                           */
  __I  uint32_t RESERVED2[31];  /**< Reserved                                */
  __IO uint32_t WDOGTO;         /**< Watchdog Timeout                        */
  __I  uint32_t RESERVED3[8];   /**< Reserved                                */
  __IO uint32_t MMCCTRL;        /**< MMC Control                             */
  __IO uint32_t MMCRXRIS;       /**< MMC Receive Raw Interrupt Status        */
  __IO uint32_t MMCTXRIS;       /**< MMC Transmit Raw Interrupt Status       */
  __IO uint32_t MMCRXIM;        /**< MMC Receive Interrupt Mask              */
  __IO uint32_t MMCTXIM;        /**< MMC Transmit Interrupt Mask             */
  __I  uint32_t RESERVED4[1];   /**< Reserved                                */
  __IO uint32_t TXCNTGB;        /**< Transmit Frame Count for Good and Bad
                                     Frames                                  */
  __I  uint32_t RESERVED5[12];  /**< Reserved                                */
  __IO uint32_t TXCNTSCOL;      /**< Transmit Frame Count for Frames
                                     Transmitted after Single Collision      */
  __IO uint32_t TXCNTMCOL;      /**< Transmit Frame Count for Frames
                                     Transmitted after Multiple Collisions   */
  __I  uint32_t RESERVED6[4];   /**< Reserved                                */
  __IO uint32_t TXOCTCNTG;      /**< Transmit Octet Count Good               */
  __I  uint32_t RESERVED7[6];   /**< Reserved                                */
  __IO uint32_t RXCNTGB;        /**< Receive Frame Count for Good and Bad
                                     Frames                                  */
  __I  uint32_t RESERVED8[4];   /**< Reserved                                */
  __IO uint32_t RXCNTCRCERR;    /**< Receive Frame Count for CRC Error Frames*/
  __IO uint32_t RXCNTALGNERR;   /**< Receive Frame Count for Alignment Error
                                     Frames                                  */
  __I  uint32_t RESERVED9[10];  /**< Reserved                                */
  __IO uint32_t RXCNTGUNI;      /**< Receive Frame Count for Good Unicast
                                     Frames                                  */
  __I  uint32_t RESERVED10[239];/**< Reserved                                */
  __IO uint32_t VLNINCREP;      /**< VLAN Tag Inclusion or Replacement       */
  __IO uint32_t VLANHASH;       /**< VLAN Hash Table                         */
  __I  uint32_t RESERVED11[93]; /**< Reserved                                */
  __IO uint32_t TIMSTCTRL;      /**< Timestamp Control                       */
  __IO uint32_t SUBSECINC;      /**< Sub-Second Increment                    */
  __IO uint32_t TIMSEC;         /**< System Time - Seconds                   */
  __IO uint32_t TIMNANO;        /**< System Time - Nanoseconds               */
  __IO uint32_t TIMSECU;        /**< System Time - Seconds Update            */
  __IO uint32_t TIMNANOU;       /**< System Time - Nanoseconds Update        */
  __IO uint32_t TIMADD;         /**< Timestamp Addend                        */
  __IO uint32_t TARGSEC;        /**< Target Time Seconds                     */
  __IO uint32_t TARGNANO;       /**< Target Time Nanoseconds                 */
  __IO uint32_t HWORDSEC;       /**< System Time-Higher Word Seconds         */
  __IO uint32_t TIMSTAT;        /**< Timestamp Status                        */
  __IO uint32_t PPSCTRL;        /**< PPS Control                             */
  __I  uint32_t RESERVED12[12]; /**< Reserved                                */
  __IO uint32_t PPS0INTVL;      /**< PPS0 Interval                           */
  __IO uint32_t PPS0WIDTH;      /**< PPS0 Width                              */
  __I  uint32_t RESERVED13[294];/**< Reserved                                */
  __IO uint32_t DMABUSMOD;      /**< DMA Bus Mode                            */
  __O  uint32_t TXPOLLD;        /**< Transmit Poll Demand                    */
  __O  uint32_t RXPOLLD;        /**< Receive Poll Demand                     */
  __IO uint32_t RXDLADDR;       /**< Receive Descriptor List Address         */
  __IO uint32_t TXDLADDR;       /**< Transmit Descriptor List Address        */
  __IO uint32_t DMARIS;         /**< DMA Interrupt Status                    */
  __IO uint32_t DMAOPMODE;      /**< DMA Operation Mode                      */
  __IO uint32_t DMAIM;          /**< DMA Interrupt Mask Register             */
  __IO uint32_t MFBOC;          /**< Missed Frame and Buffer Overflow Counter*/
  __IO uint32_t RXINTWDT;       /**< Receive Interrupt Watchdog Timer        */
  __I  uint32_t RESERVED14[8];  /**< Reserved                                */
  __IO uint32_t HOSTXDESC;      /**< Current Host Transmit Descriptor        */
  __IO uint32_t HOSRXDESC;      /**< Current Host Receive Descriptor         */
  __IO uint32_t HOSTXBA;        /**< Current Host Transmit Buffer Address    */
  __IO uint32_t HOSRXBA;        /**< Current Host Receive Buffer Address     */
  __I  uint32_t RESERVED15[218];/**< Reserved                                */
  __IO uint32_t PP;             /**< Peripheral Property Register            */
  __IO uint32_t PC;             /**< Peripheral Configuration Register       */
  __IO uint32_t CC;             /**< Clock Configuration Register            */
  __I  uint32_t RESERVED16[1];  /**< Reserved                                */
  __I  uint32_t PHYRIS;         /**< PHY Raw Interrupt Status                */
  __IO uint32_t PHYIM;          /**< PHY Interrupt Mask                      */
  __IO uint32_t PHYMISC;        /**< PHY Masked Interrupt Status and Clear   */
} ETH_TypeDef;

/**
 * @}
 */

/**
 * @addtogroup Peripheral_memorymap
 * @{
 */

#define SYSCTL_BASE 0x400FE000
#define HIB_BASE    0x400FC000
#define FLASH_BASE  0x400FD000
#define EEPROM_BASE 0x400AF000
#define UDMA_BASE   0x400FF000
#define GPIOA_BASE  0x40058000
#define GPIOB_BASE  0x40059000
#define GPIOC_BASE  0x4005A000
#define GPIOD_BASE  0x4005B000
#define GPIOE_BASE  0x4005C000
#define GPIOF_BASE  0x4005D000
#define GPIOG_BASE  0x4005E000
#define GPIOH_BASE  0x4005F000
#define GPIOJ_BASE  0x40060000
#define GPIOK_BASE  0x40061000
#define GPIOL_BASE  0x40062000
#define GPIOM_BASE  0x40063000
#define GPION_BASE  0x40064000
#define GPIOP_BASE  0x40065000
#define GPIOQ_BASE  0x40066000
#define GPIOR_BASE  0x40067000
#define GPIOS_BASE  0x40068000
#define GPIOT_BASE  0x40069000
#define GPT0_BASE   0x40030000
#define GPT1_BASE   0x40031000
#define GPT2_BASE   0x40032000
#define GPT3_BASE   0x40033000
#define GPT4_BASE   0x40034000
#define GPT5_BASE   0x40035000
#define GPT6_BASE   0x400E0000
#define GPT7_BASE   0x400E1000
#define WDT0_BASE   0x40000000
#define WDT1_BASE   0x40001000
#define ADC0_BASE   0x40038000
#define ADC1_BASE   0x40039000
#define UART0_BASE  0x4000C000
#define UART1_BASE  0x4000D000
#define UART2_BASE  0x4000E000
#define UART3_BASE  0x4000F000
#define UART4_BASE  0x40010000
#define UART5_BASE  0x40011000
#define UART6_BASE  0x40012000
#define UART7_BASE  0x40013000
#define SSI0_BASE   0x40008000
#define SSI1_BASE   0x40009000
#define SSI2_BASE   0x4000A000
#define SSI3_BASE   0x4000B000
#define I2C0_BASE   0x40020000
#define I2C1_BASE   0x40021000
#define I2C2_BASE   0x40022000
#define I2C3_BASE   0x40023000
#define I2C4_BASE   0x400C0000
#define I2C5_BASE   0x400C1000
#define I2C6_BASE   0x400C2000
#define I2C7_BASE   0x400C3000
#define I2C8_BASE   0x400B8000
#define I2C9_BASE   0x400B9000
#define CAN0_BASE   0x40040000
#define CAN1_BASE   0x40041000
// usb
#define ACMP_BASE   0x4003C000
#define PWM0_BASE   0x40028000
#define QEI0_BASE   0x4002C000
#define QEI1_BASE   0x4002D000

#define ETH_BASE    0x400EC000

/**
 * @}
 */

/** 
 * @addtogroup Peripheral_declaration
 * @{
 */

#define SYSCTL  ((SYSCTL_TypeDef *) SYSCTL_BASE)
#define HIB     ((HIB_TypeDef *)    HIB_BASE)
#define FLASH   ((FLASH_TypeDef *)  FLASH_BASE)
#define EEPROM  ((EEPROM_TypeDef *) EEPROM_BASE)
#define UDMA    ((UDMA_TypeDef *)   UDMA_BASE)										
#define GPIOA   ((GPIO_TypeDef *)   GPIOA_BASE)
#define GPIOB   ((GPIO_TypeDef *)   GPIOB_BASE)
#define GPIOC   ((GPIO_TypeDef *)   GPIOC_BASE)
#define GPIOD   ((GPIO_TypeDef *)   GPIOD_BASE)
#define GPIOE   ((GPIO_TypeDef *)   GPIOE_BASE)
#define GPIOF   ((GPIO_TypeDef *)   GPIOF_BASE)
#define GPIOG   ((GPIO_TypeDef *)   GPIOG_BASE)
#define GPIOH   ((GPIO_TypeDef *)   GPIOH_BASE)
#define GPIOJ   ((GPIO_TypeDef *)   GPIOJ_BASE)
#define GPIOK   ((GPIO_TypeDef *)   GPIOK_BASE)
#define GPIOL   ((GPIO_TypeDef *)   GPIOL_BASE)
#define GPIOM   ((GPIO_TypeDef *)   GPIOM_BASE)
#define GPION   ((GPIO_TypeDef *)   GPION_BASE)
#define GPIOP   ((GPIO_TypeDef *)   GPIOP_BASE)
#define GPIOQ   ((GPIO_TypeDef *)   GPIOQ_BASE)
#define GPIOR   ((GPIO_TypeDef *)   GPIOR_BASE)
#define GPIOS   ((GPIO_TypeDef *)   GPIOS_BASE)
#define GPIOT   ((GPIO_TypeDef *)   GPIOT_BASE)
#define GPT0    ((GPT_TypeDef *)    GPT0_BASE)
#define GPT1    ((GPT_TypeDef *)    GPT1_BASE)
#define GPT2    ((GPT_TypeDef *)    GPT2_BASE)
#define GPT3    ((GPT_TypeDef *)    GPT3_BASE)
#define GPT4    ((GPT_TypeDef *)    GPT4_BASE)
#define GPT5    ((GPT_TypeDef *)    GPT5_BASE)
#define GPT6    ((GPT_TypeDef *)    GPT6_BASE)
#define GPT7    ((GPT_TypeDef *)    GPT7_BASE)
#define ADC0    ((ADC_TypeDef*)     ADC0_BASE)
#define ADC1    ((ADC_TypeDef*)     ADC1_BASE)
#define UART0   ((UART_TypeDef *)   UART0_BASE)
#define UART1   ((UART_TypeDef *)   UART1_BASE)
#define UART2   ((UART_TypeDef *)   UART2_BASE)
#define UART3   ((UART_TypeDef *)   UART3_BASE)
#define UART4   ((UART_TypeDef *)   UART4_BASE)
#define UART5   ((UART_TypeDef *)   UART5_BASE)
#define UART6   ((UART_TypeDef *)   UART6_BASE)
#define UART7   ((UART_TypeDef *)   UART7_BASE)
#define SSI0    ((SSI_TypeDef *)    SSI0_BASE)
#define SSI1    ((SSI_TypeDef *)    SSI1_BASE)
#define SSI2    ((SSI_TypeDef *)    SSI2_BASE)
#define SSI3    ((SSI_TypeDef *)    SSI3_BASE)
#define I2C0    ((I2C_TypeDef *)    I2C0_BASE)
#define I2C1    ((I2C_TypeDef *)    I2C1_BASE)
#define I2C2    ((I2C_TypeDef *)    I2C2_BASE)
#define I2C3    ((I2C_TypeDef *)    I2C3_BASE)
#define I2C4    ((I2C_TypeDef *)    I2C4_BASE)
#define I2C5    ((I2C_TypeDef *)    I2C5_BASE)
#define I2C6    ((I2C_TypeDef *)    I2C6_BASE)
#define I2C7    ((I2C_TypeDef *)    I2C7_BASE)
#define I2C8    ((I2C_TypeDef *)    I2C8_BASE)
#define I2C9    ((I2C_TypeDef *)    I2C9_BASE)
#define CAN0    ((CAN_TypeDef *)    CAN0_BASE)
#define CAN1    ((CAN_TypeDef *)    CAN1_BASE)
// usb
#define ACMP    ((ACMP_TypeDef *)   ACMP_BASE)
#define PWM0    ((PWM_TypeDef *)    PWM0_BASE)
#define QEI0    ((QEI_TypeDef *)    QEI0_BASE)
#define QEI1    ((QEI_TypeDef *)    QEI1_BASE)

#define ETH     ((ETH_TypeDef *)  ETH_BASE)

/**
 * @}
 */

#endif /* __TM4C129x_H */

/**
 * @}
 */
 
/**
 * @}
 */
