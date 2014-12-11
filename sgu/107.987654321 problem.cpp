#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
/*
    题意：输入一个数字N，问你存在多少个平方后最后9位为“987654321”的N位数。
    N<9,无解。
    N==9,经计算有8个。
    N>9,易知高于9位以后的数字对结果没有影响,此时个数为 8*9* 10^(n-10) //最高位不能为0。
*/
int main()
{
    int i, n;
    scanf("%d", &n);
    if(n<9)
        printf("0\n");
    else if(n==9)
        printf("8\n");
    else {
        printf("72");
        for(i=1; i<n-9; ++i)
            printf("0");
        printf("\n");
    }
    return 0;
}











