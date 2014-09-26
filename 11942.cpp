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
    freopen("11942.in","r",stdin);
    #endif
    int tc,fst,nd,stat,t[15];
    bool inc,dec;
    scanf("%d",&tc);
    printf("Lumberjacks:\n");
    while(tc--)
    {
        inc=dec=true;
        for(int i=1;i<=10;i++)
            scanf("%d",&t[i]);
        //inc check
        for(int i=2;i<=10;i++)
            if(t[i]<t[i-1]) {inc=false;break;}

        for(int i=2;i<=10;i++)
            if(t[i]>t[i-1]) {dec=false;break;}

        printf("%s\n",inc||dec?"Ordered":"Unordered");

    }
    return 0;
}
