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
    freopen("1020.in","r",stdin);
    #endif
    int cs=1,tc,pos,winr;
    char ar[100],c;
    gets(ar);
    sscanf(ar,"%d",&tc);
    while(tc--)
    {
        gets(ar);
        sscanf(ar,"%d %c",&pos,&c);
        if(c=='A')
        {
            pos--;
            if((pos%3==0)||(pos==0)) winr=2;
            else winr=1;
        }
        else
        {
            if(pos%3==0) winr=1;
            else winr=2;
        }

        printf("Case %d: %s\n",cs++,winr==1?"Alice":"Bob");
    }
    return 0;
}
