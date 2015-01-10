#ifndef WINDOW_H
# define WINDOW_H
# include <curses.h>

class Window {
    public:
        Window(void);
        Window(Window const & window);
        ~Window(void);

        void    refresh(void);
        WINDOW  *getWindow(void);
        void    setWindow(WINDOW *win);
    private:
        WINDOW  *_win;
};

#endif
