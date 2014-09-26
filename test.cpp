#include<stdio.h>
int check(int a)
{
    char ar[10]={0};
    while(a)
    {
        ar[a%10]=1;
        a/=10;
    }
    int sum=0;
    for(int i=0;i<10;i++)
        sum+=ar[i];
    //if(sum>2) return 0;
    //return 1;
    return sum;
}
int main()
{
    int a=1,b,c=0,d;
    scanf("%d",&b);
    while(a<=b)
    {
        //printf("%d   ",a);
        if(check(a)<3)
        {
            c++;
            printf("%d\n",a);
        }

//
        else putchar('\n');
        a++;
    }
    printf("%d\n",c);
}
