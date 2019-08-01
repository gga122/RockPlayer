//
//  RockISA.h
//  RockPlayer
//
//  Created by Henry on 2019/8/1.
//  Copyright © 2019 Mickyzhu. All rights reserved.
//

#ifndef RockISA_h
#define RockISA_h

#include <stdio.h>
#include "RockBase.h"

/* All Class in 'RockPlayer' MUST contain this and make it at the first. */
struct RockISA {
    RPInteger version;
    RPInteger ref_cnt;
};

typedef struct RockISA RockISA;

typedef const void * RPObjectRef;

RP_EXPORT void RPRetain(RPObjectRef rp);

RP_EXPORT void RPRelease(RPObjectRef rp);

RP_EXPORT RPInteger RPGetRetainCount(RPObjectRef rp);

RP_EXPORT RPBoolean RPEqual(RPObjectRef rp1, RPObjectRef rp2);

#endif /* RockISA_h */
