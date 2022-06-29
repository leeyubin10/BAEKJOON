#include <iostream>
using namespace std;

int main()
{
	int hour;
	int minute;
	cin >> hour >> minute;
	if (minute < 45) {
		minute = 60 - (45 - minute);
		if (hour == 0)
			hour = 23;
		else
			hour = hour - 1;
	}
	else
		minute = minute - 45;
	cout << hour << " " << minute << endl;
}