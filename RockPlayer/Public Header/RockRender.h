//
//  RockRender.h
//  RockPlayer
//
//  Created by Henry on 2019/8/2.
//  Copyright © 2019 Mickyzhu. All rights reserved.
//

#ifndef RockRender_h
#define RockRender_h

#include "RockBase.h"
#include "RockDisplayOutput.h"
#include "RockSoundOutput.h"

typedef struct RockRender * RockRenderRef;

RP_EXPORT RockRenderRef rock_render_create(RockDisplayOutputRef display, RockSoundOutputRef sound) RP_NULLABLE;

#endif /* RockRender_h */
