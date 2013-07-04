#include <iostream>
#include <string>

using namespace std;

string intToRoman(int num)
{
	static char roman[4][10][5] = 
	{
		 "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX",
		 "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC",
		 "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM",
		 "", "M", "MM", "MMM", "  ", " ", "  ", "   ", "    ", "  "
	};

	int i = 0;
	string result;
	while(num >0)
	{
		result = roman[i][num%10] + result;
		num /= 10;
		++i;
	}

	return result;
}


int main()
{
	int num;
	while(true)
	{
		cin >> num;
		cout << "Roman: " << intToRoman(num) << '\n';
	}
}
