#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long LL;
LL ans;
//catalan
int main()
{
    int n, i, k;
    scanf("%d%d", &n, &k);
    if(k>n) ans = 0;
    else
    {
        ans = 1;
        for(i=1; i<=k; ++i)
            ans *= i;
    }
    printf("%I64d\n", ans);
    return 0;
}























