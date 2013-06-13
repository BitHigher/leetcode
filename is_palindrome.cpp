#include <iostream>
using namespace std;

bool isPalindrome(int x)
{
	if(x < 0)
		return false;

	int p = 0;
	int r = x;
	while(r)
	{
		p = p*10 + r%10;
		r /= 10;
	}

	return p == x;
}


int main()
{
	int x;
	while(true)
	{
		cin >> x;
		cout << isPalindrome(x) << '\n';
	}
}
