///loj c++ 1030
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<set>
#include<map>
#include<algorithm>
#include<stack>
#include<string.h>
using namespace std;
int mx;
double ar[105],prob[101];
double sumof(int i,int j)
{
    double sum=0;
    while(i<=j)
    {
        sum+=prob[i++];
    }
    return sum;
}
double calc_prob(int i)
{
    int tot=0;;
    double sum=0;
//    if((i+6)<=mx)
//    {
//        tot=6;
//        sum=sumof(i+1,i+6);
//        return sum/tot+ar[i];
//    }
//    else
//    {
//        tot=mx-i;
//        if(tot)
//        {
//            sum=sumof(i+1,i+tot);
//            return sum/tot+ar[i];
//        }
//        else return ar[i];
//    }
    for(int j=i+1;j<=mx;j++)
    {
        sum+=prob[j];
        tot++;
        if (tot==6) break;
    }
    if(sum!=0)
    sum/=tot;
    return ar[i]+sum;
}
int main()
{
    #ifdef tuhin
    freopen("1030.in","r",stdin);
    #endif
    int tc,cs=1,n;
    scanf("%d",&tc);
    while(tc--)
    {
        memset(prob,0,sizeof prob);
        getchar();
        scanf("%d",&n);
        mx=n;
        for(int i=1;i<=n;i++) scanf("%lf",&ar[i]);

        //for(;;);

        //if(n==1)printf("Case %d: %lf\n",cs++,ar[n]);
        //else
        {
            //printf("%d\n",n);
            prob[n]=ar[n];
            for(int i=n-1;i>0;i--)
            {
                prob[i]=calc_prob(i);
                //printf("%d %lf\n",i,prob[i]);
            }
            printf("Case %d: %lf\n",cs++,prob[1]);
        }
    }
    return 0;
}
