#include <gui/main_screen/mainView.hpp>

mainView::mainView()
{

}

void mainView::setupScreen()
{
    mainViewBase::setupScreen();
}

void mainView::tearDownScreen()
{
    mainViewBase::tearDownScreen();
}

void mainView::UpdateGraph(uint16_t value)
{
	dynamicGraph1.addDataPoint(value);
}

void mainView::UpdateGraph2(uint16_t value)
{
	dynamicGraph2.addDataPoint(value);
}

void mainView::UpdateGraph3(uint16_t value)
{
	dynamicGraph3.addDataPoint(value);
}

void mainView::UpdateGraph4(uint16_t value)
{
	dynamicGraph4.addDataPoint(value);
}

void mainView::UpdateGraph5(uint16_t value)
{
	dynamicGraph5.addDataPoint(value);
}


void mainView::UpdateGraph6(uint16_t value)
{
	dynamicGraph6.addDataPoint(value);
}

