/*
* �ټ�����
* nԪ��100ֻ������5Ԫ/ֻ��С����3Ԫ/ֻ��1/3Ԫ/ֻ�����֣��ֱ��Ϊx, y, zֻ
* ���xyz�����п��ܽ⣬������Ϊ������
*/
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int n = 0;
	int x = 0, y = 0, z = 0;
	int i = 0, j = 0, k = 0;
	while (cin>>n)
	{
		for (i = 0; i <= 100; i++)
		{
			for (j = 0; j <= 100; j++)
			{
				for (k = 0; k <= 100; k++)
				{
					if ((i+j+k == 100) && (5*i + 3*j + (float)k/3 <= n))
					{
						cout << "x=" << i << ",y=" << j << ",z=" << k << endl;
					}
				}
			}
		}
	}
}