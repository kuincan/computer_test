/*
* ʣ�µ���
* �൱�ڸ���һ�δ����䣬Ҫ������ȥM��С����
* ���Դ���һ������ΪL+1�����飬��ʼ��ȫΪ1
* ����ÿһ�����ݣ��ͽ���һ��ѭ��������Ӧλ����Ϊ0
* ������������1�ĸ���
*/
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int L = 0, M = 0;
	cin >> L >> M;
	vector<int> Tree(L + 1, 1); //��ʼ��ȫΪ1

	int a = 0, b = 0;
	for (int i = 0; i < M; i++) {
		cin >> a >> b;
		for (int j = a; j <= b; j++)
			Tree[j] = 0;
	}

	int sum = 0;
	for (int i = 0; i < L+1; i++)
		if (Tree[i] == 1)
			sum++;
	cout << sum;
}