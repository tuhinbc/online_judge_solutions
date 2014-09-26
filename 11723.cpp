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
    freopen("11723.in","r",stdin);
    #endif
    int a,b,cs=1;
    while(1)
    {
        scanf("%d%d",&a,&b);
        if(!(a||b)) break;
        a=(a-1)/b;
        if(a<=26) printf("Case %d: %d\n",cs++,a);
        else printf("Case %d: impossible\n",cs++);
    }
    return 0;
}
