#ifndef WINDOW_H
# define WINDOW_H
# include <curses.h>

class Window {
    public:
        Window(void);
        Window(Window const & window);
        Window &	operator=(Window const &);
        ~Window(void);

        void    refresh(void);

        //	GETTERS SETTERS

        WINDOW  *getWindow(void) const;
        void    setWindow(WINDOW *win);
    private:
        WINDOW  *_win;
};

#endif
