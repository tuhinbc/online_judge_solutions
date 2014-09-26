#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<set>
#include<map>
#include<algorithm>
#include<stack>
#include<math.h>
using namespace std;
#define PI acos(-1.0)
int main()
{
    #ifdef tuhin
    freopen("145268.in","r",stdin);
    #endif
    int cs=1,tc,n,a,b,r;
    double pp,aa,kk,tt,mm,tri,unin,intersect;

    aa=sqrt(3)/4;
    tt=PI/6-aa;

    scanf("%d",&tc);
    while(tc--){
        scanf("%d",&r);

        mm=tt*r*r;

        tri=aa*r*r;

        intersect=tri+3*mm;

        unin=3*PI*r*r;

        unin=unin-5*tri-9*mm;

        //cout.precision(3);
        //cout<<"Case "<<cs++<<": "<<intersect<<" "<<unin<<endl;


        printf("Case %d: %.2llf %.2llf\n",cs++,intersect+1e-9,unin+1e-9);           ///output ei vabe dile TLE . kijonno bujlamna .
        printf("Case %d: %.2llf ",cs++,intersect+1e-9);printf("%.2llf\n",unin+1e-9);
    }
    return 0;
}
