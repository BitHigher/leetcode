#include <iostream>
using namespace std;

int reverse(int x)
{
	int result = 0;
	while(x)
	{
		result = result*10 + (x%10);
		x /= 10;
	}
	return result;
}

int main()
{
	int n;
	while(true)
	{
		cin >> n;
		cout << reverse(n) << '\n';
	}
}
