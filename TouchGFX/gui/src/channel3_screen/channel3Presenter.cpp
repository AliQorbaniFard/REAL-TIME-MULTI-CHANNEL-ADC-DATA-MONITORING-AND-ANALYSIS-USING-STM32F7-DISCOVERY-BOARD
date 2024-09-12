#include <gui/channel3_screen/channel3View.hpp>
#include <gui/channel3_screen/channel3Presenter.hpp>

channel3Presenter::channel3Presenter(channel3View& v)
    : view(v)
{

}

void channel3Presenter::activate()
{

}

void channel3Presenter::deactivate()
{

}

void channel3Presenter::UpdateGraph3(uint16_t value)
{
	view.UpdateGraph3(value);
}
