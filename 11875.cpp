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
    freopen("11875.in","r",stdin);
    #endif
    int target,tc,cs=1,n,c,tmp;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d",&n);
        c=1;
        target=n/2+1;
        while(n--)
        {
            scanf("%d",&tmp);
            if(c==target) printf("Case %d: %d\n",cs++,tmp);
            c++;
        }
    }
    return 0;
}
