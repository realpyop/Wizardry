#include <iostream>
#include <raylib.h>

using namespace std;

float WINDOW_HEIGHT = 720;
float WINDOW_WIDTH = 1280;


int main()
{
    cout << "Game started" << endl;

    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Wizardry");
    SetTargetFPS(60);

    while(!WindowShouldClose())
    {
        BeginDrawing();

        //Testing Platform
        DrawRectangle(320, 540, 640, 20, WHITE);

        //Drawing Sprite
        Texture2D character = LoadTexture("./resources/character_spritesheet.png");
        Rectangle source = Rectangle{0 , 0, 32, 32};
        Rectangle destination = Rectangle{0, 0, 32, 32};
        DrawTexturePro(character, source, destination, Vector2{0, 0}, 0, WHITE);

        EndDrawing();
    }

    CloseWindow(); 
    return 0;
}