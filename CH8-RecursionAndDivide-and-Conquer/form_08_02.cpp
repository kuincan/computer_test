/**
 * 汉诺塔III
 * 古老的智力游戏玩法：
 * 在一块铜板上有三根杆，最左边的杆自上而下，由小到大顺序串着由64个圆盘构成的塔
 * 目的是将最左边的杆上的圆盘全部移到右边的杆上，条件是一次只能移动一个圆盘，并且不允许大圆盘放在小圆盘上面
 * 
 * 现改变玩法:
 * 不允许直接从最左(右)边移到右(左)边，每次移动一定是移到中间杆或从中间杆移出，
 * 也不允许大圆盘放在小圆盘上面
 * 
 * 现有N个圆盘，问至少需要多少次移动才能把这些圆盘从最左边移动到最右边？
 * 
 * INPUT: 多组测试用例
 * N (1<=N<=35)
 * OUTPUT:
 * 最小移动次数
 * 
 * TIPS:
 * 移动N个圆盘，其子问题是移动N-1个圆盘，最小子问题是移动1个圆盘
 * 1. 移动N-1个圆盘，首先要将N-1个圆盘移动到最右边的杆上，F(N-1)次，然后最大圆盘移动到中间的杆，次数加1，
 * 然后最右边的N-1个圆盘再移动到最左边，F(N-1)次，然后最大圆盘移动到最右边的杆，次数加1，最左边的N-1圆盘再移动到最右边F(N-1)次
 * 总计3*F(N-1)+2次
 * 2. 只移动一个圆盘到最右边，显然是2次
 * 
 **/
#include <iostream>
using namespace std;

typedef long long ll;

ll Tower(int n){
    if (n == 1)
        return 2;
    else
        return 3*Tower(n-1)+2;    
}

int main(){
    int n=0;
    while (cin >> n)
    {
        cout << Tower(n) << endl;
    }
    return 0;
}