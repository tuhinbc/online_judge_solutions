#include<stdio.h>
int main()
{
    int a,b,c,tc;
    scanf("%d",&tc);
    for(int i=1;i<=tc;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        printf("Case %d: %s\n",i,a<21&&b<21&&c<21?"good":"bad");
    }
    return 0;
}
