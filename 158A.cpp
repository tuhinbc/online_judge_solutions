#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<set>
#include<map>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;
int main()
{
    #ifdef tuhin
    freopen("158A.in","r",stdin);
    #endif
    int n,pos,j,ar[60];
    scanf("%d%d",&n,&pos);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(j=1;j<=n;)
    {
        if(ar[j]==0) break;
        if(ar[j]<ar[pos]) break;
        else j++;
    }
    printf("%d\n",ar[j-1]==0?0:j-1);
    return 0;
}
