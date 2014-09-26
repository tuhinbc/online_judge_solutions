#include <set>
#include <map>
#include <list>
#include <cmath>
#include <deque>
#include <queue>
#include <stack>
#include <cstdio>
#include <cctype>
#include <string>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;
#define LL long long
LL tree[300000],lazy[300000],mtree[300000],mlazy[300000];
int minit(int node, int strt, int end)
{
    if(strt == end) mtree [node] = strt*10;         ///##############
    else
    {
        minit(2*node,strt,(strt+end)/2);
        minit(2*node+1,(strt+end)/2+1,end);
        mtree[node]=mtree[2*node]+mtree[node*2+1];
    }
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
    memset(mtree,0,sizeof mtree);
    memset(mlazy,0,sizeof mlazy);
    minit(1,1,5);
    mupdate(1,1,5,1,5,1);
    //cout<<mtree[1]<<endl;
    cout<<mquery(1,1,5,1,5,0)<<endl;
    //for(int i=1;i<15;i++)
    //printf("%d %lld %lld\n",i,mtree[i],mlazy[i]);
    return 0;
}
