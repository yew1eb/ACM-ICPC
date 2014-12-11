#include<stdio.h>

int main()
{
    long long f[50], s[50];
    f[1] = f[2] = 1;
    s[1] = 1;
    s[2] = 2;
    int i, n;
    scanf("%d", &n);
    for(i=3; i<=n; ++i)
    {
        f[i] = f[i-1] + f[i-2];
        s[i] = s[i-1] + f[i];
    }
    printf("%I64d\n", s[n]);
    return 0;
}
