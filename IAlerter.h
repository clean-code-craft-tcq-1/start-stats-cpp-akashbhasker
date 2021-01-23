/*
 * IAlerter.h
 *
 *  Created on: Jan 23, 2021
 *      Author: ahk7kor
 */

#ifndef IALERTER_H_
#define IALERTER_H_

class IAlerter
{
public :
	virtual ~IAlerter(){}
	virtual void setAlert(bool status) = 0;
};



#endif /* IALERTER_H_ */
