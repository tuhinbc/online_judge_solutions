#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int p[1000000];
char ar[1000000];
void build()
{
    int i=1,a,b;
    p[0]=0;
    a=1;
    while(ar[i])
    {
        if(ar[i]!=ar[i-1]) p[a++]=i;
        i++;
    }
    p[a]=100000000;
}
void print()
{
    for(int i=0;i<50;i++)
    cout<<p[i]<<endl;
}
int check(int a,int b)
{
    int i=0;
    for(;p[i+1]<=a;i++);


    if(b<p[i+1]) return 0;
    else return 1;
}
int main()
{
    //freopen("t.in","r",stdin);
    int test,a,b,m,c=1;
    char tmp[20];
    while(gets(ar))
    {
        gets(tmp);
        build();
        //print();
        sscanf(tmp,"%d",&test);
        printf("Case %d:\n",c++);
        while(test--)
        {
            gets(tmp);
            sscanf(tmp,"%d%d",&a,&b);
            //printf("%d %d\n",a,b);
            if(b<a){m=a;a=b;b=m;}

            if(check(a,b))printf("No\n");
            else printf("Yes\n");
        }
    }
    return 0;
}
