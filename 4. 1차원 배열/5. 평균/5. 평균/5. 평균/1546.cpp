#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	int max = 0;
	double hap = 0;
	double res[1000] = {};
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> res[i];
		if (res[i] > max)
		{
			max = res[i];
		}
		hap += res[i];
	}

	hap = (hap / max * 100) / n;

	cout << fixed << setprecision(6) << hap;

	return 0;
}