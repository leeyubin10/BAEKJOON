#include <iostream>
using namespace std;

int main()
{
	int A, B, V;		// ³·, ¹ã, ³ª¹«³ôÀÌ
	cin >> A >> B >> V;

	cout << (V - B - 1) / (A - B) + 1;

	return 0;
}