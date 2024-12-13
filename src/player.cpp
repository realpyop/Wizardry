#include "player.hpp"
#include "constants.hpp"


Player::Player()
{
    character_spritesheet = LoadTexture("./resources/character_spritesheet.png");
    pos_x = WINDOW_WIDTH / 2;
    pos_y = WINDOW_HEIGHT / 2;
    velocity_x = 5;
    velocity_y = 0;
    is_jumping = false; 

};

void Player::Draw()
{
    Rectangle source = Rectangle{0 , 0, PLAYER_SIZE, PLAYER_SIZE};
    Rectangle destination = Rectangle{pos_x, pos_y, source.width * 2, source.height * 2};
    DrawTexturePro(character_spritesheet, source, destination, Vector2{destination.width / 2, destination.height / 2}, 0, WHITE);
}

void Player::HandleInput()
{
    if(IsKeyDown(KEY_RIGHT) || IsKeyDown(KEY_D))
    {
        MoveRight();
    }
    
    if(IsKeyDown(KEY_LEFT) || IsKeyDown(KEY_A))
    {
        MoveLeft();
    }

    if(IsKeyPressed(KEY_UP) || IsKeyPressed(KEY_W) || IsKeyPressed(KEY_SPACE))
    {
        if(!is_jumping)
        {
            PlayerJump();
        }
    }
    if (is_jumping)
    {
        PlayerJump();
    }
}

void Player::PlayerJump()
{
    if (is_jumping)
    {
        pos_y -= velocity_y;
        velocity_y -= GRAVITY;  // Gravity

        // Check if player landed
        if(pos_y >= (WINDOW_HEIGHT / 2) + 30)
        {
            pos_y = WINDOW_HEIGHT / 2;
            is_jumping = false;
            velocity_y = 0;
        }
    }
    else
    {
        is_jumping = true;
        velocity_y += 10;   // Initial jump velocity
    }
}

void Player::MoveLeft()
{
    pos_x -= velocity_x;
}

void Player::MoveRight()
{
    pos_x += velocity_x; 
}
