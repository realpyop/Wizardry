#include <iostream>
#include <raylib.h>
#include "player.hpp"

using namespace std;

float WINDOW_HEIGHT = 720;
float WINDOW_WIDTH = 1280;


int main()
{
    cout << "Game started" << endl;

    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Wizardry");
    SetTargetFPS(60);

    Player player;

    while(!WindowShouldClose())
    {
        BeginDrawing();

        //Testing Platform
        DrawRectangle(320, 540, 640, 20, WHITE);

        //Drawing Sprite
        player.Draw();

        EndDrawing();
    }

    CloseWindow(); 
    return 0;
}