#include "Window.hpp"
#include "Player.hpp"
#include "Map.hpp"

int main(void)
{
    Window  *window = new Window();
    Player  *player = new Player(13, 1, '@');
    Map     *map = new Map(player);
    int     ch;

    nodelay(stdscr, TRUE);
    while (42)
    {
        if ((ch = getch()) != ERR)
            player->action(ch);

        map->pushFrame();
        window->printEntities(map->getMap());
        window->refresh();
        delay_output(300);
    }
    delete window;
    return 0;
}
