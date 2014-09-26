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
    freopen("272.in","r",stdin);
    freopen("272.out","w",stdout);
    #endif
    bool fl=true;
    char ar[1000],*pp;
    while(gets(ar))
    {
        pp=ar;
        while(*pp)
        {
            if(*pp=='"')
            {
                if(fl)
                {
                    putchar('`');
                    putchar('`');
                }
                else
                {
                    putchar('\'');
                    putchar('\'');
                }
                fl=!fl;
            }
            else putchar(*pp);
            pp++;
        }
        putchar('\n');
    }
    return 0;
}
