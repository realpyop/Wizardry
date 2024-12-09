#include "player.hpp"

Player::Player()
{
    character_spritesheet = LoadTexture("./resources/character_spritesheet.png");
};

void Player::Draw()
{
    Rectangle source = Rectangle{0 , 0, 32, 32};
    Rectangle destination = Rectangle{0, 0, 32, 32};
    DrawTexturePro(character_spritesheet, source, destination, Vector2{0, 0}, 0, WHITE);
}