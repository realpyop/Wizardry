#include "player.hpp"
#include "constants.hpp"


Player::Player()
{
    character_spritesheet = LoadTexture("./resources/character_spritesheet.png");
};

void Player::Draw()
{
    Rectangle source = Rectangle{0 , 0, PLAYER_SIZE, PLAYER_SIZE};
    Rectangle destination = Rectangle{WINDOW_WIDTH / 2, WINDOW_HEIGHT / 2, source.width * 2, source.height * 2};
    DrawTexturePro(character_spritesheet, source, destination, Vector2{destination.width / 2, destination.height / 2}, 0, WHITE);
}