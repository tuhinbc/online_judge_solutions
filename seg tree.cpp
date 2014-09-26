
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
// len  4 times bigger than ar
int tree[20000],ar[20]={0,1,5,6,15,4,61,4,1,14,1,6,561,546,56,1546,564,156,654};

    int init(int node, int strt, int end, int data[], int tree[])   ///DONE
    {
        if(strt == end) tree [node] = data[strt];
        else
        {
            init(node*2,strt,(strt+end)/2,data,tree);
            init(node*2+1,(strt+end)/2+1,end,data,tree);
            //if(ar[tree[node*2]]<=ar[tree[node*2+1]])
            tree[node]=min(tree[node*2],tree[node*2+1]);
            //else
              //tree[node]=tree[node*2+1];
        }
    }
                       ///DONE
    void update( int node,int strt,int end,int idx,int val ,int ar[],int tree[])
    {
    if( idx < strt || idx > end || strt > end )
        return;
    if( strt == end )
    {
       tree[node] = val;
        return;
    }
    update( node*2,strt,(strt+end)/2,idx,val,ar,tree );
    update( node*2+1,(strt+end)/2+1,end,idx,val,ar,tree );
    tree[ node ] = min( tree[node*2],tree[node*2+1] );
    }

int query(int node, int strt, int end, int i, int j,int ar[],int tree[])
  {
      int p1, p2;

      if (i > end || j < strt)
          return -1;

      if (strt >= i && end <= j)
          return tree[node];

      p1 = query(2 * node, strt, (strt + end) / 2, i, j,ar,tree);
      p2 = query(2 * node + 1, (strt + end) / 2 + 1, end, i, j,ar,tree);

      if (p1 == -1)
          return tree[node] = p2;
      if (p2 == -1)
          return tree[node] = p1;
      if (ar[p1] <= ar[p2])
          return tree[node] = p1;
      return tree[node] = p2;
  }

  int query2(int node,int strt,int end,int i,int j,int ar[],int tree[])
  {
          if(i<=strt && end<=j) ////strt>=i
               return tree[node];
          else
          {
               int mid = (strt+end)/2;
               int res = 8;
               if (mid>=i && strt<=j)
                    res = min(res,query2(2*node,strt,mid,i,j,ar,tree));
               if (end>=i && mid+1<=j)
                    res = min(res,query2(2*node+1,mid+1,end,i,j,ar,tree));
               return res;
          }
  }
  int query_(int node, int strt, int end, int i, int j, int ar[], int tree[])
  {
      if( j<strt || end<i ||strt>end ) return INF;  ///one remain strt>end
      if(i<=strt && end<=j) return tree[node];
      int a=query_(node*2,strt,(strt+end)/2,i,j,ar,tree);
      int b=query_(node*2+1,(strt+end)/2+1,end,i,j,ar,tree);
      return min(a,b);
  }

    int main()
    {
        init(1,0,6,ar,tree);
        for(int i=0;i<17;i++)
          printf("%d %d\n",i,tree[i]);

        printf("%d\n",query_(1,0,6,2,6,ar,tree));
        update(1,0,6,4,1,ar,tree);
        printf("%d\n",query_(1,0,6,2,6,ar,tree));

        //getchar();
        return 0;
    }
