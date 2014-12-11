#include<cstdio>


typedef long long LL;
const LL N = 0x7fffffffff;

LL calc(LL x)
{
    LL ret = 0;
    while(x)
    {
        ret += x/5;
        x /= 5;
    }
    return ret;
}
int main()
{
    LL Q;
    scanf("%I64d", &Q);
    if(Q==0) //自然数不包括零
    {
        printf("1\n");
        return 0;
    }
    LL l = 0, r = N, mid;
    while(l<r)
    {
        mid = (l+r)/2;
        if(calc(mid)<Q) l = mid+1;
        else r = mid;
    }
    if(calc(l)==Q) printf("%I64d\n", l);
    else printf("No solution\n");
    return 0;
}
