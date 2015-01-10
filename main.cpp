#include "Window.hpp"

int main(void)
{
    Window *window = new Window();
    window->refresh();

    int ch;
    nodelay(stdscr, TRUE);
    while (42)
    {
        if ((ch = getch()) == ERR)
        {
            window->refresh();
        }
        else
        {
            window->refresh();
        }
    }
    delete window;
    return 0;
}
