#include <iostream>
using namespace std;

int main()
{
	int num, sum;				// ī���� ����, ī���� ��
	cin >> num >> sum;

	int *arr = new int[num];	// ī�� �� �Է� ���� �迭
	int result = 0;				// 3���� ī���� ��

	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];			// ī�� �� �Է�
	}

	for (int i = 0; i < num - 2; i++)	// �迭�� �ε��� �� 3���� ����
	{
		for (int j = i + 1; j < num - 1; j++)
		{
			for (int k = j + 1; k < num; k++)	// 3���� ī�带 ���� ���� ī���� �պ��� �۰ų� ���� result������ ũ�ٸ� ����
			{
				if (arr[i] + arr[j] + arr[k] <= sum && sum - (arr[i] + arr[j] + arr[k]) < sum - result)	
					result = arr[i] + arr[j] + arr[k];
			}
		}
	}

	cout << result;

	return 0;
}