//
//  RockDisplayOutput.h
//  RockPlayer
//
//  Created by Henry on 2019/8/3.
//  Copyright © 2019 Mickyzhu. All rights reserved.
//

#ifndef RockDisplayOutput_h
#define RockDisplayOutput_h

#include "RockBase.h"

typedef const struct RockDisplayOutput * RockDisplayOutputRef;

enum RockDisplayType {
    RockDisplayOpenGL       = 0,
#if RP_SUPPORT_METAL
    RockDisplayMetal        = 1,
#endif
#if RP_SUPPORT_DIRECTX
    RockDisplayDirectX      = 2,
#endif
};
typedef enum RockDisplayType RockDisplayType;

RP_EXPORT RockDisplayOutputRef rock_display_output_create(RockDisplayType type);

#endif /* RockDisplayOutput_h */
