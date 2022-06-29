#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	int count[10] = {};

	int res = a * b * c;

	string s = to_string(res);

	for (int i = 0; i < s.length(); i++) {
		count[s[i] - '0']++;
	}	

	for (int j = 0; j < 10; j++)
		cout << count[j] << "\n";

	return 0;
}