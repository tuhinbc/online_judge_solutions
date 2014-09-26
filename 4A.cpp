#include<stdio.h>
int main()
{
    int a,res;
    scanf("%d",&a);
    if(a<4) res=0;
    else if(a%2==0) res=1;
    else res=0;
    printf("%s\n",res?"YES":"NO");
    return 0;
}
