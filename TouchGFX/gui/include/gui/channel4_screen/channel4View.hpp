#ifndef CHANNEL4VIEW_HPP
#define CHANNEL4VIEW_HPP

#include <gui_generated/channel4_screen/channel4ViewBase.hpp>
#include <gui/channel4_screen/channel4Presenter.hpp>

class channel4View : public channel4ViewBase
{
public:
    channel4View();
    virtual ~channel4View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    void UpdateGraph4(uint16_t value);


protected:
};

#endif // CHANNEL4VIEW_HPP
