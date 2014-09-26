#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<set>
#include<map>
#include<algorithm>
#include<stack>
#include<string.h>
using namespace std;
int main()
{
    #ifdef tuhin
    freopen("11192.in","r",stdin);
    #endif
    char ar[120];
    int n,len,i,j,p;
    while(1)
    {
        scanf("%d",&n);
        if(!n) break;
        getchar();
        gets(ar);
        len=strlen(ar);
        len=len/n;
        for(i=1;i<=n;i++)
        {
            p=len;
            for(j=len*i-1;p;j--,p--)
            putchar(ar[j]);
        }
        putchar('\n');
    }
    return 0;
}
