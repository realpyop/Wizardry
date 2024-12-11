#include "player.hpp"
#include "constants.hpp"


Player::Player()
{
    character_spritesheet = LoadTexture("./resources/character_spritesheet.png");
    pos_x = WINDOW_WIDTH / 2;
    pos_y = WINDOW_HEIGHT / 2;
    speed_x = 3;
    speed_y = 3;

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
        pos_x += speed_x; 
    }
    
    if(IsKeyDown(KEY_LEFT) || IsKeyDown(KEY_A))
    {
        pos_x -= speed_x;
    }

    if(IsKeyDown(KEY_UP) || IsKeyDown(KEY_W) || IsKeyDown(KEY_SPACE))
    {
        PlayerJump();
    }
}

void Player::PlayerJump()
{
    
}
