#pragma once

#include <raylib.h>


class Player 
{
    public:
        Player();
        void Draw();
        void HandleInput();
        void PlayerJump();

    private:
        Texture2D character_spritesheet;
        float pos_x;
        float pos_y;
        float speed_x;
        float speed_y;
};
