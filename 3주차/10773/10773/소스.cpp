#include <iostream>
#include <stack>
using namespace std;

int main() {
	int total, num;			// �� �Է� ����, �Է� �޴� ��
	cin >> total;			// �Է� ����
	stack<int> s;			// ���� ����
	for (int i = 0; i < total; i++)
	{
		cin >> num;			// �� �Է� �ޱ�
		if (num != 0) {
			s.push(num);	// 0�� �ƴ϶�� ���ÿ� ���
		}
		else {
			s.pop();		// 0�̶�� �ֱ� �� ���ֱ�
		}
	}

	int sum = 0;			// ������ ��
	int size = s.size();	// ���� ������
	for (int i = 0; i < size; i++) {
		sum += s.top();		// ���� ���� ��� ������ ���� ����
		s.pop();			// ���� �� ���ֱ�
	}
	cout << sum;			// ���� ���
	return 0;
}