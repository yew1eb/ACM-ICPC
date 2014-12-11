/*
有两个盒子. 第一个盒子里有A 个球, 第二个里面有B 个球 (0 < A + B < 2147483648).
允许把球在两个盒子间移动. 从一个盒子向另一个盒子移动球的数目必须等
于接受盒子现有的球的数量. 你需要搞清楚, 最后球能不能都移动到一个盒子里

Input
第一行两个整数 A 和 B, 空格分隔.

Output
一行数字 N – 需要移动的次数,如果不存在，输出-1

首先我们需要知道，求 A,B 的步数其实就等同于求 A/gcd(A,B),B/gcd(A,B) 的步数。
对于这个的证明很明显，每次移动的球一定是 gcd(A,B) 的倍数。
对于每次移动，令 A = A/gcd(A,B) ,B = B/gcd(A,B)，讨论情况 ：
（1） A，B都为偶数（不可能）
（2） A，B有一个为奇数 （无解，很明显吧，因为A+B都是奇数了）
（3） A，B都是奇数-> 假设A是较小的那一个，那么就可以变化为 A*2,B-A ，然后我们的新目标就变成了求解 A*2,B-A 的步数
结束条件 A=0 或 B=0
容易证明，上述步骤重复次数最多不超过 log(A+B)次
*/

#include <cstdio>
int gcd(int a, int b){return b?gcd(b,a%b):a;}

const int MaxLoop = 10000;
int calc(int a, int b)
{
    int cnt = 0;
    //暴力做法
    while(a&b)
    {
        if(a>b) {int t=a; a=b; b=t;}
        b -= a;
        a += a;
        cnt++;
        if(cnt > MaxLoop) break;
    }
    if(cnt >MaxLoop) cnt -1;
    return cnt;
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", calc(a,b));
    return 0;
}










