/*
* ����
* ���룺11 B A ��ʾ�����߳���ߣ����Ļ�ɫinner�������ɫ
* 
*/

#include <iostream>
using namespace std;

int main() {
	int h = 0;
	char outer, inner;
	int row = 1, col = 1;
	int trow = 0;
	int count = 1;

	while (cin >> h)
	{
		cin >> inner >> outer;
		for (row = 1; row <= h; row++)
		{
			if (row == 1 || row == h)
			{
				cout << " ";
				for (int i = 0; i < h-2; i++)
					cout << outer;
				cout << " ";
			}
			else if (row == 2 || row == h-1)
			{
				cout << outer;
				for (int i = 0; i < h - 2; i++)
					cout << inner;
				cout << outer;
			}
			else if (row <= (h+1)/2)
			{ //���󲿷�
				for (col = 1; col < row; col++)
				{ //ÿ�����
					if (col % 2 == 1)
						cout << outer;
					else cout << inner;
				}
				for (; col <= h-(row-1); col++)
				{ //ÿ���м�
					if (row % 2 == 1)
						cout << outer;
					else cout << inner;
				}
				for (; col <= h; col++)
				{ //ÿ���ұ�
					if (col % 2 == 1)
						cout << outer;
					else cout << inner;			
				}
			}		
			else
			{ //�°벿�֣��������Ĳ�
				trow = row - 2*count;
				count++;
				for (col = 1; col < trow; col++)
				{ //ÿ�����
					if (col % 2 == 1)
						cout << outer;
					else cout << inner;
				}
				for (; col <= h - (trow - 1); col++)
				{ //ÿ���м�
					if (trow % 2 == 1)
						cout << outer;
					else cout << inner;
				}
				for (; col <= h; col++)
				{ //ÿ���ұ�
					if (col % 2 == 1)
						cout << outer;
					else cout << inner;
				}
			}
			cout << endl;
		}
	}
}