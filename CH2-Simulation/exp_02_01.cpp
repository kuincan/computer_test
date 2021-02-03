/*
* ��7�޹ص���
* һ��������������ܱ�7����������ʮ���Ʊ�ʾ����ĳһ��λ���ϵ�����Ϊ7����ô����Ϊ��7�йص���
* ��������С�ڵ���n(n<100)����7�޹ص���������ƽ����
*/
#include <iostream>
#include <cstdio>
using namespace std;

bool is_related(int n) {
	//�ж�����n��ĳ��λ���ϵ�����Ϊ7���Ƿ���true�����򷵻�false
	int x = 0;
	while (n!=0)
	{
		x = n % 10;
		if (x == 7)
			return true;
		n = n / 10;
	}
	return false;
}

int main() {
	int n = 0;
	long long int sum = 0;
	while (scanf("%d", &n) != EOF) //C++11������
	{
		for (int i = 0; i <= n; i++)
		{
			if ((i % 7 != 0) && !is_related(i))
			{
				sum += i * i;
			}
		}
		cout << sum << endl;
	}
}