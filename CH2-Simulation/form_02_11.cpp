/*
* xxx����
* ����һ����n��
* �����ż�����Ͱ�n����һ�룻
* �������������n��� 3*n+ 1�󿳵�һ�룬ֱ��������Ϊ1Ϊֹ��     
* �������Ҫ�����������ܽ�n�䵽1
*/
#include <iostream>
using namespace std;

int main() {
	int n = 0;
	while (cin >> n)
	{
		int times = 0;
		if (n == 0)
			return 0;
		while (n != 1)
		{
			if (n % 2 == 0) 
				n /= 2;
			else 
				n = (3 * n + 1) / 2;
			times++;
		}
		cout << times << endl;
	}
}
