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
    freopen("11340.in","r",stdin);
    #endif
    int tc,value[260],i,exclusive,tmp,line;
    char ch,ar[11000],pp[500];
    long long total;
    double pm;

    sscanf(gets(pp),"%d",&tc);
    while(tc--)
    {

        //for(i=0;i<260;i++) value[i]=0;
        memset(value,0,sizeof value);
        sscanf(gets(pp),"%d",&exclusive);

        for(i=1;i<=exclusive;i++)
        {sscanf(gets(pp),"%c %d",&ch,&tmp);value[ch+128]=tmp;
        //printf("%c %d\n",ch,tmp);
        }
        //printf("%d\n",tc);
        sscanf(gets(pp),"%d",&line);
        total=0;
        pm=0;
        while(line--)
        {
            //total=0;
            gets(ar);
            for(i=0;ar[i];i++)
            {
                total+=value[ar[i]+128];
            }
            //pm+=(double)total/100.0;
            //printf("%d %f\n",total,pm);
        }
        printf("%.2lf$\n",(double)total/100.0);
    }
    return 0;
}
