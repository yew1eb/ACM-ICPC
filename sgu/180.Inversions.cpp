#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long LL;
const int maxn = 100000;
LL c[maxn];
struct node {
    int id, v;
    bool operator <(const node& t) const
    {
        return v < t.v;
    }
} a[maxn];

int b[maxn];
int n;

int lowbit(int x)
{
    return x&(-x);
}

void update(int i, int v)
{
    for(; i>0; i -= lowbit(i)) c[i] += v;
}

LL  query(int i)
{
    LL ret = 0;
    for(; i<=n; i += lowbit(i)) ret += c[i];
    return ret;
}

int main()
{
    int i;
    scanf("%d", &n);
    for(i=1; i<=n; ++i) {
        scanf("%d", &a[i].v);
        a[i].id = i;
    }
    sort(a+1, a+1+n);
    int cnt = 0;
    a[0].v = -1;
    for(i=1; i<=n; ++i) {
        if(a[i].v != a[i-1].v) {
            a[i].v = ++cnt;
        } else {
            a[i].v = cnt;
        }
    }
    for(i=1; i<=n; ++i) b[a[i].id] = a[i].v;
    LL ans = 0;
    for(i=1; i<=n; ++i) {
        ans += query(b[i]);
         update(b[i], 1);
    }
    printf("%I64d\n", ans);
    return 0;
}

































