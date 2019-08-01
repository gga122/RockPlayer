//
//  RockMediaPlayer.c
//  RockPlayer
//
//  Created by Henry on 2019/8/2.
//  Copyright © 2019 Mickyzhu. All rights reserved.
//

#include <stdlib.h>
#include "RockMediaPlayer.h"
#include "RockISA.h"

typedef struct RockMediaPlayerCallbacks RockMediaPlayerCallbacks;

struct RockMediaPlayerContext {
    RockRenderRef render;
    RockDecoderRef decoder;
};
typedef struct RockMediaPlayerContext RockMediaPlayerContext;

struct RockMediaPlayer {
    RockISA isa;
    RockMediaPlayerContext context;
    RockMediaPlayerCallbacks callbacks;
};
typedef struct RockMediaPlayer RockMediaPlayer;

RockMediaPlayerRef rock_media_player_create(const RockDecoderRef decoder, RockRenderRef render) {
    if (decoder == NULL || render == NULL) {
        return NULL;
    }
    
    RockMediaPlayerRef player = calloc(1, sizeof(RockMediaPlayer));
    
    player->context.decoder = decoder;
    RPRetain(decoder);
    player->context.render = render;
    RPRetain(render);
    
    return player;
}

void rock_media_player_deallocate(RockMediaPlayerRef player) {
    if (player == NULL) {
        return;
    }
    
    RPRelease(player->context.decoder);
    RPRelease(player->context.render);
    
    RPDeallocate((RPObjectRef)player);
}
