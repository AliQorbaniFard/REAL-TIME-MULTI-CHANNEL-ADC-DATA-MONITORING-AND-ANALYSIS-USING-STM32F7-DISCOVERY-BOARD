#include <gui/channel6_screen/channel6View.hpp>

channel6View::channel6View()
{

}

void channel6View::setupScreen()
{
    channel6ViewBase::setupScreen();
}

void channel6View::tearDownScreen()
{
    channel6ViewBase::tearDownScreen();
}

void channel6View::UpdateGraph6(uint16_t value)
{
	dynamicGraph6.addDataPoint(value);
}
