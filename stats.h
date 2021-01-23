#include <vector>
#include <cmath>

namespace Statistics {

	struct Stats
	{
		double min;
		double max;
		double average;

		Stats(double _min , double _max, double _average)
		{
			min = _min;
			max = _max;
			average = _average;
		}
	};

    Stats ComputeStatistics(const std::vector<double>& data);
}
