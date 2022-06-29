#include <iostream>
using namespace std;

int main()
{
	int num, sum;				// 카드의 개수, 카드의 합
	cin >> num >> sum;

	int *arr = new int[num];	// 카드 값 입력 받을 배열
	int result = 0;				// 3장의 카드의 합

	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];			// 카드 값 입력
	}

	for (int i = 0; i < num - 2; i++)	// 배열의 인덱스 중 3개를 더함
	{
		for (int j = i + 1; j < num - 1; j++)
		{
			for (int k = j + 1; k < num; k++)	// 3장의 카드를 더한 값이 카드의 합보다 작거나 같고 result값보다 크다면 갱신
			{
				if (arr[i] + arr[j] + arr[k] <= sum && sum - (arr[i] + arr[j] + arr[k]) < sum - result)	
					result = arr[i] + arr[j] + arr[k];
			}
		}
	}

	cout << result;

	return 0;
}