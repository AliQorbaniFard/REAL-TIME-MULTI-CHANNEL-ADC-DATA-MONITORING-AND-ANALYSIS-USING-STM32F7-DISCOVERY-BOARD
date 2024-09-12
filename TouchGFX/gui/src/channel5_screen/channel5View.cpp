#include <gui/channel5_screen/channel5View.hpp>

channel5View::channel5View()
{

}

void channel5View::setupScreen()
{
    channel5ViewBase::setupScreen();
}

void channel5View::tearDownScreen()
{
    channel5ViewBase::tearDownScreen();
}

void channel5View::UpdateGraph5(uint16_t value)
{
	dynamicGraph5.addDataPoint(value);
}


