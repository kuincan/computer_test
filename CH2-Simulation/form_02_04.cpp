/*
* �����ʽ������
* ���Ҷ���
* ��һ���ܱ���һ�ж�����**
* ����Ϊh����ʾ�����ϵ׺͸�
* ������h�㣬ÿ�²���ϲ������**����һ��Ϊh��**
* ��ڶ���Ϊh+2
* ������h+2*2
* ��h��Ϊh+2*��h-1��=3h-2
* 
* ��i����h+2*��i-1����**����3h-2-h-2(i-1)=2(h-i)���ո�
*/

#include <iostream>
using namespace std;

int main() {
	int h = 0;
	int i = 0;
	while (cin>>h)
	{
		for (i = 1; i <= h; i++)
		{
			for (int j = 0; j < 2 * (h - i); j++)
				cout << " ";
			for (int k = 0; k < h+2*(i-1); k++)
				cout << "*";
			cout << endl;
		}
	}
}