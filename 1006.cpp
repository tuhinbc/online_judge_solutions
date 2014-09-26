#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<set>
#include<map>
#include<algorithm>
#include<stack>
#include<queue>
#include<math.h>
#include<string.h>
using namespace std;

#define sc(a) scanf("%d",&a);
#define sc2(a,b) scanf("%d%d",&a,&b);
#define sf scanf
#define loop(a) for(int lp=0;lp<a;lp++)
#define loop1(a) for(int lp=1;lp<=a;lp++)


#define pr(a) printf("%d\n",a);
#define pr2(a,b) printf("%d %d\n",a,b)
#define prs(a) printf("%s\n",a)
#define pf printf
#define pc(a) putchar(a);

#define tin int tc,cs=1;sc(tc);while(tc--)
#define tout printf("Case %d: ",cs++);
#define clr(a) memset(a,0,sizeof a);
int ar[10005];
int a, b, c, d, e, f;
int fn( int n ) {
    if(ar[n]!=0) return ar[n];

    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    int sum=( fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6) )% 10000007;
    ar[n]=sum;
    return sum;
}
int main() {
    int n, caseno = 0, cases;
    #ifdef tuhin
    freopen("1006.in","r",stdin);
    #endif
    scanf("%d", &cases);
    while( cases-- ) {
        clr(ar);
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        a%=10000007;
        b%=10000007;
        c%=10000007;
        d%=10000007;
        e%=10000007;
        f%=10000007;
        printf("Case %d: %d\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}
