#include <iostream>
using namespace std;

int main()
{
	int num, result = 0;
	cin >> num;

	while (num >= 0) {
		if (num % 5 == 0) {			// 5kg 구성된 경우
			result += (num / 5);	// 5로 나눈 몫(= 5kg의 개수) 추가
			cout << result << endl;
			return 0;
		}
		num -= 3;					// 5로 나누어지지 않을 경우 3kg을 뺌
		result++;					// 3kg 가방 하나 추가
	}
	cout << -1 << endl;

	return 0;
}