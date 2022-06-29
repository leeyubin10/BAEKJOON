#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double n, std, count = 0;
	double sum = 0;
	double avg = 0;
	int score[1000];
	double result[1000] = {};

	cin >> n;

	for (int i = 0; i < n; i++, sum = 0, count = 0)
	{
		cin >> std;
		for (int j = 0; j < std; j++)
		{
			cin >> score[j];
			sum += score[j];
		}
		avg = sum / std;

		for (int k = 0; k < std; k++)
		{
			if (score[k] > avg)
			{
				count++;
			}
		}
		result[i] = count / std * 100;
	}

	
	for (int i = 0; i < n; i++)
	{
		cout << fixed << setprecision(3) << result[i] << "%" << "\n";
	}
	

	return 0;
}