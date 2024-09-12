#include <gui/channel4_screen/channel4View.hpp>
#include <gui/channel4_screen/channel4Presenter.hpp>

channel4Presenter::channel4Presenter(channel4View& v)
    : view(v)
{

}

void channel4Presenter::activate()
{

}

void channel4Presenter::deactivate()
{

}

void channel4Presenter::UpdateGraph4(uint16_t value)
{
	view.UpdateGraph4(value);
}
