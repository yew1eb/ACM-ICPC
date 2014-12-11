#include<cmath>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

const int maxn = 100000;
int prime[maxn], cnt, mark[maxn];

void sieve()
{
    int i, j;
    cnt = 1, prime[0] = 2;
    for(i=3; i<maxn; i += 2)
    {
        if(!mark[i]) prime[cnt++] = i;
        for(j=1; j<cnt && prime[j]<maxn/i; ++j)
        {
            mark[i*prime[j]] = 1;
            if(!(i%prime[j])) break;
        }
    }
}

bool is_prime(int n){
    int m = (int)sqrt(n+0.5);
    if(n<2) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for(int i=2; i<=m; i += 2){
        if(n%i==0) return false;
        if(i==2) i--;
    }
    return true;
}

int main()
{
    sieve();
    int t, n;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        bool found = false;
        for(int i=0; i<cnt && prime[i]<=n/prime[i]; ++i)
        {
            int tmp = n / prime[i];
            if(is_prime(tmp) && tmp *prime[i] == n)
            {
                found = true;
                break;
            }
        }
        if(found) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}






















