//
//  RockDisplayOutputOpenGL.h
//  RockPlayer
//
//  Created by Henry on 2019/8/3.
//  Copyright © 2019 Mickyzhu. All rights reserved.
//

#ifndef RockDisplayOutputOpenGL_h
#define RockDisplayOutputOpenGL_h

#include "RockBase.h"

typedef const struct RockDisplayOutputOpenGLContext * RockDisplayOutputOpenGLContextRef;

RP_EXPORT RockDisplayOutputOpenGLContextRef rock_display_output_opengl_create(void) RP_NULLABLE;

#endif /* RockDisplayOutputOpenGL_h */
