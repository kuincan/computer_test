/*
* Old Bill
* ��λ�۸�꣨���ۣ���*ABC*����βģ��
* ����������N���ܼۺ��м���λ���ABC
* �������ܼ��Լ���Ӧ�Ļ𼦵���
*/
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int x = 0, y = 0, z = 0; //�ܼ۸��м���λ
	int num = 0; //������
	int i = 0, j = 0; //�ܼ۸����β
	int flag = 0;
	int maxfront = 0, maxtail = 0;
	while (cin >> num)
	{
		cin >> x >> y >> z;
		flag = 0;
		for (int i = 1; i < 10; i++)
		{ //��
			for (int j = 0; j < 10; j++)
			{ //β				
				if ((i*10000+x*1000+y*100+z*10+j) % num == 0)
				{
					maxfront = i;
					maxtail = j;
					flag = 1;
				}
			}
		}
		if (flag == 1)
			cout << maxfront << " " << maxtail << " " << (maxfront * 10000 + x * 1000 + y * 100 + z * 10 + maxtail) / num << endl;
		if (flag == 0)
			cout << "0" << endl;
	}
}
