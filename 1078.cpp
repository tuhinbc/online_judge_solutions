#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<set>
#include<map>
#include<algorithm>
#include<stack>
#include<queue>
#include<string.h>
using namespace std;
int main()
{
    #ifdef tuhin
    freopen("1078.in","r",stdin);
    #endif
    int cs=1,tc,pos,winr;
    char c[10],ar[100];
    c[1]='\0';
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d %c",&pos,&c[0]);
        ar[0]='\0';
        int temp,lvl=0;
        while(1)
        {
            strcat(ar,c);
            temp=atoi(ar);
            lvl++;
            if(temp%pos==0) break;
        }

        printf("Case %d: %d\n",cs++,lvl);
    }
    return 0;
}
