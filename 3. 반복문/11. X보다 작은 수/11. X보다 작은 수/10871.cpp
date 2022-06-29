#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	cin >> n1 >> n2;
	int num[10000];

	for (int i = 0; i < n1; i++)
	{
		cin >> num[i];
	}

	for (int j = 0; j < n1; j++)
	{
		if (num[j] < n2) {
			cout << num[j] << " ";
		}
	}

	return 0;
}