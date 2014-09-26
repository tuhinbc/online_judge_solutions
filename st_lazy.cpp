#include <algorithm>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

using namespace std;
#define max 1000000
int INF = 1<<30;
//int len=(int)(2*pow(2.0, floor((log(max)/log(2.0)) + 1)));
// len  4 times bigger than data
int tree[20000],data[5000];
int lazy[20000];

int propagate(int node ,int range1 ,int range2)
{
    if(range1==range2)
    {
        tree[node]+=lazy[node];                /// add or replace
        lazy[node]=0;
    }
    else
    {
        tree[node]+=((range2-range1+1)*lazy[node]);  /// add or replace
        //tree[node]+=500;
        //printf("%d ",node);
        lazy[node*2]+=lazy[node];                   ///
        lazy[node*2+1]+=lazy[node];                ///
        lazy[node]=0;                             ///
    }
}
int init(int node, int range1, int range2, int data[], int tree[])   ///DONE
{
    if(range1 == range2) tree [node] = data[range1];
    else
    {
        init(2*node,range1,(range1+range2)/2,data,tree);
        init(2*node+1,(range1+range2)/2+1,range2,data,tree);
        tree[node]=tree[2*node]+tree[node*2+1];
        //printf("%d %d\n",node,tree[node]);
    }
}

int Lquery(int node, int range1, int range2, int i, int j, int data[], int tree[],int lazy[])
{
    if( j<range1 || range2<i ||range1>range2 ) return 0;  ///one remain range1>range2
    if(lazy[node]) propagate(node,range1,range2);
    if(i<=range1 && range2<=j) return tree[node];
    int a=Lquery(2*node,range1,(range1+range2)/2,i,j,data,tree,lazy);
    int b=Lquery(2*node+1,(range1+range2)/2+1,range2,i,j,data,tree,lazy);
    return a+b;
}
void Lupdate( int node,int range1,int range2,int idx,int idy,int val ,int data[],int tree[],int lazy[])
{
    if( idy<range1 || range2<idx ||range1>range2 ) return;


    if( idx<=range1 && range2<=idy )
    {
       lazy[node] += val;
       propagate(node,range1,range2);
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

    memset(lazy,0,sizeof lazy);
    memset(tree,0,sizeof tree);
    //memset(data,1,sizeof data);
    //for(int i=0;i<1000;i++) data[i]=1;
    int n=9;
    //init(1,0,999,data,tree);
    //for(int i=0;i<100;i++) printf("%d\n",tree[i]);
    Lupdate(1,0,n-1,1,4,39,data,tree,lazy);
    Lupdate(1,0,n-1,4,8,5,data,tree,lazy);
//    Lupdate(1,0,n-1,3,7,4,data,tree,lazy);
//    Lupdate(1,0,n-1,3,4,10,data,tree,lazy);
//    Lupdate(1,0,n-1,2,4,1,data,tree,lazy);
//    Lupdate(1,0,n-1,0,0,27,data,tree,lazy);

    printf("%d\n\n",Lquery(1,0,n-1,3,8,data,tree,lazy));

    for(int i=0;i<18;i++) printf("%3d %3d   %3d\n",i,tree[i],lazy[i]);
    //for(int i=0;i<16;i++) printf("lazy %2d  %d\n",i,lazy[i]);
    //printf("%d==\n",query(1,0,6,0,6,data,tree));
    return 0;
}
