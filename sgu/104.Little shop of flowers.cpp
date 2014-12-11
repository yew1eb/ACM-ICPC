#include<cstdio>
#include<cstring>
using namespace std;

const int maxn = 200;
const int inf = 1000000000;

int dp[maxn][maxn], value[maxn][maxn];
int n, m;

void print(int i, int v)
{
    if(i<1) return ;
    for(int j=i; j<=m; ++j)
    if(dp[i][j] == v)
    {
        print(i-1, v - value[i][j]);
        printf("%d ", j);
        break;
    }
}
int main()
{
    int i, j, k;
    scanf("%d%d", &n, &m);
    for(i=1; i<=n; ++i)
        for(j=1; j<=m; ++j)
            scanf("%d", &value[i][j]);
    for(j=1; j<=m; ++j)
    {
        if(j>1 && dp[1][j-1] > value[1][j])
            dp[1][j] = dp[1][j-1];
        else
            dp[1][j] = value[1][j];
    }
    for(i=2; i<=n; ++i)
    {
        for(j=i; j<=m; ++j)
        {
            dp[i][j] = -inf;
            for(k=i-1; k<j; ++k)
            {
                if(dp[i-1][k]+value[i][j]>dp[i][j])
                {
                    dp[i][j] = dp[i-1][k] + value[i][j];
                }
            }
        }
    }
    printf("%d\n", dp[n][m]);
    print(n, dp[n][m]);
    return 0;
}







