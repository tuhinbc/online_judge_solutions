#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<set>
#include<map>
#include<algorithm>
#include<stack>
#include<string.h>
using namespace std;
#define LL long long

LL tree[300000],lazy[300000],mtree[300000],mlazy[300000];

int minit(int node, int strt, int end)
{
    if(strt == end) mtree [node] = strt*100;
    else
    {
        minit(2*node,strt,(strt+end)/2);
        minit(2*node+1,(strt+end)/2+1,end);
        mtree[node]=mtree[2*node]+mtree[node*2+1];
    }
}
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
void mupdate(int node,int begin,int end,int idx,int idy,LL val)
{
    if(end<idx || idy<begin) return;
    LL diff=(begin==end?begin:(end*(end+1)-begin*(begin-1))/2);
    if(idx<=begin && end<=idy)
    {
        mtree[node]+=val*diff;         ///diff*val;
        mlazy[node]+=val;
        return;
    }
    int nd=node<<1;
    int ndd=nd+1;
    int mid=(begin+end)>>1;
    mupdate(nd ,begin,mid,idx,idy,val);
    mupdate(ndd,mid+1,end,idx,idy,val);
    mtree[node]=mtree[nd]+mtree[ndd]+diff*mlazy[node];
}
LL mquery(int node,int begin,int end,int idx,int idy,LL carry)
{
    if(end<idx || idy<begin) return 0;
    LL diff=(begin==end?begin:(end*(end+1)-begin*(begin-1))/2);
    if(idx<=begin && end<=idy)
        return mtree[node]+carry*diff;
    int nd=node<<1;
    int ndd=nd+1;
    int mid=(begin+end)>>1;
    return
    mquery(nd ,begin,mid,idx,idy,carry+mlazy[node])+
    mquery(ndd,mid+1,end,idx,idy,carry+mlazy[node]);
}
int main()
{
    #ifdef tuhin
    freopen("12501.in","r",stdin);
    #endif
    int tc,q,a,b,t,cs=1,n;
    char cmd[20];
    scanf("%d",&tc);
    while(tc--)
    {
        printf("Case %d:\n",cs++);
        scanf("%d%d",&n,&q);
        memset(tree,0,sizeof tree);
        memset(mtree,0,sizeof mtree);
        memset(lazy,0,sizeof lazy);
        memset(mlazy,0,sizeof mlazy);
        minit(1,1,n);
        update(1,1,n,1,n,100);

        while(q--)
        {
            scanf("%s",cmd);   ///test
            if(cmd[0]=='q')
            {
                scanf("%d%d",&a,&b);
                printf("%lld\n",mquery(1,1,n,a,b,0)-(a-1)*query(1,1,n,a,b,0));
                //cout<<mquery(1,1,n,a,b,0)<<endl;
                //cout<< query(1,1,n,a,b,0)<<endl;
                //printf("%d %d\n",query(a,b,MUL),query(a,b,BIT)*(a-1));
            }
            else
            {
                scanf("%d%d%d",&a,&b,&t);
                update(1,1,n,a,b,t);
                mupdate(1,1,n,a,b,t);
            }
        }
    }
    return 0;
}
