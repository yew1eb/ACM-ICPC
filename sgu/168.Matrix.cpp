#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

const int maxn = 1000 + 10;
int dp[maxn][maxn], a[maxn][maxn];

int main()
{
    int n, m, i, j;
    scanf("%d%d", &n, &m);
    for(i=1; i<=n; ++i) for(j=1; j<=m; ++j) scanf("%d", &a[i][j]);
    dp[n][m] = a[n][m];
    for(i=n-1; i>=1; --i)
        dp[i][m] = min(dp[i+1][m], a[i][m]);

    for(j=m-1; j>=1; --j)
    for(i=n; i>=1; --i)
    {
        int ret = a[i][j];
        if(i<n) ret = min(ret, dp[i+1][j]);
        if(i-1>=1 && j+1<=m) ret = min(ret, dp[i-1][j+1]);
        else ret = min(ret, dp[i][j+1]);
        dp[i][j] = ret;
    }
    for(i=1; i<=n; ++i)
    {
        for(j=1; j<=m; ++j)
            printf("%d ", dp[i][j]);
        printf("\n");
    }
    return 0;
}
