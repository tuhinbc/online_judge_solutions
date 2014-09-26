//loj c++ 1112
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define lsone(p) (p&(-p))
using namespace std;

int ft_in(int ar[],int n,int v,int len)
{
    n++; /// 0 ignore
    for(;n<=len;n+=lsone(n))
    ar[n]+=v;//printf("%d####",ar[n]);
}
int ft_rsq(int ar[],int b)
{
    int sum=0;
    b++;
    for(;b;b-=lsone(b))
    sum+=ar[b];
    return sum;
}
int ft_rsq(int ar[],int a,int b)
{
    return ft_rsq(ar,b)-(a==0?0:ft_rsq(ar,a-1));
}
int main()
{
    #ifdef tuhin
    freopen("1112.in","r",stdin);
    #endif
    int tc,cs=1,n,q,ar[100500],i,t,num,am,p;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d%d",&n,&q);

        memset(ar,0,sizeof(ar));
                                                ///0 ignore
        for(i=0;i<n;i++)
        scanf("%d",&num),ft_in(ar,i,num,n);

        ///building
        //create_ft(ar,n);

        printf("Case %d:\n",cs++);

        for(i=0;i<q;i++)
        {
            scanf("%d",&t);
            switch(t)
            {
                case 1:
                    scanf("%d",&num);
                    am=ft_rsq(ar,num,num);
                    printf("%d\n",am);
                    ft_in(ar,num,-am,n);
                    //ar[num]=0;
                    break;
                case 2:
                    scanf("%d%d",&num,&am);
                    ft_in(ar,num,am,n);
                    break;
                case 3:
                    scanf("%d%d",&num,&p);
                    printf("%d\n",ft_rsq(ar,num,p));
                    break;
            }
        }
    }
    return 0;
}
