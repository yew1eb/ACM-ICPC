#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    long long ans;
    int n;
    scanf("%d", &n);
    ans = (long long)n*(n+1)/2 + 1;
    printf("%I64d\n", ans);
    return 0;
}
