#include <iostream>
using namespace std;

int main()
{
	int num, result = 0;
	cin >> num;

	while (num >= 0) {
		if (num % 5 == 0) {			// 5kg ������ ���
			result += (num / 5);	// 5�� ���� ��(= 5kg�� ����) �߰�
			cout << result << endl;
			return 0;
		}
		num -= 3;					// 5�� ���������� ���� ��� 3kg�� ��
		result++;					// 3kg ���� �ϳ� �߰�
	}
	cout << -1 << endl;

	return 0;
}