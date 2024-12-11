#include <iostream>
#include <raylib.h>
#include "player.hpp"
#include "constants.hpp"

using namespace std;




int main()
{
    cout << "Game started" << endl;

    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Wizardry");
    SetTargetFPS(60);

    Player player;

    while(!WindowShouldClose())
    {
        BeginDrawing();
        player.HandleInput();

        //Testing Platform
        DrawRectangle((WINDOW_WIDTH / 2) / 2, (WINDOW_HEIGHT / 2) + 30, 640, 20, WHITE);

        //Drawing Sprite
        player.Draw();

        ClearBackground(BLACK); 
        EndDrawing();
    }

    CloseWindow(); 
    return 0;
}