#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include "stm32f7xx_hal.h"

extern __IO uint16_t uhADCxConvertedData[6];


Model::Model() : modelListener(0)
{

}

void Model::tick()
{
	modelListener->UpdateGraph(uhADCxConvertedData[0] * 3300 / 4096);
	modelListener->UpdateGraph2(uhADCxConvertedData[5] * 3300 / 4096);
	modelListener->UpdateGraph3(uhADCxConvertedData[4] * 3300 / 4096);
	modelListener->UpdateGraph4(uhADCxConvertedData[3] * 3300 / 4096);
	modelListener->UpdateGraph5(uhADCxConvertedData[2] * 3300 / 4096);
	modelListener->UpdateGraph6(uhADCxConvertedData[1] * 3300 / 4096);
}




