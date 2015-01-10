#include "Window.hpp"

int main(void)
{
    Window  *window = new Window();
    int     ch;
    int     y = 0;
    int     x = 0;

    nodelay(stdscr, TRUE);
    while (42)
    {
        if ((ch = getch()) == ERR)
        {
            window->refresh();
        }
        else
        {
            mvwaddch(window->getWindow(), y, x, 219);
            window->refresh();
            x++;
        }
    }
    delete window;
    return 0;
}
