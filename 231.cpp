#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<set>
#include<string.h>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;
int n=0,ar[100000];
int mem[100000];
int lis(int n)
{
    if(mem[n]!=-1) return mem[n];
    int ans=1;
    for(int i=0;i<n;i++)
    {
        if(ar[i]>ar[n])
        {
            //ans=max(ans,lis(i)+1);
            if(ans<lis(i)+1)
            {
                ans=lis(i)+1;
                //lft[n]=i;
            }
        }
    }
    mem[n]=ans;
    return ans;
}
int main()
{
    #ifdef tuhin
    freopen("231.in","r",stdin);
    #endif
    int cs=1;
    while(1)
    {

        n=0;
        scanf("%d",&ar[n]);
        if(ar[n]==-1) break;
        n++;
        if(cs!=1) putchar('\n');
        while(1)
        {
            scanf("%d",&ar[n]);
            if(ar[n]==-1) break;
            n++;
        }
        ///inp ####
        memset(mem,-1,sizeof mem);  ///forgot
        ///
//        for(int i=0;i<n;i++)
//        {
//            printf("%d\n",lis(i));
//        }

        /// start
        int tmp=-1;
        for(int i=0;i<n;i++)
        {
            tmp=max(tmp,lis(i));
        }
        printf("Test #%d:\n  maximum possible interceptions: %d\n",cs++,tmp);

    }
    return 0;
}
