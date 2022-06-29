#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isVps(stack<char>& s, string& str) {
	int sizes = str.size();				// 문자열의 길이

	for (int i = 0; i < sizes; i++) {
		if (str[i] == '(')				// 입력 받은 문자열이 '('일 경우 스택에 저장
			s.push('(');
		else {							// 입력 받은 문자열이 비어 있을 경우 vpn이 아님
			if (s.empty())
				return false;	
			s.pop();					// 입력 받은 문자열이 ')'라면 pop
		}
	}

	if (s.empty())						// 스택이 비어있다면 vpn
		return true;
	else                                // 스택이 비어있지 않다면 vpn이 아님
		return false;
}

int main() {
	int num;		// 입력 받을 문자열의 수
	string str;		// 문자열

	cin >> num;		// 문자열의 수 입력

	for (int i = 0; i < num; i++) {
		stack<char> s;					// 스택 변수 s 선언
		cin >> str;						// num개의 문자열 입력

		if (isVps(s, str))
			cout << "YES" << endl;		// 반환 값이 true라면 vpn
		else
			cout << "NO" << endl;		// 반환 값이 false라면 vpn이 아님
	}

	return 0;
}