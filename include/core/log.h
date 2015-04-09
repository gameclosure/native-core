/* @license
 * This file is part of the Game Closure SDK.
 *
 * The Game Closure SDK is free software: you can redistribute it and/or modify
 * it under the terms of the Mozilla Public License v. 2.0 as published by Mozilla.
 
 * The Game Closure SDK is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * Mozilla Public License v. 2.0 for more details.
 
 * You should have received a copy of the Mozilla Public License v. 2.0
 * along with the Game Closure SDK.  If not, see <http://mozilla.org/MPL/2.0/>.
 */

//no ifdefs because this just wraps platform/log.h, which has them
//#include "platform/log.h"
//


#ifdef __ANDROID__
#include <android/log.h>
#define LOG_TAG "JS"
#define DEBUG_TAG "JSDEBUG"
#define LOG(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
// #define LOGFN(...) __android_log_print(ANDROID_LOG_INFO, "JSVERBOSE", __VA_ARGS__)
#define LOGFN(...)
#else
#include <stdio.h>
#ifndef LOG
#define LOG(...) printf(__VA_ARGS__);printf("\n");
#endif
#ifndef LOGFN
#define LOGFN(...)
#endif
#endif
