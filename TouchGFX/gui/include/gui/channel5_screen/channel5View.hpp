#ifndef CHANNEL5VIEW_HPP
#define CHANNEL5VIEW_HPP

#include <gui_generated/channel5_screen/channel5ViewBase.hpp>
#include <gui/channel5_screen/channel5Presenter.hpp>

class channel5View : public channel5ViewBase
{
public:
    channel5View();
    virtual ~channel5View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    void UpdateGraph5(uint16_t value);


protected:
};

#endif // CHANNEL5VIEW_HPP
