#pragma once

#include <raylib.h>



class Player 
{
    public:
        Player();
        void Draw();

    private:
        Texture2D character_spritesheet;
};
