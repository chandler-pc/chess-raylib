#include <raylib.h>
#include "game.h"

int main()
{
    Game* game = new Game();
    game->run();
    return 0;
}