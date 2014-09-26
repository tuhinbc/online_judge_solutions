#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;
int main()
{
    #ifdef tuhin
    freopen("10812.in","r",stdin);
    #endif
    int tc,a,b,m,n;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d%d",&a,&b);
        m=(a+b);
        n=(a-b);
        if((a>=b)&&(!(m&0x00000001)))
        printf("%d %d\n",m/2,n/2);
        else printf("impossible\n");
    }
    return 0;
}
