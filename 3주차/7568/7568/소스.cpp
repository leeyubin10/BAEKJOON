#include <iostream>
using namespace std;

int main()
{
	int num;					// �Է� ���� ��
	cin >> num;

	int* count = new int[num];	// ��� ī��Ʈ
	int* weight = new int[num];	// ������(x)
	int* height = new int[num];	// Ű(y)

	for (int i = 0; i < num; i++) 
	{
		cin >> weight[i] >> height[i];	// Ű�� ������ �Է¹ޱ�
	}

	for (int i = 0; i < num; i++)
	{
		count[i] = 1;					// ��� 1�� �ʱ�ȭ
		for (int j = 0; j < num; j++)
		{
			if (weight[i] < weight[j] & height[i] < height[j])	// Ű�� ������ ��� ū ��밡 ���� ���
				count[i]++;										// ��� ����
		}
	}

	for (int i = 0; i < num; i++)
	{
		cout << count[i] << " ";		// ��� ����ϱ�
	}
	
	return 0;
}