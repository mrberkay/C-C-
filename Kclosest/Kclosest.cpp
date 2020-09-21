#include <iostream>
#include <algorithm>
using namespace std;


double distanceToOrigin(int x, int y)
{
	return sqrt(pow(x,2)+pow(y,2));
}

void printPoints(int *points, int size)
{
	for(int i = 0; i < size; ++i)
	{
		cout << points[i] << " ";
		if(i % 2 == 1) cout << endl;
	}
}

void kClosestPoints(int *points, int k, int arraySize)
{
	double distances[arraySize/2];
	int index = 0;
	for(int i = 0; i < arraySize; i += 2)
	{
		int x = points[i];
		int y = points[i+1];
		distances[index] = distanceToOrigin(x,y);
		index++;
	}
	
	cout << "distances:" << endl;
	for(int i = 0; i < arraySize/2; ++i) cout << distances[i] << endl;
	
	for(int j = 0; j < k; j++)
	{
		int closest = distances[0];
		index = 0;
		for(int i = 0; i < arraySize/2; ++i)
		{
			if(closest > distances[i])
			{
				closest = distances[i];
				index = i;
			} 
		}
		cout << "closest point " << points[2*index] << "," << points[2*index+1] << endl;
		distances[index] = INT_MAX;
	}
}


int main()
{
	int points[12] = {-2,4,0,-2,-1,0,3,5,-2,-3,3,2};
	int k = 3;
	int arraySize = *(&points + 1) - points;
	printPoints(points, arraySize);
	kClosestPoints(points,k,arraySize);
}
