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
    freopen("1042.in","r",stdin);
    #endif
    int tc,cs=1;
    scanf("%d",&tc);
    while(tc--)
    {
        int r;
        scanf("%d",&r);
        //for(int need=__builtin_popcount(r++);__builtin_popcount(r++)!=need;);
        int nm=__builtin_popcount(r);
        while(1)
        {
            r++;
            if(nm==__builtin_popcount(r)) break;
        }
        printf("Case %d: %d\n",cs++,r);
    }
    return 0;
}
