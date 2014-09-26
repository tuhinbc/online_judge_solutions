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
    freopen("482.in","r",stdin);
    #endif
    char dat[100000][30],t2[30];
    int tc,t1;
    char *a,*b,ar[100000],br[300000],t[100],max;
    sscanf(gets(t),"%d",&tc);
                                   ///printf("%d",tc);
    while(tc--)
    {
        getchar();               ///blank line
        gets(ar);
        gets(br);
        a=ar;
        b=br;
        max=0;
        while(sscanf(a,"%d",&t1)==1)
        {
            //printf("%d\n",tmp);
            while(*a++!=' ');
            sscanf(b,"%s",&t2);
            while(*b++!=' ');
            strcpy(dat[t1],t2);
            if(t1>max) max=t1;
        }
        for(int i=1;i<=max;i++)
        printf("%s\n",dat[i]);

        putchar('\n');

    }
    return 0;
}
