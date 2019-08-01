//
//  RockMediaPlayer.c
//  RockPlayer
//
//  Created by Henry on 2019/8/2.
//  Copyright © 2019 Mickyzhu. All rights reserved.
//

#include "RockMediaPlayer.h"

typedef struct RockMediaPlayerCallbacks RockMediaPlayerCallbacks;

struct RockMediaPlayer {
    
    RockMediaPlayerCallbacks callbacks;
};
