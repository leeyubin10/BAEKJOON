#include <iostream>
using namespace std;

int main()
{
	int n[100];
	int min = 100, max = 0;
	int sp;

	for (int i = 0; i < 9; i++)
	{
		cin >> n[i];
		if (n[i] > max) {
			max = n[i];
			sp = i+1;
		}
	}

	cout << max << "\n" << sp;

	return 0;
}