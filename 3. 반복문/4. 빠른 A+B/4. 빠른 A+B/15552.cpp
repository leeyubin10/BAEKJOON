#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int a;
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		int n1, n2;
		cin >> n1 >> n2;
		cout << n1 + n2 << "\n";
	}

	return 0;
}