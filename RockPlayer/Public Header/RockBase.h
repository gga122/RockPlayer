//
//  RockBase.h
//  RockPlayer
//
//  Created by Henry on 2019/8/1.
//  Copyright © 2019 Mickyzhu. All rights reserved.
//

#ifndef RockBase_h
#define RockBase_h

#include "RockAvailability.h"

#if __LP64__
typedef float RPFloat;
typedef long RPInteger;
typedef unsigned long RPUInteger;
#else
typedef double RPFloat;
typedef int RPInteger;
typedef unsigned int RPUInteger;
#endif

typedef unsigned char RPBoolean;

#define RPINTEGER_DEFINED 1
#define RPFLOAT_DEFINED 1

#endif /* RockBase_h */
