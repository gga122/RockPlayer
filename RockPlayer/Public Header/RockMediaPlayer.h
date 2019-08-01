//
//  RockMediaPlayer.h
//  RockPlayer
//
//  Created by Henry on 2019/8/2.
//  Copyright © 2019 Mickyzhu. All rights reserved.
//

#ifndef RockMediaPlayer_h
#define RockMediaPlayer_h

#include "RockBase.h"

typedef RPUInteger RockMediaPlayerState;

typedef const struct RockMediaPlayer * RockMediaPlayerRef;

RP_EXPORT void rock_media_player_play(RockMediaPlayerRef player);
RP_EXPORT void rock_media_player_pause(RockMediaPlayerRef player);
RP_EXPORT void rock_media_player_stop(RockMediaPlayerRef player);

RP_EXPORT void rock_media_player_set_volume(RockMediaPlayerRef player, RPFloat volume);
RP_EXPORT RPFloat rock_media_player_get_volume(RockMediaPlayerRef player);

RP_EXPORT void rock_media_player_set_play_rate(RockMediaPlayerRef player, RPFloat rate);
RP_EXPORT RPFloat rock_media_player_get_play_rate(RockMediaPlayerRef player);

/* Callbacks */
struct RockMediaPlayerCallbacks {
    void (* player_state_did_change)(RockMediaPlayerRef player, RockMediaPlayerState state);
};

typedef struct RockMediaPlayerCallbacks RockMediaPlayerCallbacks;

#endif /* RockMediaPlayer_h */
