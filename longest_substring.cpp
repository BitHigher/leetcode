#include <string>
#include <iostream>
#include <map>

using namespace std;

int longest(string s)
{
	int counter = 0;
	int start = 0;
	int max = 0;
	map<char, int> record;

	for(int i = 0; i < s.length(); ++i)
	{
		char c = s[i];
		if(record.find(c) != record.end())
		{
			if(start < record[c]+1)
				start = record[c] + 1;
		}

		record[c] = counter++;
		if(max < counter-start)
			max = counter-start;
	}

	return max;
}


int main()
{
	string s;
	while(true)
	{
		cin >> s;
		cout << "Longest: " << longest(s) << '\n';
	}
}
