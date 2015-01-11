#include "Window.hpp"
#include <ctime>

int main(void)
{
    Window  *window = new Window();
    int     ch;
    int     y = 0;
    int     x = 0;
    time_t  last = time(0);

    nodelay(stdscr, TRUE);
    while (42)
    {
        if ((ch = getch()) == ERR)
        {
            window->refresh();
        }
        else
        {
            if (ch == KEY_DOWN)
            {
                mvwaddch(window->getWindow(), y, x, ch);
                y++;
            }
            else if (ch == KEY_UP)
            {
                mvwaddch(window->getWindow(), y, x, ch);
                y--;
            }
            else if (ch == KEY_LEFT)
            {
                mvwaddch(window->getWindow(), y, x, ch);
                x--;
            }
            else if (ch == KEY_RIGHT)
            {
                mvwaddch(window->getWindow(), y, x, ch);
                x++;
            }

            window->refresh();
        }
    }
    delete window;
    return 0;
}
