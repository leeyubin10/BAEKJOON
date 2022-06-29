#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, string> a, pair<int, string> b)
{
	return a.first < b.first;
}

int main() {
	int num;								// ȸ���� ��
	cin >> num;								// ȸ���� �� �Է�
	pair<int, string> tmp;					// int��, str�� pair ����
	vector<pair<int, string>> arr;			// pair ���� ����

	for (int i = 0; i < num; i++)
	{
		cin >> tmp.first >> tmp.second;		// ����, �̸� �Է�
		arr.push_back(tmp);					// vector�� ��� �߰�
	}

	stable_sort(arr.begin(), arr.end(), compare);	// ������ ����

	for (int i = 0; i < num; i++)
		cout << arr[i].first << ' ' << arr[i].second << '\n';
}