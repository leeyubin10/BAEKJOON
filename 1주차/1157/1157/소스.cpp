#include <iostream>
#include <string>
using namespace std;

int main()
{
	int num[26] = { 0 };
	int count = 0;
	int max = 0;
	int index = 0;

	string str;
	cin >> str;

	// 65~90 : �빮��, 97~122 : �ҹ���
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] < 97)
			num[str[i] - 65]++;	// �빮��
		else
			num[str[i] - 97]++;	// �ҹ���
	}

	for (int i = 0; i < 26; i++)
	{
		if (max < num[i])
		{
			max = num[i];
			index = i;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (max == num[i])
			count++;
	}

	if (count > 1) 
		cout << "?";
	else 
		cout << (char)(index + 65) << endl;

	return 0;
}