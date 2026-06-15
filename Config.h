#pragma once

// ============================================
// CAMERA SETTINGS
// Lower resolution = faster tracking!
// For IP camera latency fix:
// Changed from 640x360 to 480x270
// ============================================
#define CAMERA_WIDTH         480
#define CAMERA_HEIGHT        270
#define CAMERA_FPS            30
#define CAMERA_BUFFER_SIZE     1

// ============================================
// TRACKING SETTINGS
// ============================================
#define MAX_LOST_FRAMES       45
#define MAX_JUMP_DISTANCE    150.f
#define MIN_OBJECT_AREA      300
#define SEARCH_PADDING        50

// ============================================
// FRAME SKIP — Process every Nth frame
// 1 = process every frame (most accurate)
// 2 = process every 2nd frame (2x faster)
// 3 = process every 3rd frame (3x faster)
// For IP camera: use 2 to reduce latency
// ============================================
#define FRAME_SKIP             2

// ============================================
// RED color ranges in HSV
// ============================================
#define RED_LOWER1_H   0
#define RED_LOWER1_S 120
#define RED_LOWER1_V  70
#define RED_UPPER1_H  10
#define RED_UPPER1_S 255
#define RED_UPPER1_V 255
#define RED_LOWER2_H 170
#define RED_LOWER2_S 120
#define RED_LOWER2_V  70
#define RED_UPPER2_H 180
#define RED_UPPER2_S 255
#define RED_UPPER2_V 255

// ============================================
// DISPLAY
// ============================================
#define WINDOW_NAME      "Object Tracker"
#define SHOW_DEBUG_INFO   true
#define SHOW_KALMAN_PRED  true
