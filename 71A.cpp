#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main()
{
    #ifdef tuhin
    freopen("71A.in","r",stdin);
    #endif
    int n,tu;
    char ar[110];
    sscanf(gets(ar),"%d",&n);
    while(n--)
    {
        gets(ar);
        //puts(ar);
        //puts("");
        tu=strlen(ar);
        //printf("%d\n",tu);
        if(tu>10) printf("%c%d%c\n",ar[0],tu-2,ar[tu-1]);
        else puts(ar);
    }
    return 0;
}
