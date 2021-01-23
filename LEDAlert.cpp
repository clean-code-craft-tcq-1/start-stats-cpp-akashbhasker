/*
 * LEDAlert.cpp
 *
 *  Created on: Jan 23, 2021
 *      Author: ahk7kor
 */

#include "LEDAlert.h"

LEDAlert::~LEDAlert()
{
}

LEDAlert::LEDAlert() : ledGlows(false)
{
}

void LEDAlert::setAlert(bool status)
{
	ledGlows = status;
}
