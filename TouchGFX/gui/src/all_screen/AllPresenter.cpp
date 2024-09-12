#include <gui/all_screen/AllView.hpp>
#include <gui/all_screen/AllPresenter.hpp>

AllPresenter::AllPresenter(AllView& v)
    : view(v)
{

}

void AllPresenter::activate()
{

}

void AllPresenter::deactivate()
{

}

void AllPresenter::UpdateGraph(uint16_t value)
{
	view.UpdateGraph(value);
}

void AllPresenter::UpdateGraph2(uint16_t value)
{
	view.UpdateGraph2(value);
}

void AllPresenter::UpdateGraph3(uint16_t value)
{
	view.UpdateGraph3(value);
}

void AllPresenter::UpdateGraph4(uint16_t value)
{
	view.UpdateGraph4(value);
}

void AllPresenter::UpdateGraph5(uint16_t value)
{
	view.UpdateGraph5(value);
}

void AllPresenter::UpdateGraph6(uint16_t value)
{
	view.UpdateGraph6(value);
}





