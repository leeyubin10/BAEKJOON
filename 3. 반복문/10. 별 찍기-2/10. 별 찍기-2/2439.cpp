#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j<n; j++)
		{
			cout << " ";
		}
		for (int k = n - i - 1; k < n; k++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}