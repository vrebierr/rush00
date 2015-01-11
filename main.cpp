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
        if ((ch = getch()) != ERR)
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
        }
        flushinp();
        window->refresh();
        delay_output(300);

    }
    delete window;
    return 0;
}
