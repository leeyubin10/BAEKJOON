#include <iostream>
using namespace std;

int main()
{
	int num = 0;				// 숫자 입력 개수
	int index = 0;				// 입력 받을 숫자
	int count = 0;				// 소수 개수 카운트
	int temp = 0;				// 나머지가 0이 되는 수 카운트

	cin >> num;					// 숫자 개수
	
	for (int i = 0; i < num; i++)
	{
		cin >> index;			// 숫자 입력 받기

		for (int j = 1; j <= index; j++) {
			if (index % j == 0)
				temp++;
		}
		if (temp == 2)
			count++;

		temp = 0;
	}

	cout << count;

	return 0;
}