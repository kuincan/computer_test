/*
* ·����ӡ����ӡĿ¼���ṹ
* �ȵõ�����·��(��'\')���ٵ����ָ�洢
*/
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 0;
    while (cin >> n)
    {
        if (n == 0)
            return 0;
        vector<vector<string>> str(n, vector<string>(50));
        string tmp;
        string s;
        //Input
        for (int i = 0; i < n; i++)
        {
            cin >> tmp; 
            int pos = 0;
            //�ָ��ַ���
            for (int j = 0; j < tmp.size(); ++j)
            {
                if (tmp[j] == '\\') {
                    str[i][pos++] = s;
                    s.clear();
                    continue;
                }
                else if (j == tmp.size() - 1)
                {
                    s += tmp[j];
                    str[i][pos++] = s;
                    s.clear();
                }
                else
                    s += tmp[j];
            }   
            str[i].resize(pos);
        }
        //��������
        sort(str.begin(), str.end());

        for (int i = 0; i < n; i++)
        {
            int pos = 0;
            string space;
            while (i != 0 && pos < str[i].size() && pos < str[i-1].size() && str[i-1][pos] == str[i][pos])
            { //���������ո����
                space += "  ";
                pos++;
            }
            for (; pos < str[i].size(); pos++, space += "  ")
                cout << space << str[i][pos] << endl;
        }
        cout << endl; //����
    }
    return 0;
}
