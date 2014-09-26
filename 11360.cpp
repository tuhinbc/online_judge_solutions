#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<set>
#include<map>
#include<algorithm>
#include<stack>
#include<queue>
#define swap(a,b){(a)^=(b);(b)^=(a);(a)^=(b);}
using namespace std;
char aa[200],bb[200],pp,tt,ar[2][15][15],*p;
int tc,cs=1,size,i,j,nc,r1,r2;
bool trans;
void print()
{
    for(i=1;i<=size;i++)
    {
        //printf("%c",ar[i][1]+48);
        for(j=1;j<=size;j++)
        {
            printf("%c",ar[trans][i][j]+48);
        }
        putchar('\n');
    }
    putchar('\n');
}
int main()
{
    #ifdef tuhin
    freopen("11360.in","r",stdin);
    #endif
    sscanf(gets(aa),"%d",&tc);
    while(tc--)
    {
        sscanf(gets(aa),"%d",&size);
        trans=false;
        for(i=1;i<=size;i++)
        {
            gets(aa);
            p=aa;
            for(j=1;j<=size;j++)
            {
                sscanf(p,"%c",&pp);
                pp-=48;
                ar[trans][i][j]=pp;
                p++;
            }
        }
        sscanf(gets(aa),"%d",&nc);
        //print();
        while(nc--)
        {
            gets(aa);
            switch(aa[0])
            {
                case 'i':
                    for(i=1;i<=size;i++)
                        for(j=1;j<=size;j++)
                        if(ar[trans][i][j]==9)ar[trans][i][j]=0;
                        else ar[trans][i][j]++;
                    break;
                case 'd':
                    for(i=1;i<=size;i++)
                        for(j=1;j<=size;j++)
                        if(ar[trans][i][j]==0)ar[trans][i][j]=9;
                        else ar[trans][i][j]--;
                    break;
                case 'r':
                    r1=aa[4]-48;
                    r2=aa[6]-48;
                    for(j=1;j<=size;j++)
                        swap(ar[trans][r1][j],ar[trans][r2][j]);
                    break;
                case 'c':
                    r1=aa[4]-48;
                    r2=aa[6]-48;
                    for(j=1;j<=size;j++)
                        swap(ar[trans][j][r1],ar[trans][j][r2]);
                    break;
                case 't':
                    for(i=1;i<=size;i++)
                        for(j=1;j<=size;j++)
                        ar[!trans][j][i]=ar[trans][i][j];
                    trans=!trans;
                    break;
            }
        }
        printf("Case #%d\n",cs++);
        print();
    }
    return 0;
}
