#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<set>
#include<map>
#include<algorithm>
#include<stack>
#include<cstring>
using namespace std;
int main()
{
    #ifdef tuhin
    freopen("11835.in","r",stdin);
    #endif
    int pos[105][105],point[105],system,tmp,i,j,max,gp,pilot,prize,pp,k;
    bool flag;
    while(1)
    {
        scanf("%d%d",&gp,&pilot);
        if(!(gp||pilot)) break;
        for(i=1;i<=gp;i++)
        for(j=1;j<=pilot;j++)
        {
            scanf("%d",&tmp);
            pos[i][tmp]=j;
        }
        scanf("%d",&system);
        while(system--)
        {
            memset(point,0,sizeof point);
            max=0;
            scanf("%d",&prize);
            for(k=1;k<=prize;k++)
            {
                scanf("%d",&pp);
                for(i=1;i<=gp;i++)
                {
                    point[pos[i][k]]+=pp;
                    if(point[pos[i][k]]>max) max=point[pos[i][k]];
                }
            }
            for(flag=false,i=1;i<=pilot;i++)if(point[i]==max){if(flag)putchar(' '); printf("%d",i);flag=true;}
            putchar('\n');
        }

    }
    return 0;
}
