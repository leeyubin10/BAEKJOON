#include <iostream>
using namespace std;

int main()
{
	int n, result, count = 0, origin;
	cin >> n;
	origin = n;
	while (n != 0)
	{
		result = n / 10 + n % 10;
		n = n % 10 * 10 + result % 10;
		count++;
		if (n == origin)
			n = 0;
	}
	if (origin == 0)
	{
		count = 1;
	}
	cout << count;

	return 0;
}