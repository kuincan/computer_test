/*
* �������⣨�û����ɼ������У����Ի�óɼ��Ӹߵ��ͻ�ӵ͵��ߵ�����,
* ��ͬ�ɼ�������¼��������ǰ�Ĺ�����
* Input:
* N 
* method(���򷽷���0����1�����ʾ)
* Name Score
* 
* Output:
* Name Score
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define SIZE 1000

typedef struct Student {
	string name;
	int score;
	int order;
}Stu;

bool comp1(Stu s1, Stu s2) { //����
	if (s1.score == s2.score)
		return s1.order < s2.order;
	return s1.score > s2.score;
}

bool comp2(Stu s1, Stu s2) { //����
	if (s1.score == s2.score)
		return s1.order < s2.order;
	return s1.score < s2.score;
}

int main() {
	int N = 0, method = 0;
	while (cin >> N >> method)
	{
		Stu stu[SIZE];
		for (int i = 0; i < N; i++) {
			cin >> stu[i].name >> stu[i].score;
			stu[i].order = i;
		}
		if (method == 0) //����
			sort(stu, stu + N, comp1);
		else //����
			sort(stu, stu+N, comp2);
		for (int i = 0; i < N; i++)
			cout << stu[i].name << " " << stu[i].score << endl;
	}
	return 0;
}