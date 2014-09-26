//loj 1001 c++
#include<stdio.h>
int main()
{
    int a,b,tc;
    scanf("%d",&tc);
    for(int i=1;i<=tc;i++)
    {
        scanf("%d",&a);
        b=a>10?a-10:0;
        a-=b;
        printf("%d %d\n",a,b);
    }
    return 0;
}
