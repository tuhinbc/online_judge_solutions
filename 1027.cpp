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
    freopen("1027.in","r",stdin);
    #endif
    int tc,cs=1,n,t,danger,left,right;
    double prob,e,e1;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d",&n);
        //danger=1;
        e=0;
        e1=0;
        ///prob=1/n;
        left=0;
        right=0;

        for(int i=1;i<=n;i++){
            scanf("%d",&t);
            //if(t>-1) danger=0;
            if(t<0) left++;
            //if(t<0) e++;
            //e1+=abs(t);
            right+=abs(t);
        }
//        if(e>.0000001)e=1-(e/n);
//        e1=e1/n;
        printf("Case %d: ",cs++);
//        if(fabs(e-n)<.0000001) printf("inf\n");
//        else printf("%lf\n",(1/e)*e1);
        if(left==n) printf("inf\n");
        else{

            if(left==0){
                int gc=__gcd(right,n);
                printf("%d/%d\n",right/gc,n/gc);
            }
            else{
                left=n-left;
                //right*=n;
                int gc=__gcd(right,left);
                printf("%d/%d\n",right/gc,left/gc);
            }
        }

    }
    return 0;
}
