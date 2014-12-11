#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

const int maxn = 20000;
struct node
{
    int x, y;
    bool operator < (const node& t) const
    {
        return (x<t.x)||(x==t.x&&y>t.y);
    }
};
node a[maxn];

int main()
{
    int n, i;
    int ans;
    scanf("%d", &n);
    for(i=0; i<n; ++i)
    {
        scanf("%d%d", &a[i].x, &a[i].y);
    }
    sort(a, a+n);
    ans = 0;
    int r = a[0].y;
    for(i=1; i<n; ++i)
    {
        if(r< a[i].y)
        {
            r = a[i].y;
        }
        else
        {
            ans++;
        }
    }
    printf("%d\n", ans);
    return 0;
}




















