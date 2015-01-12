#include "Window.hpp"
#include "Player.hpp"

Window::Window(void) {
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
    WINDOW *win = newwin(27, 102, 0, 0);
    wborder(win, '|', '|', '-', '-', '+', '+', '+', '+');
    this->_win = win;
}

Window::~Window(void) {
    endwin();
}

void        Window::refresh(void) {
    wrefresh(this->_win);
}

void        Window::printEntities(Entity ***entities) {
    for (int y = 0; y < 25; y++)
    {
        for (int x = 0; x < 100; x++)
            mvwaddch(this->_win, y + 1, x + 1, entities[y][x]->getType());
    }
}

//      GETTERS / SETTERS

WINDOW      *Window::getWindow(void)  const {
    return this->_win;
}

void        Window::setWindow(WINDOW *win) {
    this->_win = win;
}
