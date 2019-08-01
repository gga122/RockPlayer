//
//  RockTime.h
//  RockPlayer
//
//  Created by Henry on 2019/8/2.
//  Copyright © 2019 Mickyzhu. All rights reserved.
//

#ifndef RockTime_h
#define RockTime_h

#include "RockBase.h"

typedef RPInteger RTTimeValue;
typedef RPInteger RTTimeScale;
typedef RPInteger RTTimeFlags;
typedef RPInteger RTTimeEpoch;

struct RockTime {
    RTTimeValue value;
    RTTimeScale scale;
    RTTimeFlags flags;
    RTTimeEpoch epoch;
};

typedef struct RockTime RPTime;

RP_EXPORT RPTime RPTimeMake(RTTimeValue value, RTTimeScale scale);
RP_EXPORT RPTime RPTimeMakeWithEpoch(RTTimeValue value, RTTimeScale scale, RTTimeEpoch epoch);

RP_EXPORT RPFloat RPTimeGetSecond(RPTime time);

#endif /* RockTime_h */
