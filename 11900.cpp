#include<stdio.h>
int main()
{
    int s,t,i=1,n,d,q,ii,w[40],totalw,totaln;
    //freopen("min.txt","r",stdin);
    scanf("%d",&t);
    while(i<=t)
    {
        ii=1;
        scanf("%d %d %d",&n,&d,&q);
        while(ii<=n)
        {
            scanf("%d",&w[ii]);
            ii++;
        }
        totalw=0;
        ii=1;
        totaln=0;
        s=d<n?d:n;
        while(ii<=s)
        {
            totalw+=w[ii];
            if(totalw>q) break;
            totaln++;
            ii++;
        }
        printf("Case %d: %d\n",i,totaln);
        i++;
    }
    return 0;
}
