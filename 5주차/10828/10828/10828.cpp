#include <iostream>
#include <string>
using namespace std;

int s;	// ���ÿ� ����ִ� ������ ���� = ������ ũ��
int a[10001];	// stack �����

void push(int x)
{
	a[s] = x;		// x�� stack�� ����
	s++;
}

int pop()
{
	if (s == 0) return -1;
	int t = a[s - 1];		// ���ÿ��� ���� ���� �ִ� ����
	s--;					// t�� ����
	return t;				// t�� ���
}

int size()
{
	return s;				// ���ÿ� ����ִ� ������ ����
}

int top()
{
	if (s == 0) return -1;	
	return a[s - 1];		// ���ÿ��� ���� ���� �ִ� ����
}

int empty()
{
	if (s == 0) return 1;	// ����ִ� ���
	else return 0;			// ������� ���� ���
}

int main()
{
	int n;		// ����� ��
	cin >> n;

	while (n--) {	// ��ɾ� ����ŭ �ݺ�
		string str;		// ��ɾ�
		cin >> str;

		if (str == "push") {		// ��ɾ push�� ���
			int n;					// ���ÿ� �߰��� ����
			cin >> n;
			push(n);				// ���� n�� ���ÿ� push
		}

		if (str == "pop") {			// ��ɾ pop�� ���
			cout << pop() << '\n';	// ���ÿ��� ���� ���� �ִ� ���� ���� �� ���� ���
		}

		if (str == "top") {			// ��ɾ top�� ���
			cout << top() << '\n';	// ���ÿ��� ���� ���� �ִ� ���� ���
		}

		if (str == "size") {		// ���ÿ� ����ִ� ������ ���� ���
			cout << size() << '\n';
		}

		if (str == "empty") {		// ������ ��������� 1, �ƴϸ� 0 ���
			cout << empty() << '\n';
		}
	}

	return 0;
}