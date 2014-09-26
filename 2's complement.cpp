#include<stdio.h>
int func(int a,int b)
{
    int sum;
    for(sum=0;a<=b;a++)
    {
        sum+=__builtin_popcount(a);
    }
    return sum;
}

int count(int n)
{
    int total=0,narea,area=2,areapop=1,extra,zerofactor;

    for(int i=1;i<5;i++)
    {
        narea=n/area;
        total+=narea*areapop;
        extra=n%area;
        zerofactor=areapop-1;
        total+=extra-zerofactor;
        area*=2;
        areapop*=2;
    }
    return total;
}

int main()
{
    int a,b,n,sum;
    freopen("2.txt","r",stdin);
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&a,&b);
        //sum=func(a,b);
        sum=count(b);
        printf("%d\n",sum);
    }


    return 0;
}
