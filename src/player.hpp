#pragma once

#include <raylib.h>


class Player 
{
    public:
        Player();
        void Draw();
        void HandleInput();
        void PlayerJump();
        void MoveLeft();
        void MoveRight();

    private:
        Texture2D character_spritesheet;
        float pos_x;
        float pos_y;
        float velocity_x;
        float velocity_y;
        bool is_jumping;
};
