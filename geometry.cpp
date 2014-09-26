#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<set>
#include<map>
#include<algorithm>
#include<stack>
#include<queue>
#include<math.h>
using namespace std;
#define sc(n) scanf("%d",&n);
#define sc2(n,m) scanf("%d%d",&n,&m);
#define sd2(n,m) scanf("%lf%lf",&n,&m);
typedef struct
{
    double x;
    double y;
}point;
point intersection_two_line(point a1,point a2,point a3,point a4)
{

    point p;
    double d = (a1.x-a2.x)*(a3.y-a4.y) - (a1.y-a2.y)*(a3.x-a4.x);
    if (d == 0) return p;

    p.x = ((a3.x-a4.x)*(a1.x*a2.y-a1.y*a2.x)-(a1.x-a2.x)*(a3.x*a4.y-a3.y*a4.x))/d;
    p.y = ((a3.y-a4.y)*(a1.x*a2.y-a1.y*a2.x)-(a1.y-a2.y)*(a3.x*a4.y-a3.y*a4.x))/d;

    return p;
}
int main()
{
    #ifdef tuhin
    freopen("g.in","r",stdin);
    #endif
    point a,b,c,d,p;
    a.x=0;
    a.y=0;
    b.x=2;
    b.y=3;
    c.x=0;
    c.y=3;
    d.x=2;
    d.y=0;
    p=intersection_two_line(a,b,c,d);
    printf("%f %f\n",p.x,p.y);
    return 0;
}

//typedef struct
//{
//    int x;
//    int y;
//}point;
//point intersection_two_line(point a1,point a2,point a3,point a4)
//{
//
//    point p;
//    int d = (a1.x-a2.x)*(a3.y-a4.y) - (a1.y-a2.y)*(a3.x-a4.x);
//    if (d == 0) return p;
//
//    p.x = ((a3.x-a4.x)*(a1.x*a2.y-a1.y*a2.x)-(a1.x-a2.x)*(a3.x*a4.y-a3.y*a4.x))/d;
//    p.y = ((a3.y-a4.y)*(a1.x*a2.y-a1.y*a2.x)-(a1.y-a2.y)*(a3.x*a4.y-a3.y*a4.x))/d;
//
//    return p;
//}
