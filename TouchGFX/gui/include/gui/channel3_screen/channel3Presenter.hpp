#ifndef CHANNEL3PRESENTER_HPP
#define CHANNEL3PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class channel3View;

class channel3Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    channel3Presenter(channel3View& v);

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

    virtual ~channel3Presenter() {}

    void UpdateGraph3(uint16_t value);


private:
    channel3Presenter();

    channel3View& view;
};

#endif // CHANNEL3PRESENTER_HPP
