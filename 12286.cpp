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
    freopen("12286.in","r",stdin);
    #endif
    int a,b,m,n,x,y,p,q;
    while(1)
    {
        scanf("%d%d%d%d%d%d",&a,&b,&m,&n,&x,&y);
        if(a<0) break;

        if(a>m) p=a;
            else p=m;
        if(x>p) p=x;

        if(b>n) q=b;
            else q=n;
        if(y>q) q=y;

        dis=2000000000;
        for(i=0;i<=p;i++)
            for(j=0;j<=q;j++)
            {

            }
        //printf("%d %d",p,q);
    }
    return 0;
}
