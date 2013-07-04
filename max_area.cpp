#include <iostream>
#include <vector>

using namespace std;


int maxArea(vector<int> &height)
{
	int i = 0;
	int j = height.size()-1;
	int max = 0;
	int minHeight = 0;
	int area = 0;

	while(i < j)
	{
		if(height[i] < height[j])
		{
			minHeight = height[i];
			++i;
		}
		else
		{
			minHeight = height[j];
			--j;
		}

		area = minHeight * (j-i+1);
		if(max < area)
			max = area;
	}

	return max;
}


int main()
{
	int size;
	vector<int> height;
	while(true)
	{
		cin >> size;
		height.resize(size);
		for(int i = 0; i < size; ++i)
		{
			cin >> height[i];
		}
		cout << "Max Area: " << maxArea(height) << '\n';
	}
}
