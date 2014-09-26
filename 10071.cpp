#include <stdio.h>

int main()
{
    int a, b;
    char ch;
    freopen("t","r",stdin);
    while(1)
    {
        a=0;b=0;
        ch=getchar();
        if(ch==EOF)break;
        a=(a<<3)+(a<<1)+ch-48;
        while(1)
        {
              ch=getchar();
              if(ch<48)break;
              a=(a<<3)+(a<<1)+ch-48;
        }
        while(1)
        {
              ch=getchar();
              if(ch<48)break;
              b=(b<<3)+(b<<1)+ch-48;
        }
        printf("%d\n",2*a*b);
        /*printf("%d %d\n",a,b);
        */
    }
      return 0;
}
