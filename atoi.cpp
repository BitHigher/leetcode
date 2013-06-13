#include <iostream>
#include <string>
using namespace std;

int myatoi(const char *str)
{
	while(*str == ' ')
		str++;

	bool negative = false;
	if(*str == '-')
	{
		negative = true;
		str++;
	}
	else if(*str == '+')
	{
		str++;
	}

	int result = 0;
	int tmp = 0;
	while(*str >= 48 && *str <= 57)
	{
		tmp = result*10 + *str-48;
		if(tmp < 0 || (result && tmp/result < 10))
		{
			if(negative)
				return INT_MIN;
			else
				return INT_MAX;
		}

		result = tmp;
		str++;
	}

	return (negative)? -result : result;
}

int main()
{
	string s;
	
	while(true)
	{
		cin >> s;
		cout << myatoi(s.c_str()) << '\n';
	}
}
