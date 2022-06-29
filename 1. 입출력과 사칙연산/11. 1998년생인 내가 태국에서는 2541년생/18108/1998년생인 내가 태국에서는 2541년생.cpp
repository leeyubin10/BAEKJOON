#include <iostream>
using namespace std;

int main() {
	// 543년
	int a;
	cin >> a;
	if (a >= 1000 && a <= 3000) {
		cout << a - 543 << endl;
	}
	else
		cout << "다시 입력하세요" << endl;

	return 0;
}