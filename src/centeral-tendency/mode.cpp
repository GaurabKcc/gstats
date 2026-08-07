#include<mode.hpp>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

std::pair<double,int> mode(const std::vector<double> &numbers)
{
	vector<int> count(numbers.size(),1);
	for(int i=0;i<numbers.size()-1;i++)
	{
		bool counted = false;

		for(int k=0;k<i;k++)
		{
			if(numbers[i]==numbers[k])
			{
				counted = true;
				break;
			}
		}

		if(counted)
		{
			continue;
		}

		for(int j=i+1;j<numbers.size();j++)
		{
			if(numbers[i]==numbers[j])
			{
				count[i]++;
			}
		}
	}

	int index = max_element(count.begin(),count.end())-count.begin();

	return {numbers[index],count[index]};

}


