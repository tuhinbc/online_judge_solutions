#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<set>
#include<map>
#include<algorithm>
#include<stack>
#include<math.h>
using namespace std;
int main()
{
    #ifdef tuhin
    freopen("10170.in","r",stdin);
    #endif
    long long a,b,c;
    //while(cin>>a&&cin>>b)
    while(scanf("%lld%lld",&a,&b)!=EOF)
    {
        a--;
        a=(a*a+a)/2;  /// may float
        a+=b;
        a*=8;
        a+=1;
        //cout<<(int)ceil((sqrt(a)-1)/2)<<endl;
        printf("%lld\n",(int)ceil((sqrt(a)-1)/2));
        //cout<<15646546545;
    }
    return 0;
}
