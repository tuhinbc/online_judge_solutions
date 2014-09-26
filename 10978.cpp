#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<cstring>

using namespace std;
int main()
{
    #ifdef tuhin
    freopen("10978.in","r",stdin);
    #endif
    bool mark[55];
    char ar[53][5],t1[50],t2[50];
    int n,len,ini;
    while(scanf("%d",&n)&&n)
    {
        memset(mark,0,sizeof mark);
        ini=0;
        for(int i=1;i<=n;i++)
        {
            scanf("%s%s",&t1,&t2);
            //printf("%s %s\n",t1,t2);
            len=strlen(t2);
            //printf("%s len %d\n",t2,len);
            ini++;
            if(ini>n)ini=1;
            for(int p=0;p<len;)
            {
                if(!mark[ini]) {p++;}

                if(ini==n) ini=1;
                else ini++;
            }
            if(ini==1)ini=n;
            else ini--;
            strcpy(ar[ini],t1);
            mark[ini]=true;
            //printf("%s len %d ini %d\n",ar[ini],len,ini);
        }
        printf("%s",ar[1]);
        for(int i=2;i<=n;i++)
        printf(" %s",ar[i]);
        putchar('\n');
    }
    return 0;
}
