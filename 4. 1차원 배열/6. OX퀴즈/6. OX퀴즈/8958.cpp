#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	int sum = 0;
	int alpha = 1;
	string str;
	int score[100];

	cin >> n;

	for (int i = 0; i < n; i++, sum = 0, alpha = 1)
	{
		cin >> str;
		for (int j = 0; j < str.length(); j++)
		{
			if (str.at(j) == 'O')
			{
				sum += alpha;
				alpha++;
			}
			else if (str[j] == 'X')
				alpha = 1;
		}
		score[i] = sum;
	}

	for (int i = 0; i < n; i++)
		cout << score[i] << "\n";

	return 0;
}