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
    freopen("11799.in","r",stdin);
    #endif
    int tc,n,p,max,cs=1;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d",&n);

        n--;
        scanf("%d",&max);

        while(n--)
        {
            scanf("%d",&p);
            if(p>max) max=p;
        }
        printf("Case %d: %d\n",cs++,max);
    }
    return 0;
}
