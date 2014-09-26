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
    freopen("10260.in","r",stdin);
    #endif
    char ar[30]={0,0,1,2,3,0,1,2,0,0,2,2,4,5,5,0,1,2,6,2,3,0,1,0,2,0,2};
    char st[30],t,pre;
    int i;
    while(gets(st))
    {
        pre=0;
        for(i=0;st[i];i++)
        {
            t=ar[st[i]-64];
            if((t!=0)&&(t!=pre))putchar(t+48);
            //printf("%c %d\n",st[i],t);
            pre=t;
        }
        putchar('\n');
    }
    return 0;
}
