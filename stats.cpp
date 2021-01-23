#include "stats.h"
#include <iostream>

using namespace Statistics;

Stats Statistics::ComputeStatistics(const std::vector<double>& data) {
    //Implement statistics here

	std::vector<double>::const_iterator itr = data.begin();

	if(itr == data.end())
	{
		return Stats(NAN,NAN,NAN);
	}
	else
	{
		double sum = *itr ;
		double min = *itr;
		double max = *itr;

		++itr;

		for( ; itr!=data.end(); ++itr)
		{
			sum = sum + *itr;
			min = (*itr < min) ? *itr : min;
			max = (*itr > max) ? *itr : max;
		}

		double average = sum / data.size() ;

		return Stats(min,max,average);
	}
}
