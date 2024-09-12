#ifndef CHANNEL6PRESENTER_HPP
#define CHANNEL6PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class channel6View;

class channel6Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    channel6Presenter(channel6View& v);

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

    virtual ~channel6Presenter() {}

    void UpdateGraph6(uint16_t value);


private:
    channel6Presenter();

    channel6View& view;
};

#endif // CHANNEL6PRESENTER_HPP
