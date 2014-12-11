#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

int gcd(int a, int b) { return b?gcd(b, a%b):a;}
int main()
{
    int n, i;
    scanf("%d", &n);
    int cnt = 0;
    for(i=1; i<=n; ++i)
        if(gcd(n,i)==1) cnt++;
    printf("%d\n", cnt);
    return 0;
}

