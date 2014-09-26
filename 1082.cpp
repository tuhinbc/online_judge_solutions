#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<set>
#include<map>
#include<algorithm>
#include<stack>
#include<queue>
#define s1(a) scanf("%d",&a)
#define s2(a,b) scanf("%d%d",&a,&b)
int INF = 1<<30;
int ar[100005],tree[400000];
using namespace std;
int init(int node, int strt, int end)   ///DONE
{
    if(strt == end) tree [node] = ar[strt];
    else
    {
        init(node*2,strt,(strt+end)/2);
        init(node*2+1,(strt+end)/2+1,end);
        //if(ar[tree[node*2]]<=ar[tree[node*2+1]])
        tree[node]=min(tree[node*2],tree[node*2+1]);
        //else
        //tree[node]=tree[node*2+1];
    }
}
  int query(int node, int strt, int end, int i, int j)
  {
      if( j<strt || end<i ||strt>end ) return INF;  ///one remain strt>end
      if(i<=strt && end<=j) return tree[node];
      int a=query(node*2,strt,(strt+end)/2,i,j);
      int b=query(node*2+1,(strt+end)/2+1,end,i,j);
      //printf("%d %d-\n",a,b);
      return min(a,b);
  }
int main()
{
    #ifdef tuhin
    freopen("1082.in","r",stdin);
    #endif
    int tc=1,cs,n,q,j,k;

    s1(cs);
    while(cs--)
    {
        getchar();
        s2(n,q);
        for(int i=1;i<=n;i++) s1(ar[i]);
        init(1,1,n);
        //for(int i=1;i<30;i++) printf("%d %d\n",i,tree[i]);
        printf("Case %d:\n",tc++);
        while(q--)
        {
            s2(j,k);
            printf("%d\n",query(1,1,n,j,k));
        }

    }
    return 0;
}
