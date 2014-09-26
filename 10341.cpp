//uva 10341 c++
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<set>
#include<map>
#include<algorithm>
#include<stack>
#include<math.h>
#define EPS 1e-7
using namespace std;
double a,b,c,d,e,f;

inline double calc(double m){
    return a*exp(-m)+b*sin(m)+c*cos(m)+d*tan(m)+e*m*m+f;
}

int main()
{
    #ifdef tuhin
    freopen("10341.in","r",stdin);
    #endif

    double tt,m,n,p,h,s,left,right,mid;
    int i=1;
    while(scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f)!=EOF){

        //printf("%lf\n",calc(.5));

        left=0;right=1;
        if(calc(left)*calc(right)>0){
            printf("No solution\n");
            continue;
        }
        i=1;
        //while(left+EPS<right){
        while(i++<50){
            //printf("%lf %lf\n",left,right);
            //printf("%lf %lf\n",calc(left),calc(right));
            mid=(left+right)/2;
            if((calc(left)*calc(mid))<=0) right=mid;
            else left=mid;
        }
        printf("%.4lf\n",left);
    }
    return 0;
}
