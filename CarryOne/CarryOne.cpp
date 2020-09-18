#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

vector<int> carryOne(vector<int> v)
{
	int number;
	int result = 0;
	int vectorSize = v.size();
	int base = pow(10, vectorSize - 1);
	// Convert vector content to a decimal number
	for(auto i = v.begin(); i != v.end(); i++)
	{
		number = *i * base;
		result += number;	
		base = base / 10;		
	}
	// Increment by one
	result += 1;
	vector<int> returnVector;
	int help = 0;
	for(; result > 0; result = result / 10)
	{
		help = result % 10;
		returnVector.push_back(help);
	}
	std::reverse(returnVector.begin(),returnVector.end());
	return returnVector;
}

void print(vector<int> v)
{
	for(auto i = v.begin(); i != v.end(); i++) cout << *i;
	cout << endl;
}

int main()
{
	vector<int> v1 = {5, 0, 8, 3, 2};
	print(v1);
	print(carryOne(v1));
	vector<int> v2 = {9, 9, 9};
	print(v2);
	print(carryOne(v2));

	return 0;
}



