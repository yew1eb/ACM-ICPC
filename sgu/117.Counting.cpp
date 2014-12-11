#include<cstdio>
#include<cstring>
using namespace std;

int pow_mod(int a, int b, int m){
    int res = 1;
    while(b)
    {
        if(b&1) res = res*a % m;
        a = a*a % m;
        b >>= 1;
    }
    return res;
}
int main()
{
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);
    int ans=  0, x;
    while(n--)
    {
        scanf("%d", &x);
        if(pow_mod(x, m, k) == 0) ans++;
    }
    printf("%d\n", ans);
    return 0;
}











