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
#include "RockDefines.h"

struct RockISA {
    RPInteger refCnt;
};

typedef struct RockISA RockISA;

typedef const void * RPObjectRef;

void RPRetain(RPObjectRef rp);
void RPRelease(RPObjectRef rp);
RPInteger RPGetRetainCount(RPObjectRef rp);

#endif /* RockISA_h */
