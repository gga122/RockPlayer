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

typedef const void * RPObjectRef;

/* All Class in 'RockPlayer' MUST contain this and make it at the first. */
struct RockISA {
    RPInteger version;
    RPInteger ref_cnt;
    
    void (* deallocate)(RPObjectRef rp);
};

typedef struct RockISA RockISA;

RP_EXPORT void RPRetain(RPObjectRef rp);

RP_EXPORT void RPRelease(RPObjectRef rp);

RP_EXPORT RPInteger RPGetRetainCount(RPObjectRef rp);

RP_EXPORT RPBoolean RPEqual(RPObjectRef rp1, RPObjectRef rp2);

RP_EXPORT void RPDeallocate(RPObjectRef rp);

#endif /* RockISA_h */
