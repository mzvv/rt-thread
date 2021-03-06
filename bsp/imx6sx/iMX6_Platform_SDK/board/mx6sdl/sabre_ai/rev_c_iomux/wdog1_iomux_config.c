/*
 * Copyright (c) 2012, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

// File: wdog1_iomux_config.c

/* ------------------------------------------------------------------------------
 * <auto-generated>
 *     This code was generated by a tool.
 *     Runtime Version:3.4.0.0
 *
 *     Changes to this file may cause incorrect behavior and will be lost if
 *     the code is regenerated.
 * </auto-generated>
 * ------------------------------------------------------------------------------
*/

#include "iomux_config.h"
#include "registers/regsiomuxc.h"

// Function to configure IOMUXC for wdog1 module.
void wdog1_iomux_config(void)
{
    // Config wdog1.WDOG1_B to pad DISP0_DATA08(R22)
    // HW_IOMUXC_SW_MUX_CTL_PAD_DISP0_DATA08_WR(0x00000003);
    // HW_IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA08_WR(0x0001B0B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_DISP0_DATA08(0x020E0108)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: ipu1 signal: IPU1_DISP0_DATA08
    //     ALT1 (1) - Select instance: lcd signal: LCD_DATA08
    //     ALT2 (2) - Select instance: pwm1 signal: PWM1_OUT
    //     ALT3 (3) - Select instance: wdog1 signal: WDOG1_B
    //     ALT5 (5) - Select instance: gpio4 signal: GPIO4_IO29
    HW_IOMUXC_SW_MUX_CTL_PAD_DISP0_DATA08_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_DISP0_DATA08_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_DISP0_DATA08_MUX_MODE_V(ALT3));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA08(0x020E041C)
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA08_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA08_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA08_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA08_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA08_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA08_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA08_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA08_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA08_SRE_V(SLOW));
}
