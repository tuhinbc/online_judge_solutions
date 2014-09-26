#include<stdio.h>
int main()
{
    int a,b,s,flag;
    while(scanf("%d%d",&a,&b))
    {
          s=a;
          flag=0;
          while(s<=b)
          {
                     if(flag) printf(" ");    
                     if(s%2==0) printf("%d",s,flag++);
                     s++;
          }
          putchar('\n');
    }
}
