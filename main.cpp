#include "Window.hpp"
#include "Player.hpp"
#include "Map.hpp"

int main(void)
{
    Window  *window = new Window();
    Player  *player = new Player(5, 13, '>');
    Map     *map = new Map(player);
    int     ch;

    nodelay(stdscr, TRUE);
    while (42)
    {
        if ((ch = getch()) != ERR)
            map->updatePlayer(ch);

        map->pushFrame();
        window->printEntities(map->getMap());
        window->refresh();
        delay_output(300);
    }
    delete window;
    return 0;
}
