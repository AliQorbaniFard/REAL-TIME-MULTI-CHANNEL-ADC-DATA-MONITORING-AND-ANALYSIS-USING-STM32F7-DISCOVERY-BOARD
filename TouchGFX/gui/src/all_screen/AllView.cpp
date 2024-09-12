#include <gui/all_screen/AllView.hpp>

AllView::AllView()
{

}

void AllView::setupScreen()
{
    AllViewBase::setupScreen();
}

void AllView::tearDownScreen()
{
    AllViewBase::tearDownScreen();
}

void AllView::UpdateGraph(uint16_t value)
{
	dynamicGraph1.addDataPoint(value);
}

void AllView::UpdateGraph2(uint16_t value)
{
	dynamicGraph2.addDataPoint(value);
}

void AllView::UpdateGraph3(uint16_t value)
{
	dynamicGraph3.addDataPoint(value);
}

void AllView::UpdateGraph4(uint16_t value)
{
	dynamicGraph4.addDataPoint(value);
}

void AllView::UpdateGraph5(uint16_t value)
{
	dynamicGraph5.addDataPoint(value);
}


void AllView::UpdateGraph6(uint16_t value)
{
	dynamicGraph6.addDataPoint(value);
}
