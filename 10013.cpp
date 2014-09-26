#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
char ar[1000010];
void input_and_ready(int size)
{
    int i,a,b;
    ar[size+1]='\0';
    for(i=1;i<=size;i++)
    {
        scanf("%d%d",&a,&b);
        ar[i]=a+b;
    }
}
void process(int n)
{
    int i;
    ar[0]=0;
    for(i=n;i>0;i--)
    {
        if(ar[i]>9) {ar[i]-=10;ar[i-1]+=1;}
        ar[i]+=48;
    }
    ar[i]+=48;
}
int main()
{
    //freopen("t.in","r",stdin);
    int tc,num;
    char *p;
    bool bl=false;
    scanf("%d",&tc);
    while(tc--)
    {
        if(bl) putchar('\n');
        getchar();
        scanf("%d",&num);
        input_and_ready(num);
        //for(int i=0;ar[i];i++)
        //printf("%d\n",ar[i]);
        process(num);
        p=ar;
        if(*p!='1') p++;
        puts(p);
        bl=true;
    }
    return 0;
}

