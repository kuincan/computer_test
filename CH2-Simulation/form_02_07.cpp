/*
 * ��ӡ���� ��-��-��
 * Input:
 *   year day
 * Output:
 *  year-month-day
*/

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

bool isLeap(int year) {
	return (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0));
}

int main() {
	int year = 0, day = 0;
	vector<vector<int>> mon = { {31,28,31,30,31,30,31,31,30,31,30,31}, {31,29,31,30,31,30,31,31,30,31,30,31} };
	while (cin >> year >> day)
	{
		int month = 0;
		int flag = 0;
		if (isLeap(year))
			flag = 1;
		while (day >= 0 && (day - mon[flag][month]) >= 0)
		{ //��һ���»��������ɼ�
			day = day - mon[flag][month];
			if (day == 0) { //ǡΪ���һ��
				day = mon[flag][month];
				break;
			}
			month++;
		}

		month++; //��ಹ�㣬setw()Ϊ���ƿ��
		cout << setw(4) << setfill('0') << year << "-" << setw(2) << setfill('0') << month << "-" << setw(2) << setfill('0') << day << endl;
	}
}