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
    freopen("11764.in","r",stdin);
    #endif
    int cs=1,tc,jmp,tmp,hj,lj,curr;
    scanf("%d",&tc);
    while(tc--)
    {
        hj=lj=0;
        scanf("%d",&jmp);
        jmp--;
        scanf("%d",&curr);

        while(jmp--)
        {
            scanf("%d",&tmp);
            if(tmp>curr) hj++;
            if(tmp<curr) lj++;
            curr=tmp;
        }
        printf("Case %d: %d %d\n",cs++,hj,lj);
    }
    return 0;
}
