#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
	int num;		// 점의 개수
	cin >> num;

	vector<vector<int>> arr(num, vector<int>(2, 0));	// 2차원 좌표 num*2 사이즈인 int형 벡터 arr을 0으로 초기화

	for (int i = 0; i < num; i++) {
		cin >> arr[i][0] >> arr[i][1];		// x, y좌표 입력
	}

	sort(arr.begin(), arr.end());			// 작은 수에서 큰 수로 정렬

	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i][0] << " " << arr[i][1] << '\n';
	}

	return 0;
}