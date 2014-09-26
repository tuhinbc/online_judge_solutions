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
    freopen("12015.in","r",stdin);
    #endif
    int tc,tt[15],cs=1,max;
    char ar[15][105];
    scanf("%d",&tc);
    while(tc--)
    {
        for(int i=1;i<=10;i++)
            scanf("%s%d",&ar[i],&tt[i]);
        max=0;
        for(int i=1;i<=10;i++)
            if(tt[i]>max) max=tt[i];

        printf("Case #%d:\n",cs++);
        for(int i=1;i<=10;i++)
            if(tt[i]==max) printf("%s\n",ar[i]);
    }
    return 0;
}
