#include "Window.hpp"

Window::Window(void) {
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
    WINDOW *win = newwin(25, 100, 0, 0);
    wborder(win, '|', '|', '-', '-', '+', '+', '+', '+');
    this->_win = win;
}

Window::~Window(void) {
    endwin();
}



void        Window::refresh(void) {
    wrefresh(this->_win);
}

//      GETTERS / SETTERS


WINDOW      *Window::getWindow(void)  const {
    return this->_win;
}

void        Window::setWindow(WINDOW *win) {
    this->_win = win;
}
