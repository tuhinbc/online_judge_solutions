#include<stdio.h>
#include<iostream>
using namespace std;

int ar[150][1050],wof[1050],vof[1050],items,maxwt;
inline int max(int a,int b)
{
    //printf("%d %d\n",a,b);
    return a<b?b:a;
}
int knapsack()
{
    for(int i=0;i<=items;i++)
        ar[i][0]=0;
    for(int i=0;i<=maxwt;i++)
        ar[0][i]=0;

    for (int i=1;i<=items;i++)//,print(),putchar('\n'))
      for (int wt=1;wt<=maxwt;wt++)
      {
            if (wof[i] > wt)
              ar[i][wt] = ar[i-1][wt];
            else
              ar[i][wt] = max(ar[i-1][wt] , ar[i-1][wt-wof[i]]+vof[i]);
      }

}

int main()
{
    #ifdef tuhin
    freopen("10819.in","r",stdin);
    #endif
    while(scanf("%d %d",&maxwt,&items)!=EOF)
    {
        for(int i=1,p,f;i<=items;i++)
        {
                scanf("%d %d",&p,&f);
                wof[i]=p/100;
                vof[i]=f;
        }

        maxwt=maxwt>=2000?maxwt+200:maxwt;
        maxwt=maxwt/100;
        knapsack();
        printf("%d\n",ar[items][maxwt]);
    }
    return 0;
}
