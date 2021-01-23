/*
 * StatsAlerter.cpp
 *
 *  Created on: Jan 23, 2021
 *      Author: ahk7kor
 */

#include "StatsAlerter.h"
#include "stats.h"

StatsAlerter::~StatsAlerter()
{
}

StatsAlerter::StatsAlerter(float threshold, std::vector<IAlerter*> alerters)
:_threshold(threshold)
,_alerts(alerters)
{

}

void StatsAlerter::checkAndAlert(const std::vector<double>& data)
{
	Statistics::Stats stat = Statistics::ComputeStatistics(data);

	bool setAlert = false;

	if(stat.max > _threshold)
	{
		setAlert = true;
	}

	std::vector<IAlerter*>::iterator itr = _alerts.begin();

	for(;itr != _alerts.end() ; ++ itr )
	{
		(*itr)->setAlert(setAlert);
	}


}


