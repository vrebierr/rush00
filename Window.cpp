#include "Window.hpp"

Window::Window(void) {
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
    WINDOW *win = newwin(50, 50, 0, 0);
    wmove(win, 25, 25);
    this->_win = win;
}

Window::Window(Window const & window) {
    *this = window;
}

Window::~Window(void) {
    endwin();
}

void Window::refresh(void) {
    wrefresh(this->_win);
}

WINDOW *Window::getWindow(void)  {
    return this->_win;
}

void Window::setWindow(WINDOW *win) {
    this->_win = win;
}
