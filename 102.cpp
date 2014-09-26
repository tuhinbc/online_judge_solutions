#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<set>
#include<map>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;
int main()
{
    #ifdef tuhin
    freopen("102.in","r",stdin);
    #endif
    string ar[8];
    int val[10],b1,b2,b3,g1,g2,g3,c1,c2,c3,t,min;
    ar[1]="BCG";
    ar[2]="BGC";
    ar[3]="CBG";
    ar[4]="CGB";
    ar[5]="GBC";
    ar[6]="GCB";
    while(scanf("%d%d%d%d%d%d%d%d%d",&b1,&g1,&c1,&b2,&g2,&c2,&b3,&g3,&c3)==9)
    {
        for(int i=1;i<9;i++) val[i]=0;
        val[1]=b2+b3+c1+c3+g1+g2;
        val[2]=b2+b3+g1+g3+c1+c2;
        val[3]=c2+c3+b1+b3+g1+g2;
        val[4]=c2+c3+g1+g3+b1+b2;
        val[5]=g2+g3+b1+b3+c1+c2;
        val[6]=g2+g3+c1+c3+b1+b2;
        min=val[1];
        t=1;
        for(int i=2;i<7;i++)
        {
            if(val[i]<min) {min=val[i];t=i;}
        }
        printf("%s %d\n",ar[t].c_str(),min);
    }
    return 0;
}
