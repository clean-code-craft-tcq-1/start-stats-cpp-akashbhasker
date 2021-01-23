/*
 * EmailAlert.h
 *
 *  Created on: Jan 23, 2021
 *      Author: ahk7kor
 */

#ifndef EMAILALERT_H_
#define EMAILALERT_H_

#include "IAlerter.h"

class EmailAlert : public IAlerter
{

public :
	EmailAlert();
	virtual ~EmailAlert();

	virtual void setAlert(bool status);

	bool emailSent;
};


#endif /* EMAILALERT_H_ */
