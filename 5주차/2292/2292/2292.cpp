#include <iostream>
using namespace std;

int main()
{
	int num;	// 도착 방 번호
	int layer = 0;	// 1 > 1L, 2~7 > 2L, 8~19 > 3L
	cin >> num;

	if (num == 1)	// 방 번호가 1일때는 한번에 도착
		layer = 1;

	for (int sum = 2; sum <= num; layer++)	// 2번방부터 반복 시작
		sum += layer * 6;	// 거쳐가는 방의 수 구함
	
	cout << layer;

	return 0;
}