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
    freopen("256.in","r",stdin);
    #endif
    int num,a,b,val,sum;
    while(scanf("%d",&num)==1)
    {
        switch(num)
        {
            case 2:
//                a=0;
//                b=0;
//                while(a<10)
//                {
//                    val=a*10+b;
//                    sum=a+b;
//                    if(val==sum*sum) printf("%.2d\n",val);
//                    b++;
//                    if(b==10) {b=0;a++;}
//                }
                printf("00\n01\n81\n");
                break;
            case 4:
//                a=0;
//                b=0;
//                while(a<100)
//                {
//                    val=a*100+b;
//                    sum=a+b;
//                    if(val==sum*sum) printf("%.4d\n",val);
//                    b++;
//                    if(b==100) {b=0;a++;}
//                }
                printf("0000\n0001\n2025\n3025\n9801\n");
                break;
            case 6:
//                a=0;
//                b=0;
//                while(a<1000)
//                {
//                    val=a*1000+b;
//                    sum=a+b;
//                    if(val==sum*sum) printf("%.6d\n",val);
//                    b++;
//                    if(b==1000) {b=0;a++;}
//                }
                printf("000000\n000001\n088209\n494209\n998001\n");
                break;
            case 8:
//                a=0;
//                b=0;
//                while(a<10000)
//                {
//                    val=a*10000+b;
//                    sum=a+b;
//                    if(val==sum*sum) printf("%.8d\n",val);
//                    b++;
//                    if(b==10000) {b=0;a++;}
//                }
                printf("00000000\n00000001\n04941729\n07441984\n24502500\n25502500\n52881984\n60481729\n99980001\n");
                break;
        }
    }
    return 0;
}
