//loj 1000 c++
#include<stdio.h>
int tc,cas=1;
int main()
{
    int a,b;
    scanf("%d",&tc);
    while(tc--)
    {

        scanf("%d%d",&a,&b);
        printf("Case %d: %d\n",cas++,a+b);
    }
    return 0;
}
