/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 */

#ifndef WIDOWMAKER_CONFIG_H
#define WIDOWMAKER_CONFIG_H

#define WM_CUSTOM_MACHINE_NAME "WidowMaker"
#define WM_MOTHERBOARD BOARD_MKS_GEN_13

//===========================================================================
//============================== Bed Leveling  ==============================
//===========================================================================

// Enable BLTouch
#define TEVO_BLTOUCH

// Bltouch Offsets from extruder.
#define WM_X_PROBE_OFFSET_FROM_EXTRUDER 10
#define WM_Y_PROBE_OFFSET_FROM_EXTRUDER 10
#define WM_Z_PROBE_OFFSET_FROM_EXTRUDER 0


/**
 * Bed Leveling Accuracy/Speed/Quality:
 *
 *     1 : Quick Leveling
 *     2 : Standard Leveling
 *     3 : Detail
 *     4 : Overkill
 *
 */
#define WM_BED_LEVEL_SETTING 1
#define WM_PROBE_EDGE_BUFFER 20



//===========================================================================
//=========================== Extrude Settings  =============================
//===========================================================================

#define HOTEND_TEMP_SENSOR_TYPE 1
//#define HOTEND_ENABLE_PIDTEMP

// FIND YOUR OWN: "M303 E0 C8 S210" to run autotune on the bed at 210 degreesC for 8 cycles.
#define HE_Kp_VALUE 22.2
#define HE_Ki_VALUE 1.08
#define HE_Kd_VALUE 114

/**
 * Extruder
 */
#define WM_E0_TITAN

#define WM_E0_MICRO_STEPS 32
#define WM_E0_MOTOR_REV 200
//#define WM_E0_HOBB 7.3
//#define WM_E0_FUDGE_STEPS

#define WM_E0_MAX_FEEDRATE 25
#define WM_DEFAULT_E0_ACCELERATION 10000

//===========================================================================
//============================  Stepper Drivers  ============================
//===========================================================================

/**
 * Stepper Drivers available:
 *
 *     0 : not used
 *     1 : DRV8825 (Stock)
 *     2 : A4988
 *     3 : TMC2100
 *     4 : TMC2100
 *     5 : TMC2

 *
 */
#define WM_X_STEPPER_DRIVER 1
#define WM_Y_STEPPER_DRIVER 1
#define WM_Z_STEPPER_DRIVER 1
#define WM_E0_STEPPER_DRIVER 1
#define WM_E1_STEPPER_DRIVER 0


//===========================================================================
//================== Axis Steps/Feedrate/Acceleration/Jerk ==================
//===========================================================================

/**
 * X Axis
 */
#define WM_X_MICRO_STEPS 32
#define WM_X_MOTOR_REV 200
#define WM_X_STEPS 000

#define WM_X_MAX_FEEDRATE 200
#define WM_DEFAULT_X_ACCELERATION 1500
#define WM_X_JERK 7.0

/**
 * Y Axis
 */
#define WM_Y_MICRO_STEPS 32
#define WM_Y_MOTOR_REV 200
#define WM_Y_STEPS 000

#define WM_Y_MAX_FEEDRATE 150
#define WM_DEFAULT_Y_ACCELERATION 1000
#define WM_Y_JERK 2.0

/**
 * Z Axis
 */
#define WM_Z_MICRO_STEPS 32
#define WM_Z_MOTOR_REV 200
#define WM_Z_STEPS 000

#define WM_Z_MAX_FEEDRATE 5
#define WM_DEFAULT_Z_ACCELERATION 100
#define WM_Z_JERK 0.2


#define WM_DEFAULT_ACCELERATION 1000
#define WM_DEFAULT_RETRACT_ACCELERATION 1500
#define WM_DEFAULT_TRAVEL_ACCELERATION 1500

#define WM_E_JERK 5.0


















// X_MIN_ENDSTOP_INVERTING
//X_MAX_ENDSTOP_INVERTING



#endif // WIDOWMAKER_CONFIG_H
