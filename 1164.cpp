#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<set>
#include<map>
#include<algorithm>
#include<stack>
#include<queue>
#include<string.h>
using namespace std;
long long int propagate(long long int node ,long long int range1 ,long long int range2,long long int tree[],long long int lazy[])
{
    if(range1==range2)
    {
        tree[node]+=lazy[node];                /// add or replace
        lazy[node]=0;
    }
    else
    {
        tree[node]+=(range2-range1+1)*lazy[node];  /// add or replace
        lazy[node*2]+=lazy[node];                   ///  ||
        lazy[node*2+1]+=lazy[node];                 ///  ||
        lazy[node]=0;
    }
}
long long int Lquery(long long int node, long long int range1, long long int range2, long long int i, long long int j, long long int data[], long long int tree[],long long int lazy[])
{
    if( j<range1 || range2<i ||range1>range2 ) return 0;  ///one remain range1>range2
    if(lazy[node]) propagate(node,range1,range2,tree,lazy);
    if(i<=range1 && range2<=j) return tree[node];
    long long int a=Lquery(2*node,range1,(range1+range2)/2,i,j,data,tree,lazy);
    long long int b=Lquery(2*node+1,(range1+range2)/2+1,range2,i,j,data,tree,lazy);
    return a+b;
}
//void Lupdate( long long int node,long long int range1,long long int range2,long long int idx,long long int idy,long long int val ,long long int data[],long long int tree[],long long int lazy[])
//{
//    if( idy<range1 || range2<idx ||range1>range2 ) return;
//    if(lazy[node]) propagate(node,range1,range2,tree,lazy);
//    if( idx<=range1 && range2<=idy )
//    {
//       lazy[node] += val;
//        return;
//    }
//    if( range1<=idx && idy<=range2 ) tree[node]+=(idy-idx+1)*val;
//    else
//    {
//        int d1=range1>idx?range1:idx;
//        int d2=range2<idy?range2:idy;
//        tree[node]+=(d2-d1+1)*val;
//        //printf("%d --\n",node);
//    }
//    Lupdate( 2*node,range1,(range1+range2)/2,idx,idy,val,data,tree,lazy );
//    Lupdate( 2*node+1,(range1+range2)/2+1,range2,idx,idy,val,data,tree,lazy );
//    //tree[ node ] = tree[2*node]+tree[2*node+1] ;
//}
void Lupdate( long long int node,long long int range1,long long int range2,long long int idx,long long int idy,long long int val ,long long int data[],long long int tree[],long long int lazy[])
{
    if( idy<range1 || range2<idx ||range1>range2 ) return;

    if( idx<=range1 && range2<=idy )
    {
       lazy[node] += val;
       propagate(node,range1,range2,tree,lazy);
        return;
    }
//    if( range1<=idx && idy<=range2 ) tree[node]+=(idy-idx+1)*val;
//    else
//    {
//        int d1=range1>idx?range1:idx;
//        int d2=range2<idy?range2:idy;
//        tree[node]+=(d2-d1+1)*val;
//        printf("%d --\n",node);
//    }

    Lupdate( 2*node,range1,(range1+range2)/2,idx,idy,val,data,tree,lazy );
    Lupdate( 2*node+1,(range1+range2)/2+1,range2,idx,idy,val,data,tree,lazy );
    if(lazy[2*node]){tree[2*node]+=lazy[2*node];lazy[2*node]=0;}
    if(lazy[2*node+1]){tree[2*node+1]+=lazy[2*node+1];lazy[2*node+1]=0;}
    tree[ node ] = tree[2*node]+tree[2*node+1] ;
}
int main()
{
    #ifdef tuhin
    freopen("1164.in","r",stdin);
    #endif
    long tc,cs=1,data[1],tree[400020],lazy[400020],N,Q,i,j,val,p;
    //long long int tc,cs=1,data[1],tree[100020],lazy[100020],N,Q,i,j,val,p;

    //scanf("%lld",&tc);
    scanf("%I64d",&tc);
    //cin>>tc;

    while(tc--)
    {
        //printf("Case %lld:\n",cs++);
        printf("Case %I64d:\n",cs++);
        //cout<<"Case "<<cs++<<":\n";

        //scanf("%lld%lld",&N,&Q);
        scanf("%I64d%I64d",&N,&Q);
        //cin>>N>>Q;

        memset(tree,0,sizeof tree);
        memset(lazy,0,sizeof lazy);
        for(long long int z=0;z<Q;z++)
        {
            //scanf("%lld",&p);
            scanf("%I64d",&p);
            //cin>>p;
            for(int k=0;k<8;k++)Lquery(1,0,N-1,k,k,data,tree,lazy);
            if(p==0)
            {
                //scanf("%lld%lld%lld",&i,&j,&val);
                scanf("%I64d%I64d%I64d",&i,&j,&val);
                //cin>>i>>j>>val;

                Lupdate(1,0,N-1,i,j,val,data,tree,lazy);
            }
            else
            {
                //scanf("%lld%lld",&i,&j);
                scanf("%I64d%I64d",&i,&j);
                //cin>>i>>j;

                //printf("%lld\n",Lquery(1,0,N-1,i,j,data,tree,lazy));
                cout<<Lquery(1,0,N-1,i,j,data,tree,lazy)<<endl;
            }
        }
        //for(int i=0;i<26;i++) printf("%3d %3d   %3d\n",i,tree[i],lazy[i]);
        //for(int k=0;k<8;k++)printf("%lld--\n",Lquery(1,0,N-1,k,k,data,tree,lazy));

    }
    return 0;
}
