#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b,f,c,p;
    freopen("2.txt","r",stdin);
    scanf("%d",&n);
    while(n--)

    {
        scanf("%d%d",&a,&b);
        p=a/b;
        if(a%b==0)
        {
            f=c=p;
        }
        else
        {
            f=p;
            c=p+1;
        }

        printf("%d %d\n",f,c);
    }
    return 0;
}
