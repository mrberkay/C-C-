#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

vector<int> carryOne(vector<int> v)
{
	int number;
	int result = 0;
	int var;
	int vectorSize = v.size();
	int base = pow(10, vectorSize - 1);
	// Convert vector content to integer
	for(auto i = v.begin(); i != v.end(); i++)
	{
		var = *i;
		number = var * base;
		result += number;	
		base = base / 10;		
	}
	cout << "number in array: " <<  result << endl;
	// Increment by one
	result += 1;
	
}

void print(vector<int> v)
{
	for(auto i = v.begin(); i != v.end(); i++) cout << *i;
}


int main()
{
	vector<int> v1 = {5, 0, 8, 3, 2};
	print(v1);


}



