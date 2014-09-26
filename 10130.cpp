#include<stdio.h>
#include<iostream>
using namespace std;

int ar[1050][35],wof[1050],vof[1050],items,maxwt;
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
    freopen("10130.in","r",stdin);
    #endif
    int tc,member,power;
    maxwt=30;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d",&items);
        for(int i=1;i<=items;i++)
            scanf("%d %d",&vof[i],&wof[i]);

        knapsack();
        scanf("%d",&member);
        int total=0;
        while(member--)
        {
            scanf("%d",&power);
            //printf("%d##",ar[items][power]);
            total+=ar[items][power];
        }
        printf("%d\n",total);

    }

    return 0;
}
