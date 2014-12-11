#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

/*
一个数能被3整除当且仅当各位数之和能被3整除：http://blog.csdn.net/yew1eb/article/details/9104085
*/
int main()
{
    int n, ans = 0;
    scanf("%d", &n);
    if(n%3==2) ans++;
    ans += n/3*2;
    printf("%d\n", ans);
    return 0;
}

