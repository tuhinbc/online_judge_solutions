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
    freopen("11608.in","r",stdin);
    #endif
    int tc,cs=1,a[15],b[15],ihave,i;

    while(1)
    {
        scanf("%d",&ihave);
        if(ihave<0) break;
        for(i=1;i<13;i++) scanf("%d",&a[i]);
        for(i=1;i<13;i++) scanf("%d",&b[i]);
        printf("Case %d:\n",cs++);
        for(i=1;i<13;i++)
        {
            if(ihave>=b[i])
            {
                printf("No problem! :D\n");
                ihave-=b[i];
            }
            else printf("No problem. :(\n");
            ihave+=a[i];
        }

    }
    return 0;
}
