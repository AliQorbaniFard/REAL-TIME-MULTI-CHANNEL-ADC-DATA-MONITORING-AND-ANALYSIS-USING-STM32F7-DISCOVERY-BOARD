#include <gui/channel3_screen/channel3View.hpp>

channel3View::channel3View()
{

}

void channel3View::setupScreen()
{
    channel3ViewBase::setupScreen();
}

void channel3View::tearDownScreen()
{
    channel3ViewBase::tearDownScreen();
}

void channel3View::UpdateGraph3(uint16_t value)
{
	dynamicGraph3.addDataPoint(value);
}
