#include<stdio.h>
int main()
{
    int n,i,sl,nofspc,minspc,tspc;
    /*freopen("414.in","r",stdin);*/
    char st[40];
    while(1)
    {
        scanf("%d",&n);
        if(!n) break;
        i=1;
        /*fflush(stdin)*/
        getchar();
        minspc=200000;
        tspc=0;
        while(i<=n)
        {
            gets(st);
            sl=0;
            nofspc=0;
            while(sl<25)
            {
                if(st[sl]==' ') nofspc++;
                sl++;
            }
            tspc+=nofspc;
            minspc=nofspc<minspc?nofspc:minspc;
            i++;
        }
        printf("%d\n",tspc-minspc*n);
    }
    return 0;
}
