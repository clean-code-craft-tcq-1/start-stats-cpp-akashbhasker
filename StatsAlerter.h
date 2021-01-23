/*
 * StatsAlerter.h
 *
 *  Created on: Jan 23, 2021
 *      Author: ahk7kor
 */

#ifndef STATSALERTER_H_
#define STATSALERTER_H_

#include <vector>
#include "IAlerter.h"

class StatsAlerter
{

	float _threshold;
	std::vector<IAlerter*> _alerts;

public :
	~StatsAlerter();
	StatsAlerter(float threshold, std::vector<IAlerter*> alerters);

	void checkAndAlert(const std::vector<double>& data);
};



#endif /* STATSALERTER_H_ */
