#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

typedef long long LL;

const int maxn = 1000 + 10;
LL A, a, b, g, M, k;
LL pre, loop;

void Find(LL k)
{
    LL Map[maxn*10];
    memset(Map, 0, sizeof Map );
    Map[A] = 1;
    LL ret = A;
    pre = k;
    for(int i=2; i<=k; ++i)
    {
        ret = (a*ret*ret + b*ret + g ) % M;
        if(Map[ret])
        {
            pre = Map[ret] - 1;
            loop = i - Map[ret];
            break;
        }
        Map[ret] = i;
    }

}
int main()
{
    cin>>A>>a>>b>>g>>M>>k;
    Find(k);
    LL ans = A;
    if(k <=pre)
    {
        for(int i=1; i<=k; ++i)
            ans = (a*ans*ans + b*ans + g ) % M;
    }else {
        k -= pre; k %= loop;
        for(int i=1; i<=pre+k; ++i)
            ans = (a*ans*ans + b*ans + g ) % M;
    }
    cout<<ans<<endl;
    return 0;
}
