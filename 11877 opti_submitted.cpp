#include<stdio.h>

int main()
{
    int a,n;
    char ch;

    while(1)
    {
          n=0;
          while(1)
          {
              ch=getchar();
              if(ch<48)break;
              n=(n<<3)+(n<<1)+ch-48;
          }
          if(!n) break;
          printf("%d\n",(int)(n/2));

    }
return 0;
}
