/*
* �ɼ�����
* Input:
* �����һ�а���һ������N(1<=N<=100)������ѧ���ĸ���
* ��������N��ÿ�а�����������p��q���ֱ����ÿ��ѧ����ѧ�źͳɼ�
* Output:
* ����ѧ���ĳɼ���С����������򣬲���������ѧ����Ϣ��ӡ����
* ���ѧ���ĳɼ���ͬ������ѧ�ŵĴ�С���д�С��������
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(vector<int> v1, vector<int> v2) { //���ز�����true����ʾv1������v2ǰ��
	if (v1[1] < v2[1]) //�ɼ���ͬ���͵���ǰ
		return true;
	else if (v1[1] == v2[1]) //�ɼ����
	{
		if (v1[0] < v2[0]) //ѧ��С����ǰ
			return true;
		else return false;
	}
	return false;
}

int main() {
	int N = 0;
	while (cin >> N)
	{
		vector<vector<int>> stus(N, vector<int>(2));
		for (int i = 0; i < N; i++)
			cin >> stus[i][0] >> stus[i][1];
		sort(stus.begin(), stus.end(), comp);
		for (int i = 0; i < N; i++)
			cout << stus[i][0] <<" " << stus[i][1] << endl;
	}
}