#include <iostream>
using namespace std;

int main()
{
	int num;	// ���� �� ��ȣ
	int layer = 0;	// 1 > 1L, 2~7 > 2L, 8~19 > 3L
	cin >> num;

	if (num == 1)	// �� ��ȣ�� 1�϶��� �ѹ��� ����
		layer = 1;

	for (int sum = 2; sum <= num; layer++)	// 2������� �ݺ� ����
		sum += layer * 6;	// ���İ��� ���� �� ����
	
	cout << layer;

	return 0;
}