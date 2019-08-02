//
//  RockDisplayOutput.c
//  RockPlayer
//
//  Created by Henry on 2019/8/3.
//  Copyright © 2019 Mickyzhu. All rights reserved.
//

#include "RockDisplayOutput.h"
#include "RockDisplayOutputOpenGL.h"

struct RockDisplayOutput {
    
};


RockDisplayOutputRef rock_display_output_create(RockDisplayType type) {
    switch (type) {
        case RockDisplayOpenGL: return (RockDisplayOutputRef)rock_display_output_opengl_create();
        case RockDisplayMetal:
            // TODO: Metal will be support in future and fall through now
            return NULL;
        case RockDisplayDirectX:
            // TODO: DirectX will be support in future and fall through now
            return NULL;
        default:
            
            break;
    }
    
    return NULL;
}
