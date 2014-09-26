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
    freopen("591.in","r",stdin);
    #endif
    int walls,hi[105],total,meantall,rearng,cs=1;
    while(1)
    {
        scanf("%d",&walls);
        if(!walls) break;
        total=0;
        for(int i=1;i<=walls;i++)
        {
            scanf("%d",&hi[i]);
            total+=hi[i];
        }
        meantall=total/walls;
        rearng=0;
        for(int i=1;i<=walls;i++)
        {
            if(hi[i]>meantall) rearng=rearng+hi[i]-meantall;
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",cs++,rearng);

    }
    return 0;
}
