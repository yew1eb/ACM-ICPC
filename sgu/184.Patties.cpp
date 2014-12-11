#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int P, M, C, K, R, V;
    scanf("%d%d%d", &P, &M, &C);
    scanf("%d%d%d", &K, &R, &V);
    int ans = min(P/K, M/R);
    ans = min(ans, C/V);
    printf("%d\n", ans);
    return 0;
}
