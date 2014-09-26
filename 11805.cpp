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
    freopen("11805.in","r",stdin);
    #endif
    int tc,cs=1,p,t,n,s;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d%d%d",&n,&s,&p);
        t=s+p;
        if(t%n==0) t=n;
        else if(t>n) t%=n;
        //if(n==1) t=1;
        printf("Case %d: %d\n",cs++,t);
    }
    return 0;
}
