#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
#define LL long long
using namespace std;
long long tree[300005],lazy[300005];
void update(int node,int begin,int end,int idx,int idy,LL val)
{
    if(end<idx || idy<begin) return;
    LL diff=end-begin+1;
    if(idx<=begin && end<=idy)
    {
        tree[node]+=diff*val;
        lazy[node]+=val;
        return;
    }
    int nd=node<<1;
    int ndd=nd+1;
    int mid=(begin+end)>>1;
    update(nd ,begin,mid,idx,idy,val);
    update(ndd,mid+1,end,idx,idy,val);
    tree[node]=tree[nd]+tree[ndd]+diff*lazy[node];
}
LL query(int node,int begin,int end,int idx,int idy,LL carry)
{
    if(end<idx || idy<begin) return 0;
    if(idx<=begin && end<=idy)
    return tree[node]+carry*(end-begin+1);
    int nd=node<<1;
    int ndd=nd+1;
    int mid=(begin+end)>>1;
    return
    query(nd ,begin,mid,idx,idy,carry+lazy[node])+
    query(ndd,mid+1,end,idx,idy,carry+lazy[node]);
}
int main()
{
    #ifdef tuhin
    freopen("1164.in","r",stdin);
    #endif
    int tc=5,cs=1,N,Q,i,j,val,p;

    //scanf("%lld",&tc);
    scanf("%d",&tc);

    while(tc--)
    {
        //printf("Case %lld:\n",cs++);
        printf("Case %d:\n",cs++);
        //cout<<"Case "<<cs++<<":\n";

        //scanf("%lld%lld",&N,&Q);
        scanf("%d%d",&N,&Q);
        //cin>>N>>Q;

        memset(tree,0,sizeof tree);
        memset(lazy,0,sizeof lazy);
        for(int z=0;z<Q;z++)
        {
            //scanf("%lld",&p);
            scanf("%d",&p);
            //cin>>p;
            //for(int k=0;k<8;k++)Lquery(1,0,N-1,k,k,data,tree,lazy);
            if(p==0)
            {
                //scanf("%lld%lld%lld",&i,&j,&val);
                scanf("%d%d%d",&i,&j,&val);
                //cin>>i>>j>>val;

                update(1,0,N-1,i,j,val);
            }
            else
            {
                //scanf("%lld%lld",&i,&j);
                scanf("%d%d",&i,&j);
                //cin>>i>>j;

                //printf("%lld\n",Lquery(1,0,N-1,i,j,data,tree,lazy));
                //cout<<query(1,0,N-1,i,j,0)<<endl;
                printf("%lld\n",query(1,0,N-1,i,j,0));
            }
        }
    }
    return 0;
}
