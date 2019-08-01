//
//  RockISA.c
//  RockPlayer
//
//  Created by Henry on 2019/8/1.
//  Copyright © 2019 Mickyzhu. All rights reserved.
//

#include <stdlib.h>
#include "RockISA.h"

void RPRetain(RPObjectRef rp) {
    if (rp == NULL) {
        return;
    }
    
    RockISA *isa = (RockISA *)rp;
    isa->refCnt++;
}

void RPRelease(RPObjectRef rp) {
    if (rp == NULL) {
        return;
    }
    
    RockISA *isa = (RockISA *)rp;
    isa->refCnt--;
    
    if (isa->refCnt == 0) {
        free((void *)rp);
    }
}

RPInteger RPGetRetainCount(RPObjectRef rp) {
    if (rp == NULL) {
        return -1;
    }
    
    RockISA *isa = (RockISA *)rp;
    return isa->refCnt;
}
