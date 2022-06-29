#include <iostream>
using namespace std;

int main()
{
	int a;
	int n[42] = {};
	int count = 0;

	for (int i = 0; i < 10; i++)
	{
		cin >> a;
		n[a % 42] ++;
	}

	for (int j = 0; j < 42; j++)
	{
		if (n[j] > 0)
			count++;
	}

	cout << count;

	return 0;
}