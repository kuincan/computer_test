/*
* �ֻ�����, a��ASCII���'a'��ʼ
* 1��abc
* 2��def
* 3��ghi
* 4��jkl
* 5��mno
* 6��pqrs
* 7��tuv
* 8��wxyz
* keyboard֮�� == ��ĸ֮��
* ��һ��times+1���ȴ�times+2
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> keyboard = { 1,2,3,  1,2,3,  1,2,3,  1,2,3,  1,2,3,  1,2,3,4,  1,2,3,  1,2,3,4 }; //(int)ch-'a'
	string s;
	while (cin >> s)
	{
		int times = 0;
		int len = s.length();
		for (int i = 0; i < s.length(); ++i)
		{ //�ȴ�ʱ��
			int ch1 = int(s[i - 1]);
			int ch2 = int(s[i]);
			if (i != 0 && ((ch1 - ch2) == (keyboard[ch1 - 'a'] - keyboard[ch2 - 'a'])))
				times += 2; //��ͬһ��������Ҫ�ȴ�
			times += keyboard[int(s[i]) - 'a'];
		}
		cout << times << endl;
	}
}