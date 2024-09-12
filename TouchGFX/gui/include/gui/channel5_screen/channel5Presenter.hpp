#ifndef CHANNEL5PRESENTER_HPP
#define CHANNEL5PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class channel5View;

class channel5Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    channel5Presenter(channel5View& v);

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

    virtual ~channel5Presenter() {}
    void UpdateGraph5(uint16_t value);


private:
    channel5Presenter();

    channel5View& view;
};

#endif // CHANNEL5PRESENTER_HPP
