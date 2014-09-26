#include<stdio.h>
#include<string.h>
//#define swap(a,b) {a^=b;b^=a;a^=b;}
#define swap(a,b) {t=a;a=b;b=t;}
int t,c=0;
char ar[5];
int perm(int a,int b)
{
    if(a==b)
    {
        //puts(ar);
        c++;
    }

    else
    {
        for(int i=a;i<=b;i++)
        {
            swap(ar[a],ar[i]);
            perm(a+1,b);
            swap(ar[a],ar[i]);
        }

    }

}
int fib(int f)
{
    //putchar('0');
    c++;
    //printf("%d\n",c);
    if(f==0) return 0;
    else if(f==1) return 1;
    else return fib(f-1)+fib(f-2);
}
int ack(int m,int n)
{
    c++;
    if(m==0) return n+1;
    else if(n==0) return ack(m-1,1);
    else ack(m-1,ack(m,n-1));
}
int main()
{
    int i,j,k,len,t;

//    strcpy(ar,"123456787894");
//    len=12;
//    perm(0,len-1);
    printf("%d\n",ack(3,10));
    printf("%d\n",c);


    return 0;
}




//for(i=0;i<=3;i++)
//    {
//        swap(ar[0],ar[i]);
//        for(j=1;j<=3;j++)
//        {
//            swap(ar[1],ar[j]);
//            puts(ar);
//            swap(ar[2],ar[3]);
//            puts(ar);
//            swap(ar[2],ar[3]);
//            swap(ar[1],ar[j]);
//        }
//        swap(ar[0],ar[i]);
//    }
