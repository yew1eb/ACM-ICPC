#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long LL;
LL c[40];
//catalan
int main()
{
    int n, i;
    scanf("%d",&n);
    c[0] = 1;
    for(i=1; i<=n; ++i) c[i] = (LL)c[i-1] * (4*i-2)/(i+1);
    printf("%I64d %d\n",c[n], n+1);
    return 0;
}























