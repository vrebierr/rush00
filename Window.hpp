#ifndef WINDOW_H
# define WINDOW_H
# include <curses.h>
# include "Entity.hpp"

class Window {
    public:
        Window(void);
        ~Window(void);

        void    refresh(void);

        //	GETTERS SETTERS

        WINDOW  *getWindow(void) const;
        void    setWindow(WINDOW *win);
        void    printEntities(Entity ***entities);
    private:
        Window(Window const & window);
        Window &    operator=(Window const &);

        WINDOW  *_win;
};

#endif
