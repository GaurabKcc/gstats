#include<iostream>
#include<vector>
#include<median.hpp>
using namespace std;

double median(std::vector<double> numbers)
{
	for(int i=0; i<numbers.size()-1; i++)
	{
		for(int j=i+1;j<numbers.size();j++)
		{
			if(numbers[j]<numbers[i])
			{
				double temp = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = temp;

			}
		}
	}

	int n = numbers.size();
	if(n%2==1)
	{
		return numbers[n/2];
	}
	else
	{
		return (numbers[n/2 -1]+numbers[n/2])/2.0;
	}



}


