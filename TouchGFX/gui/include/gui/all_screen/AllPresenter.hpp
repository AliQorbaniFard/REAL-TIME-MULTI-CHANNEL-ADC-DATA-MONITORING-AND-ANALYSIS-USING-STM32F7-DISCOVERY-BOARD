#ifndef ALLPRESENTER_HPP
#define ALLPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class AllView;

class AllPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    AllPresenter(AllView& v);

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

    virtual ~AllPresenter() {}

    void UpdateGraph(uint16_t value);
        void UpdateGraph2(uint16_t value);
        void UpdateGraph3(uint16_t value);
        void UpdateGraph4(uint16_t value);
        void UpdateGraph5(uint16_t value);
        void UpdateGraph6(uint16_t value);

private:
    AllPresenter();

    AllView& view;
};

#endif // ALLPRESENTER_HPP
