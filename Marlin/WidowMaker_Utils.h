#ifndef WIDOWMAKER_UTILS_H
#define WIDOWMAKER_UTILS_H


// Hardcode values
#define WM_X_CALC_STEPS 160
#define WM_Y_CALC_STEPS 160
#define WM_Z_CALC_STEPS 3200
#define WM_E0_CALC_STEPS 810

//(200 * 16) / (2 * 20) = 80.0


// Set all the values to enable BLTouch Bed Probing.
#ifdef TEVO_BLTOUCH
    #define BLTOUCH

    #define WM_Z_MIN_PROBE_ENDSTOP_INVERTING true // BLTouch
    #define AUTO_BED_LEVELING_BILINEAR

    #define WMC_LEFT_PROBE_BED_POSITION WM_PROBE_EDGE_BUFFER
    #define WMC_RIGHT_PROBE_BED_POSITION X_BED_SIZE - WM_PROBE_EDGE_BUFFER
    #define WMC_FRONT_PROBE_BED_POSITION WM_PROBE_EDGE_BUFFER
    #define WMC_BACK_PROBE_BED_POSITION Y_BED_SIZE - WM_PROBE_EDGE_BUFFER
#else
    #define LCD_BED_LEVELING
    #define LEVEL_BED_CORNERS

    #define WM_Z_MIN_PROBE_ENDSTOP_INVERTING false // set to true to invert the logic of the probe.
    #define MESH_BED_LEVELING    // Enable mesh bed leveling.
#endif

// Set settings for Quick Leveling.
#if (WM_BED_LEVEL_SETTING == 1)
    #define WM_GRID_MAX_POINTS_X 2
    #define WM_GRID_MAX_POINTS_Y 2

// Set settings for Standard Leveling.
#elif (WM_BED_LEVEL_SETTING == 2)
    #define WM_GRID_MAX_POINTS_X 4
    #define WM_GRID_MAX_POINTS_Y 3

// Set settings for Detailed Leveling.
#elif (WM_BED_LEVEL_SETTING == 3)
    #define WM_GRID_MAX_POINTS_X 3
    #define WM_GRID_MAX_POINTS_Y 2

// Set settings for Overkill Leveling.
#elif (WM_BED_LEVEL_SETTING == 4)
    #define WM_GRID_MAX_POINTS_X 3
    #define WM_GRID_MAX_POINTS_Y 2
#endif

#if (WM_X_STEPPER_DRIVER == 3)
    #define WM_INVERT_X_DIR true
#else
    #define WM_INVERT_X_DIR false
#endif

#if (WM_Y_STEPPER_DRIVER == 3)
    #define WM_INVERT_Y_DIR false
#else
    #define WM_INVERT_Y_DIR true
#endif

#if (WM_Z_STEPPER_DRIVER == 3)
    #define WM_INVERT_Z_DIR false
#else
    #define WM_INVERT_Z_DIR true
#endif

// Setup Titan Extruder Steps
#ifdef WM_E0_TITAN
    #ifndef WM_E0_HOBB
        #define WM_E0_HOBB 7.3
    #endif
    #ifndef WM_E0_FUDGE_STEPS
        #define WM_E0_FUDGE_STEPS 0
    #endif

    #define WMC_E0_STEPS = ((WM_E0_MOTOR_REV * WM_E0_MICRO_STEPS * 3) / (WM_E0_HOBB * 3.142) ) + WM_E0_FUDGE_STEPS
    #if (WM_E0_STEPPER_DRIVER == 3)
        WMC_E0_STEPS = WMC_E0_STEPS/2
    #endif

#endif





#endif // WIDOWMAKER_UTILS_H
