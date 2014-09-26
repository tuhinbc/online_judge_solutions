#include<stdio.h>
int main()
{
    int sp,n,ampl,freq,p;
    //freopen("488.in","r",stdin);
    scanf("%d",&n);
    while(n--)
    {
        getchar();
        scanf("%d %d",&ampl,&freq);
        while(freq--)
        {
            for(sp=1;sp<=ampl;sp++)
            {
                p=sp;
                while(p--)
                printf("%d",sp);

                putchar('\n');

            }
            for(sp-=2;sp;sp--)
            {
                p=sp;
                while(p--)
                printf("%d",sp);

                putchar('\n');
            }
            if(freq) putchar('\n');
        }
        if(n) putchar('\n');
    }
    return 0;
}
