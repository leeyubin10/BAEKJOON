#include <iostream>
using namespace std;

int main()
{
	int hour, minute, time;
	cin >> hour >> minute;
	cin >> time;

	if (minute + time >= 60)
	{
		hour = hour + ((minute + time) / 60);
		minute = (minute + time) % 60;
		if (hour >= 24)
			hour = hour - 24;
	}
	else
		minute = minute + time;
	cout << hour << " " << minute << endl;

	return 0;
}