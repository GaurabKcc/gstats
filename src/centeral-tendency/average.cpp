#include<iostream>
#include <vector>
#include <average.hpp>
using namespace std;

double avg(const std::vector<double>& numbers)
{
       double sum = 0.0;
	
	for(double value : numbers)
	{
		sum += value;
	}

	return sum/numbers.size();
}
