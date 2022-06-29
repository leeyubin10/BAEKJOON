#include <iostream>
#include <stack>
using namespace std;

int main() {
	int total, num;			// 총 입력 개수, 입력 받는 수
	cin >> total;			// 입력 개수
	stack<int> s;			// 스택 변수
	for (int i = 0; i < total; i++)
	{
		cin >> num;			// 수 입력 받기
		if (num != 0) {
			s.push(num);	// 0이 아니라면 스택에 담기
		}
		else {
			s.pop();		// 0이라면 최근 수 없애기
		}
	}

	int sum = 0;			// 숫자의 합
	int size = s.size();	// 스택 사이즈
	for (int i = 0; i < size; i++) {
		sum += s.top();		// 가장 위에 담긴 스택의 수를 더함
		s.pop();			// 더한 수 없애기
	}
	cout << sum;			// 총합 출력
	return 0;
}