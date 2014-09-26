#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<set>
#include<map>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;
//int comp(const int *a,const int *b)
//{
//    return *a<*b?1:-1;
//}
int comp(const int * a,const int * b)
{
  if (*a==*b)
    return 0;
  else
    if (*a < *b)
        return -1;
     else
      return 1;
}
int main()
{
    #ifdef tuhin
    freopen("11727.in","r",stdin);
    #endif
    //
    vector<int> ar;
    int a[3],tc,cs=1;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d%d%d",&a[0],&a[1],&a[2]);
        ar.push_back(a[0]);
        ar.push_back(a[1]);
        ar.push_back(a[2]);
        sort(ar.begin(),ar.end());
        printf("Case %d: %d\n",cs++,ar[1]);
        ar.clear();

    }
    return 0;
}
