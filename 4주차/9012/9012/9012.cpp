#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isVps(stack<char>& s, string& str) {
	int sizes = str.size();				// ���ڿ��� ����

	for (int i = 0; i < sizes; i++) {
		if (str[i] == '(')				// �Է� ���� ���ڿ��� '('�� ��� ���ÿ� ����
			s.push('(');
		else {							// �Է� ���� ���ڿ��� ��� ���� ��� vpn�� �ƴ�
			if (s.empty())
				return false;	
			s.pop();					// �Է� ���� ���ڿ��� ')'��� pop
		}
	}

	if (s.empty())						// ������ ����ִٸ� vpn
		return true;
	else                                // ������ ������� �ʴٸ� vpn�� �ƴ�
		return false;
}

int main() {
	int num;		// �Է� ���� ���ڿ��� ��
	string str;		// ���ڿ�

	cin >> num;		// ���ڿ��� �� �Է�

	for (int i = 0; i < num; i++) {
		stack<char> s;					// ���� ���� s ����
		cin >> str;						// num���� ���ڿ� �Է�

		if (isVps(s, str))
			cout << "YES" << endl;		// ��ȯ ���� true��� vpn
		else
			cout << "NO" << endl;		// ��ȯ ���� false��� vpn�� �ƴ�
	}

	return 0;
}