#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<set>
#include<map>
#include<algorithm>
#include<stack>
#include<queue>
#include<math.h>
#define pi 2 * acos (0.0)
using namespace std;
int main()
{
    #ifdef tuhin
    freopen("1022.in","r",stdin);
    #endif
    int tc,cs=1;
    scanf("%d",&tc);
    while(tc--)
    {
        double r,R,ar;
        scanf("%lf",&r);
        R=r+r;
        R=R*R;
        ar=pi*r*r;
        printf("Case %d: %.2f\n",cs++,R-ar+pow(10,-9));
    }
    return 0;
}
