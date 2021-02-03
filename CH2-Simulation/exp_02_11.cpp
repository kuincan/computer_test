/*
* ׹�������
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N = 0;
	while (cin >> N)
	{
		vector<vector<int>> ants(N, vector<int>(2));
		for (int i = 0; i < N; i++) {
			cin >> ants[i][0] >> ants[i][1];
		}

		sort(ants.begin(), ants.end());
		
		int left = 0, right = 0; //��ʼ��������
		int center = 0;

		for (int i = 0; i < ants.size(); i++)
		{ //�õ���ʼ��ֹ��������������ƶ�����Ŀleft�����ұ��������ƶ�����Ŀright
			if (ants[i][1] == 0)
				center = i + 1; //��center�����Ͼ�ֹ
			else if (center == 0 && ants[i][1] == 1)
			  //����������ƶ��� left
				left++;
			else if (i+1 > center && center != 0 && ants[i][1] == -1)
			  //�ұ��������ƶ��� right
				right++;
		}

		/*
		* �ȼ���һ���򵥵������
		* 1��ֻ����ֻ���ϣ�һֻA��ֹ����һֻB�ھ�ֹ������������ƶ�����ô��������ײʱBA
		* ��ʱBA�����ٶȣ�B��ֹ��A�����ƶ�ֱ������ȥ��������ʱ����ֵ�ϵ���B����Ե�ľ���
		* 2������ֻ���ϣ��м�A��ֹ��A��ߵ�B�����ƶ���C�����ƶ�����ôA����߶�������ײ���Իᾲֹ���������
		* 3������2������������������ΪBC����A�����ƶ���Ҳ����˵���ǲ���Ҫ����A����������ƶ������ϣ�ͬ����Ҫ����A�ұ��������ƶ�������
		* ��Ϊ���������������Ӱ��A�ĵ���
		* ��ôֻ��Ҫ�ó���A����������ƶ� �� ��A�ұ��������ƶ������ϸ���������left��right
		* if left == right �������
		* if left < right ������䣬time = �ұ�����ߵ�����ĵ�һ�����ϵ�����0�ľ���
		* if left > right ���ҵ��䣬time = ��left-right�����ϵ����100�ľ���
		*/
		int pos = 0;
		if (left == right)
			cout << "Cannot fall!" << endl;
		else if (left < right) {
			//����ߵ���ȥ
			for (int i = center; i < N; i++)
			{
				if (ants[i][1]==-1)
					pos++;
				if (pos == left+1) {
					cout << ants[i][0] << endl;
					break;
				}
			}			
		}
		else {
			//���ұߵ���ȥ
			for (int i = 0; i < center; i++)
			{
				if (ants[i][1] == 1)
					pos++;
				if (pos == left - right) {
					cout << 100 - ants[i][0] << endl;
					break;
				}
			}
		}
	}
	return 0;
}