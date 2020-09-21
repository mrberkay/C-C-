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

void kClosestPoints(int *points, int k)
{
	double distances[arraySize/2];
	int index = 0;
}


int main()
{
	
	int points[12] = {-2,4,0,-2,-1,0,3,5,-2,-3,3,2};
	int k = 1;
	int arraySize = *(&points + 1) - points;
	printPoints(points, arraySize);


}






