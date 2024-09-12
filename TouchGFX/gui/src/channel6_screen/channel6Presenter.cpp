#include <gui/channel6_screen/channel6View.hpp>
#include <gui/channel6_screen/channel6Presenter.hpp>

channel6Presenter::channel6Presenter(channel6View& v)
    : view(v)
{

}

void channel6Presenter::activate()
{

}

void channel6Presenter::deactivate()
{

}

void channel6Presenter::UpdateGraph6(uint16_t value)
{
	view.UpdateGraph6(value);
}
