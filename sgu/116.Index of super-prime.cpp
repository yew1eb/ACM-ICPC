#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;

const int maxn = 10000 + 100;
const int inf = 0x3f3f3f3f;
int mark[maxn], prime[maxn], nprime, sprime[maxn], nsprime;

void sieve_prime(int n)
{
    int i, j, m;
    memset(mark, 0, sizeof mark );
    nprime = 1;
    prime[nprime++] = 2;
    for(i=4; i<=n; i+=2) mark[i] = 1;
    for(i=3; i<=n; i+=2) {
        if(!mark[i]) prime[nprime++] = i;
        for(j=1; j<nprime && prime[j]*i<=n; ++j) {
            mark[i*prime[j]] = 1;
            if(!(i%prime[j])) break;
        }
    }
}

int is_prime(int n)
{
    int m = (int)sqrt(n+0.5);
    if(n<2) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for(int i=2; i<=m; i +=2) {
        if(n%i==0) return false;
        if(i==2) i--;
    }
    return true;
}
void sieve_super_prime()
{
    int i;
    nsprime = 0;
    for(i=1; i<nprime; ++i) {
        if( is_prime(i)) {
            sprime[nsprime++] = prime[i];
        }
    }

}
int dp[maxn], pre[maxn];

void work(int n)
{
    int i, j;
    for(i=1; i<=n; ++i) dp[i] = inf;
    dp[0] = 0;
    pre[0] = 0;
    for(i=0; i<nsprime; ++i) {
        for(j=sprime[i]; j<=n; ++j) {
            if( dp[j-sprime[i]]+1< dp[j])
            {
                dp[j] = dp[j-sprime[i]] + 1;
                pre[j] = j- sprime[i];
            }

        }
    }
    if(dp[n] == inf)
    {
        printf("0\n");
        return ;
    }
    printf("%d\n", dp[n]);
    for(j=n; j; j=pre[j]) {
        printf("%d ", j-pre[j]);
    }
}
int main()
{
    int n, i, j;
    scanf("%d", &n);
    sieve_prime(n);
    sieve_super_prime();
    work(n);
    return 0;
}
