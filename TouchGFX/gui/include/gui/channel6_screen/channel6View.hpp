#ifndef CHANNEL6VIEW_HPP
#define CHANNEL6VIEW_HPP

#include <gui_generated/channel6_screen/channel6ViewBase.hpp>
#include <gui/channel6_screen/channel6Presenter.hpp>

class channel6View : public channel6ViewBase
{
public:
    channel6View();
    virtual ~channel6View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    void UpdateGraph6(uint16_t value);

protected:
};

#endif // CHANNEL6VIEW_HPP
