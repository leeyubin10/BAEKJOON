#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, e;
	cin >> a;
	cin >> b;

	c = a * (b % 10);
	d = a * (b / 10 % 10);
	e = a * (b / 100);

	cout << c << endl;
	cout << d << endl;
	cout << e << endl;
	cout << 100 * e + 10 * d + c << endl;

	return 0;
}