#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
	int num;		// ���� ����
	cin >> num;

	vector<vector<int>> arr(num, vector<int>(2, 0));	// 2���� ��ǥ num*2 �������� int�� ���� arr�� 0���� �ʱ�ȭ

	for (int i = 0; i < num; i++) {
		cin >> arr[i][0] >> arr[i][1];		// x, y��ǥ �Է�
	}

	sort(arr.begin(), arr.end());			// ���� ������ ū ���� ����

	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i][0] << " " << arr[i][1] << '\n';
	}

	return 0;
}