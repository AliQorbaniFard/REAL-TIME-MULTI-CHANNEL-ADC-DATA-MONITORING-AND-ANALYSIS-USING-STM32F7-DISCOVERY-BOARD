#include <gui/channel4_screen/channel4View.hpp>

channel4View::channel4View()
{

}

void channel4View::setupScreen()
{
    channel4ViewBase::setupScreen();
}

void channel4View::tearDownScreen()
{
    channel4ViewBase::tearDownScreen();
}

void channel4View::UpdateGraph4(uint16_t value)
{
	dynamicGraph4.addDataPoint(value);
}
