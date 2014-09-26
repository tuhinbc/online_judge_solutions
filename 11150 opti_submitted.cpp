#include<stdio.h>
#define getcx getchar
#define p "t"
#define pp "inputtest.txt"

int main()
{
    freopen(p,"r",stdin);
    int a,n;
    char ch;

    while(1)
    {
          //printf("%d\n",(a*3)/2);
          n=0;
          ch=getchar();
          //printf("#%d\n",ch);
          if(ch==EOF)break;
          n=(n<<3)+(n<<1)+ch-48;
          while(1)
          {
              ch=getchar();
              if(ch<48)break;
              n=(n<<3)+(n<<1)+ch-48;

          }
          printf("%d\n",(n*3)/2);

    }

return 0;
}
