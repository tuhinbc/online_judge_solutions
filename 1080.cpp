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
int ar[100005],tree[400000],inv[400000],ineed=5;
int noneed=!noneed;
int init(int node, int strt, int end, int ar[], int tree[])   ///DONE
{
    if(strt == end) tree [node] = ar[strt];
    else
    {
        init(2*node,strt,(strt+end)/2,ar,tree);
        init(2*node+1,(strt+end)/2+1,end,ar,tree);
        //tree[node]=tree[2*node]+tree[node*2+1];
        tree[node]=noneed;
    }
}
int query(int node, int strt, int end, int idx, int ar[], int tree[])
{
    if( idx < strt || idx > end || strt > end )return 0;
    if( strt == end )
    {
       tree[node] = val;
        return;
    }
    if( j<strt || end<i ||strt>end ) return 0;  ///one remain strt>end
    if(i<=strt && end<=j) return tree[node];
    int a=query(2*node,strt,(strt+end)/2,i,j,ar,tree);
    int b=query(2*node+1,(strt+end)/2+1,end,i,j,ar,tree);
    return a+b;
}
void update( int node ,int strt ,int end ,int i ,int j, int ar[], int tree[])
{
    if( j<strt || end<i ||strt>end ) return 0;
    if( strt == end )
    {
       tree[node] = !tree[node];
        return 0;
    }
    if(i<=strt && end<=j)
    {
        tree[node] = !tree[node];
        return 0;
    }
    update( 2*node,strt,(strt+end)/2,i,j,ar,tree );
    update( 2*node+1,(strt+end)/2+1,end,i,j,ar,tree );
    tree[ node ] = tree[2*node]+tree[2*node+1] ;
}
int main()
{
    #ifdef tuhin
    freopen("1080.in","r",stdin);
    #endif
    int tc,cs=1,n=0,q,i,j,idx;
    char c,tu[50];
    scanf("%d",&tc);
    getchar();
    while(tc--)
    {
        memset(inv,0,sizeof(inv));
        n=0;
        //printf("Case %d:\n",cs++);
        while(1)
        {
            c=getchar();
            if(c=='\n') break;
            ar[++n]=(int)c-48;
        }
        printf("%d",n);
        init(1,1,n,ar,tree);
        scanf("%d",&q);
        getchar();
        while(q--)
        {
            gets(tu);
            if(tu[0]=='I')
            {
                sscanf(tu,"%c %d %d",&c,&i,&j);
                update(1,1,n,ar,tree);
            }
            else
            {
                sscanf(tu,"%c %d",&c,&idx);
            }
        }

    }

    return 0;
}
