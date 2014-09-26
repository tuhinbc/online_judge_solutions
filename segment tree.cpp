#include<stdio.h>
#include<iostream>
//#include<algorithm>
using namespace std;
int ar[500],tree[500];
int build(int st,int end,int node)
{
    int a,b;
    if(st==end)
    {
        tree[node]=st;
        //printf("%d-%d\n",node,tree[node]);
        return 0;
    }
    a=(st+end)/2;
    b=a+1;
    build(st,a,node*2);
    build(b,end,node*2+1);
    tree[node] = ar[tree[node*2]] > ar[tree[node*2+1]]?tree[node*2+1]:tree[node*2];
}
int main()
{
    freopen("tt.txt","r",stdin);
    int len=7;
    for(int i=1;i<=len;i++)
    {
        scanf("%d",&ar[i]);
    }
    build(1,len,1);
    for(int i=1;i<25;i++)
    printf("%d %d\n",i,tree[i]);


}


//int build(int st,int end,int node)
//{
//    int a,b;
//    if(st==end)
//    {
//        tree[node]=ar[st];
//        //printf("%d-%d\n",node,tree[node]);
//        return 0;
//    }
//    a=(st+end)/2;
//    b=a+1;
//    build(st,a,node*2);
//    build(b,end,node*2+1);
//    tree[node]=tree[node*2]+tree[node*2+1];
//}
