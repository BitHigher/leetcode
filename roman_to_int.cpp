#include <iostream>
using namespace std;

int romanToInt(string s) {
    // Start typing your C/C++ solution below
    // DO NOT write int main() function
    int result = 0;
    int part = 0;
    int size = s.length();
    char prev = 0;
    for(int i = 0; i < size; ++i)
    {
        switch(s[i])
        {
        case 'I':
            if(prev == 'I' || prev == 'V')
                part += 1;
            else
            {
                result += part;
                part = 1;
            }
            break;
        case 'V':
            if(prev == 'I')
                part = 4;
            else
            {
                result += part;
                part = 5;
            }
            break;
        case 'X':
            if(prev == 'I')
                part = 9;
            else if(prev == 'L' || prev == 'X')
                part += 10;
            else
            {
                result += part;
                part = 10;
            }
			break;
        case 'L':
            if(prev == 'X')
                part = 40;
            else
            {
                result += part;
                part = 50;
            }
            break;
        case 'C':
            if(prev == 'X')
                part = 90;
            else if(prev == 'C' || prev == 'D')
                part += 100;
            else
            {
                result += part;
                part = 100;
            }
            
            break;
        case 'D':
            if(prev == 'C')
                part = 400;
            else if(prev == 'M')
            {
                result += part;
                part = 500;
            }
            else 
                part = 500;
            break;
        case 'M':
            if(prev == 'C')
                part = 900;
            else
                part += 1000;
        }
        
        prev = s[i];
    }
	return result+part;
}

int main()
{
	string s;
	while(true)
	{
		cin >> s;
		cout << "INT:" << romanToInt(s) << '\n';
	}
}
