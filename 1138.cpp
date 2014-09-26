////loj 1138 c++
//#include<stdio.h>
//#include<iostream>
//#include<stdlib.h>
//#include<set>
//#include<map>
//#include<algorithm>
//#include<stack>
//#include<math.h>
//using namespace std;
//int nofzero(double n)
//{
//    int t=0;
//
//    while(n>4){
//        n=n/5;
//        t+=floor(n);
//    }
//    return t;
//}
//int main()
//{
//    #ifdef tuhin
//    freopen("1138.in","r",stdin);
//    #endif
//    int tc,cs=1,t,lo,hi,mid;
//    scanf("%d",&tc);
//    while(tc--){
//        scanf("%d",&t);
//        lo=1;
//        hi=440000000;
//        for(;hi-lo>=1;){
//            mid=(hi+lo)/2;
//            if(nofzero(mid)==t) break;
//            if(nofzero(mid)>t) hi=mid-1;
//            else lo=mid+1;
//        }
////        for(int i=1;i<100;i++){
////            printf("%d: %d\n",i,nofzero(i));
////        }
//        for(;;){
//            if(nofzero(mid-1)==t) mid--;
//            else break;
//        }
//
//        if(nofzero(mid)==t)
//            printf("Case %d: %d\n",cs++,mid);
//        else
//            printf("Case %d: impossible\n",cs++);
//    }
//    return 0;
//}






//loj 1138 c++
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<set>
#include<map>
#include<algorithm>
#include<stack>
#include<math.h>
using namespace std;
int nofzero(double n)
{
    int t=0;

    while(n>4){
        n=n/5;
        t+=floor(n);
    }
    return t;
}
int main()
{
    #ifdef tuhin
    freopen("1138.in","r",stdin);
    #endif
    int tc,cs=1,t,lo,hi,mid;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d",&t);
        lo=1;
        hi=90000000;
        for(;hi-lo>=1;){
            mid=(hi+lo)/2;
            if(nofzero(mid*5)==t) break;
            if(nofzero(mid*5)>t) hi=mid-1;
            else lo=mid+1;
        }

        if(hi-lo<=1)
            printf("Case %d: %d\n",cs++,mid*5);
        else
            printf("Case %d: impossible\n",cs++);
    }
    return 0;
}
