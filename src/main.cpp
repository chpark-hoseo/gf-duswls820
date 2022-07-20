#include "Game.h"

SDL_Window* g_pWindow = 0;
SDL_Renderer* g_pRenderer = 0;
bool g_bRunning = false;
Game* g_game = 0;

int main(int argc, char* argv[])
{
    g_game = new Game();
    g_game->init("Game Class", 100, 100, 640, 480, 0);
    while (g_game->running())
    {
        g_game->handleEvents();
        g_game->update();
        g_game->render();
    }
    g_game->clean();
    return 0;
}