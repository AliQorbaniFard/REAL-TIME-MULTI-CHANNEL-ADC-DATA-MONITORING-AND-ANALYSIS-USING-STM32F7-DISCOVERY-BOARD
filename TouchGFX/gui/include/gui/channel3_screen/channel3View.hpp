#ifndef CHANNEL3VIEW_HPP
#define CHANNEL3VIEW_HPP

#include <gui_generated/channel3_screen/channel3ViewBase.hpp>
#include <gui/channel3_screen/channel3Presenter.hpp>

class channel3View : public channel3ViewBase
{
public:
    channel3View();
    virtual ~channel3View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    void UpdateGraph3(uint16_t value);


protected:
};

#endif // CHANNEL3VIEW_HPP
