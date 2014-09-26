#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<set>
#include<map>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;
unsigned int calc(unsigned int n)
{

    unsigned int total=0,div=100,mul=10,t,d;
    if(n==0) return 1;
    else total=1;
    total+=n/10;
    for(int i=2;i<=9;i++){
        if(div>n) break;

        t=n/div;
        if(t) total+=(t-1)*mul;

        d=n-t*div;
        if(d>=mul-1)total+=mul;
        else total+=d+1;

        div*=10;
        mul*=10;
    }
    return total;
}
int main()
{
    #ifdef tuhin
    freopen("10.in","r",stdin);
    #endif
//    for(int i=1;i<1111;i++){
//        printf("%5d\n",i);
//    }
    char ar[100];
    unsigned int tc,cs=1,n,a,b,t;
    scanf("%u",&tc);
    while(tc--){
        scanf("%u%u",&a,&b);

//        if((a==0)&&(b==0)){
//            printf("Case %u: %u\n",cs++,0);continue;
//        }
        //if(a!=0)a=calc(a-1);
        if(a==0) t=0;
        else{
            t=-calc(a-1);
        }

        b=calc(b);

        //printf("%u %u\n",a,b);
        printf("Case %u: %u\n",cs++,b+t);
    }
    return 0;
}
