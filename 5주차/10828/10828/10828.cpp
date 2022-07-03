#include <iostream>
#include <string>
using namespace std;

int s;	// 스택에 들어있는 정수의 개수 = 스택의 크기
int a[10001];	// stack 저장소

void push(int x)
{
	a[s] = x;		// x를 stack에 넣음
	s++;
}

int pop()
{
	if (s == 0) return -1;
	int t = a[s - 1];		// 스택에서 가장 위에 있는 정수
	s--;					// t를 제거
	return t;				// t를 출력
}

int size()
{
	return s;				// 스택에 들어있는 정수의 개수
}

int top()
{
	if (s == 0) return -1;	
	return a[s - 1];		// 스택에서 가장 위에 있는 정수
}

int empty()
{
	if (s == 0) return 1;	// 비어있는 경우
	else return 0;			// 비어있지 않은 경우
}

int main()
{
	int n;		// 명령의 수
	cin >> n;

	while (n--) {	// 명령어 수만큼 반복
		string str;		// 명령어
		cin >> str;

		if (str == "push") {		// 명령어가 push일 경우
			int n;					// 스택에 추가할 숫자
			cin >> n;
			push(n);				// 정수 n을 스택에 push
		}

		if (str == "pop") {			// 명령어가 pop일 경우
			cout << pop() << '\n';	// 스택에서 가장 위에 있는 정수 빼고 그 수를 출력
		}

		if (str == "top") {			// 명령어가 top일 경우
			cout << top() << '\n';	// 스택에서 가장 위에 있는 정수 출력
		}

		if (str == "size") {		// 스택에 들어있는 정수의 개수 출력
			cout << size() << '\n';
		}

		if (str == "empty") {		// 스택이 비어있으면 1, 아니면 0 출력
			cout << empty() << '\n';
		}
	}

	return 0;
}