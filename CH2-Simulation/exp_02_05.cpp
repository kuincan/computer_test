/*
* Hello World for U
* ����һ������ΪN���ַ������U����
* U�����ߣ����ף�ռn1���ַ����Ҵ��ߣ����ף�ռn3���ַ�
* �ױ�ռn2���ַ���n2=N+2 - (n1+n3)
* n1=n3=max{k | k <= n2 for all 3 <= n2 <= N}
* Ҫ��n1��n2�������ܴ���ֻ������n1==n2��n2-n1==1
* ����ͼ�δ�СΪn1*n2
*/
#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;


int main() {
	int n1 = 0, n2 = 0;
	int N = 0;
	int left = 0, right = 0;
	string str;
	while (cin >> str)
	{
		auto start = system_clock::now();
		N = str.length();
		//��Ϊn1��n2Ҫ�����ܽӽ�����n2�ز�С��n1������ȼ���n1==n2����ôn1==N/3
		n1 = (N + 2) / 3;
		n2 = N + 2 - 2 * n1;

		left = 0;
		right = N-1;
		for (int i = 0; i < n1; i++)
		{
			cout << str[left++];
			for (int j = 0; j < n2 - 2; j++)
				i != n1 - 1 ? cout << " " : cout << str[left++];
			cout << str[right--] << endl;
		}
		auto end = system_clock::now();
		auto duration = duration_cast<microseconds>(end - start);
		cout << "TIME: " << double(duration.count()) * microseconds::period::num / microseconds::period::den << " s" << endl;
	}
}