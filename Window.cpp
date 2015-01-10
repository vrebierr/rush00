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

Window &    Window::operator=(Window const & src) {

    if (this != &src) {
        this->_win = src.getWindow();
    }
    return *this;
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
