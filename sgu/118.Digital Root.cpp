#include<cstdio>

/*
拿一个四位数abcd来说abcd = 1000a + 100b + 10c + d
                         = 9(111a + 11b + c) + (a+b+c+d)
很容易就分析出 f(n) = n % 9;
数论等式:
a*b % c = (a%c)*(b%c)
(a+b) % c = a%c + b%c
*/
int main()
{
    int k, n, x,pre, ret;
    scanf("%d", &k);
    while(k--)
    {
        scanf("%d", &n);
        pre = 1;
        ret = 0;
        while(n--)
        {
            scanf("%d",&x);
            x %= 9;
            pre = (pre * x) % 9;
            ret = ret + pre;
        }
        ret %= 9;
        if(ret==0) ret = 9;
        printf("%d\n", ret);
    }
    return 0;
}





















