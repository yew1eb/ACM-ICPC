#include<iostream>
#include<cstring>
#include<cstdio>
#include<set>
#include<algorithm>
#include<vector>
#include<cstdlib>


#define inf 0xfffffff
#define CLR(a,b) memset((a),(b),sizeof((a)))

using namespace std;
int const nMax = 110;
typedef int LL;
typedef pair<LL,char> pij;

int du[7];
struct edge{
    bool vis;
    int u,v;
};

edge e[nMax];
vector<int> a[7];
vector<pij> st;

void dfs(int u){
    int v;
    for(int i=0;i<a[u].size();i++)if(!e[v=a[u][i]].vis){
        e[v].vis=true;
        if(u==e[v].u){
            dfs(e[v].v);
            st.push_back(pij(v+1,'+'));
        }else {
            dfs(e[v].u);
            st.push_back(pij(v+1,'-'));
        }
    }
    return ;

}

int n;
int main()
{
    CLR(du,0);
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d",&e[i].u,&e[i].v);
        e[i].vis=false;
        du[e[i].u]++;du[e[i].v]++;
        a[e[i].u].push_back(i);
        a[e[i].v].push_back(i);
    }
    int k=0;
    for(int i=0;i<=6;i++)k+=(du[i]&1);
    if((k!=0&&k!=2))puts("No solution");
    else {
        st.clear();
        int s;
        if(k){
            for(int i=0;i<=6;i++)if(du[i]%2){
                    s = i;
            }
        }else  {

            for(int i=0;i<=6;i++){
                if(du[i]){
                    s  = i;
                }
            }

        }
        dfs(s);
        if(st.size()<n)puts("No solution");
        else {
            for(int i=st.size()-1;i>=0;i--)printf("%d %c\n",st[i].first,st[i].second);
        }
    }
    return 0;
}
