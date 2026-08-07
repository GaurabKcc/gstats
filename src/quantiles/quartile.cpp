#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<quartile.hpp>

using namespace std;

double quartile(const int  n, const std::vector<double>& numbers)
{
	vector<double> sorted = numbers;
	sort(sorted.begin(),sorted.end());

	if (sorted.empty())
		throw std::invalid_argument("Data cannot be empty.");

	if(n<1 || n>3)
		    throw std::invalid_argument("Quartile must be 1, 2, or 3.");

    double q =  n * ((sorted.size() + 1) / 4.0);

    int lower = floor(q), upper = ceil(q);
    double fraction = q - lower;

    double a = sorted[lower-1];
    double b = sorted[upper-1];

    return a+fraction*(b-a);
}
