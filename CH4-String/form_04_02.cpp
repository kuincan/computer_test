/*
* ���뷭��
* ���Ǹ���һ�����ĵļ��ܷ������Ը�����һ���ַ�����
* �����д�a-y,A-Y����ĸ��������ĸ�������z��Z��a��A�������ɵõ�һ���򵥵ļ����ַ�����
* Input��
* string
*
* Output��
* ���ܺ���ַ���
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	int n = 0;
	string str; //���ո�
	while (getline(cin, str))
	{
		for (int j = 0; j < str.length(); j++)
		{
			if (str[j] == 'z' || str[j] == 'Z')
				str[j] -= 25;
			else if ((str[j] >= 'a' && str[j] <= 'y') || (str[j] >= 'A' && str[j] <= 'Y'))
				str[j] += 1;
		}
		cout << str << endl;
	}
	return 0;
}