/*
 * LEDAlert.h
 *
 *  Created on: Jan 23, 2021
 *      Author: ahk7kor
 */

#ifndef LEDALERT_H_
#define LEDALERT_H_

#include "IAlerter.h"

class LEDAlert : public IAlerter
{

public :
	LEDAlert();
	virtual ~LEDAlert();

	virtual void setAlert(bool status);

	bool ledGlows;
};



#endif /* LEDALERT_H_ */
