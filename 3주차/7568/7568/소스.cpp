#include <iostream>
using namespace std;

int main()
{
	int num;					// 입력 받을 수
	cin >> num;

	int* count = new int[num];	// 등수 카운트
	int* weight = new int[num];	// 몸무게(x)
	int* height = new int[num];	// 키(y)

	for (int i = 0; i < num; i++) 
	{
		cin >> weight[i] >> height[i];	// 키와 몸무게 입력받기
	}

	for (int i = 0; i < num; i++)
	{
		count[i] = 1;					// 등수 1로 초기화
		for (int j = 0; j < num; j++)
		{
			if (weight[i] < weight[j] & height[i] < height[j])	// 키와 몸무게 모두 큰 상대가 있을 경우
				count[i]++;										// 등수 증가
		}
	}

	for (int i = 0; i < num; i++)
	{
		cout << count[i] << " ";		// 등수 출력하기
	}
	
	return 0;
}