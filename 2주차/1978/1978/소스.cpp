#include <iostream>
using namespace std;

int main()
{
	int num = 0;				// ���� �Է� ����
	int index = 0;				// �Է� ���� ����
	int count = 0;				// �Ҽ� ���� ī��Ʈ
	int temp = 0;				// �������� 0�� �Ǵ� �� ī��Ʈ

	cin >> num;					// ���� ����
	
	for (int i = 0; i < num; i++)
	{
		cin >> index;			// ���� �Է� �ޱ�

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