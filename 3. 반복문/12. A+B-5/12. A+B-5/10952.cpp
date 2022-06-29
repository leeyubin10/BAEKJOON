#include <iostream>
using namespace std;

int main()
{
	int a, b;
	int num = 1;

	while (num != 0)
	{
		cin >> a >> b;

		if (a == 0 && b == 0)
		{
			num = 0;
			break;
		}

		cout << a + b << "\n";
	}

	return 0;
}