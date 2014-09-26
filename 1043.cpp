//loj 1043 c++
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<set>
#include<map>
#include<algorithm>
#include<stack>
#include<math.h>
using namespace std;
double ab,ac,bc,lft,rit,mid,r;

double ratioo(double ad){
    return (ab*ab)/(ad*ad);
}

int main()
{
    #ifdef tuhin
    freopen("1043.in","r",stdin);
    #endif

    int tc,cs=1,i;
    scanf("%d",&tc);
    while(tc--){
        scanf("%lf%lf%lf%lf",&ab,&ac,&bc,&r);
        r=(r+1)/r;

        i=1;
        lft=0;rit=ab;
        while(i++<100){
            mid=(lft+rit)/2;
            if(ratioo(mid)>r) lft=mid;
            else rit=mid;
        }
        printf("Case %d: %.12lf\n",cs++,mid);

    }
    return 0;
}
