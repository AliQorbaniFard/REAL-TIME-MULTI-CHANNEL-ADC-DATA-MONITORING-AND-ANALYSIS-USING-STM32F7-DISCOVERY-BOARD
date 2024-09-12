#include <gui/channel5_screen/channel5View.hpp>
#include <gui/channel5_screen/channel5Presenter.hpp>

channel5Presenter::channel5Presenter(channel5View& v)
    : view(v)
{

}

void channel5Presenter::activate()
{

}

void channel5Presenter::deactivate()
{

}

void channel5Presenter::UpdateGraph5(uint16_t value)
{
	view.UpdateGraph5(value);
}
