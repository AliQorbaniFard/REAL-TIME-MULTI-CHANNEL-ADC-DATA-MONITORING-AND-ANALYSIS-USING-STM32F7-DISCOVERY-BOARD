#ifndef CHANNEL4PRESENTER_HPP
#define CHANNEL4PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class channel4View;

class channel4Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    channel4Presenter(channel4View& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~channel4Presenter() {}

    void UpdateGraph4(uint16_t value);


private:
    channel4Presenter();

    channel4View& view;
};

#endif // CHANNEL4PRESENTER_HPP
