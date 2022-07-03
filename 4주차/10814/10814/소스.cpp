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
	int num;								// 회원의 수
	cin >> num;								// 회원의 수 입력
	pair<int, string> tmp;					// int형, str형 pair 변수
	vector<pair<int, string>> arr;			// pair 변수 저장

	for (int i = 0; i < num; i++)
	{
		cin >> tmp.first >> tmp.second;		// 나이, 이름 입력
		arr.push_back(tmp);					// vector에 요소 추가
	}

	stable_sort(arr.begin(), arr.end(), compare);	// 안정적 정렬

	for (int i = 0; i < num; i++)
		cout << arr[i].first << ' ' << arr[i].second << '\n';
}