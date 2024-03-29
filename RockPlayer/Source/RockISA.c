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
    isa->ref_cnt++;
}

void RPRelease(RPObjectRef rp) {
    if (rp == NULL) {
        return;
    }
    
    RockISA *isa = (RockISA *)rp;
    isa->ref_cnt--;
    
    if (isa->ref_cnt == 0) {
        isa->deallocate(isa);
    }
}

RPInteger RPGetRetainCount(RPObjectRef rp) {
    if (rp == NULL) {
        return -1;
    }
    
    RockISA *isa = (RockISA *)rp;
    return isa->ref_cnt;
}

RP_EXPORT void RPDeallocate(RPObjectRef rp) {
    if (rp == NULL) {
        return;
    }
    
    free((void *)rp);
}
