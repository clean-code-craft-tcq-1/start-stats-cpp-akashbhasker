/*
 * EmailAlert.cpp
 *
 *  Created on: Jan 23, 2021
 *      Author: ahk7kor
 */

#include "EmailAlert.h"

EmailAlert::~EmailAlert()
{
}

EmailAlert::EmailAlert() : emailSent(false)
{
}

void EmailAlert::setAlert(bool status)
{
	emailSent = status;
}

