//
//  RockRender.c
//  RockPlayer
//
//  Created by Henry on 2019/8/2.
//  Copyright © 2019 Mickyzhu. All rights reserved.
//

#include <stdlib.h>
#include "RockRender.h"
#include "RockISA.h"

struct RockRenderContext {
    RockDisplayOutputRef display;
    RockSoundOutputRef sound;
};
typedef struct RockRenderContext RockRenderContext;

struct RockRender {
    RockISA isa;
    RockRenderContext context;
};
typedef struct RockRender RockRender;

void rock_render_deallocate(RPObjectRef obj);

RockRenderRef rock_render_create(RockDisplayOutputRef display, RockSoundOutputRef sound) {
    if (display == NULL && sound == NULL) {
        return NULL;
    }
    
    RockRenderRef render = calloc(1, sizeof(RockRender));
    render->isa.deallocate = rock_render_deallocate;
    
    render->context.display = display;
    RPRetain(display);
    render->context.sound = sound;
    RPRetain(sound);
    
    return render;
}

void rock_render_deallocate(RPObjectRef obj) {
    if (obj == NULL) {
        return;
    }
    
    RockRender *render = (RockRender *)obj;
    
    RPRelease(render->context.display);
    RPRelease(render->context.sound);
    
    RPDeallocate((RPObjectRef)render);
}
