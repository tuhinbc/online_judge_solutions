//#include<stdio.h>
//#include<iostream>
//#include<stdlib.h>
//#include<set>
//#include<map>
//#include<algorithm>
//#include<vector>
//#include<string.h>
//using namespace std;
//vector <vector<int> > ar(100009);
//double prob[100009];
////vector <int> tmp(500);
//int calc()
//{
//    //ar[1].push_back(0);
//    prob[1]=0;
//    int p=0,c=0;
//    for(int i=2;i<100001;i++){
//        //ar[i].
//        for(int t=i+i;t<100001;t+=i){
//            ar[t].push_back(i);
//        }
//    }
//    //printf("%d--",ar[1][0]);
//}
//double tt(int t)
//{
//    if(prob[t]>-1) return prob[t];
//    int len=ar[t].size();
//    int tot=len+2;
//
//    double e=0;
//    for(int i=0;i<len;i++) e+=tt(ar[t][i]);
//
//    e+=tot;
//    e/=tot-1;
//    prob[t]=e;
//    return e;
//}
//int main()
//{
//    #ifdef tuhin
//    freopen("1038.in","r",stdin);
//    #endif
//
//
//    for(int i=1;i<100005;i++){
//            prob[i]=-10;
//        //printf("%d %d\n",i,ar[i].size());
//    }
//    calc();
//
//    int tc,cs=1,n;
//    scanf("%d",&tc);
//    //memset(prob,-1,sizeof prob);
//
//    //printf("%lf\n",prob[0]);
//
//    while(tc--){
//        scanf("%d",&n);
//        printf("Case %d: %.8lf\n",cs++,tt(n));
//    }
//    return 0;
//}
//
//
//





#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<set>
#include<map>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;

double e[100009];
double sum[100009];
double cnt[100009];
//vector <int> tmp(500);
int calc()
{
    //ar[1].push_back(0);
    //prob[1]=0;

    int p=0,c=0;
    for(int i=2;i<100001;i++){
        //ar[i].
        cnt[i]+=2;

        e[i]=(cnt[i]+sum[i])/(cnt[i]-1);

        for(int t=i+i;t<100001;t+=i){
            sum[t]+=e[i];
            cnt[t]++;
        }
    }
    //printf("%d--",ar[1][0]);
}

int main()
{
    #ifdef tuhin
    freopen("1038.in","r",stdin);
    #endif


    for(int i=1;i<100005;i++){
            //prob[i]=-10;
            sum[i]=cnt[i]=e[i]=0;
        //printf("%d %d\n",i,ar[i].size());
    }
    calc();

//    for(int i=1;i<10;i++){
//        //printf("%d %lf\n",i,e[i]);
//    }

    int tc,cs=1,n;
    scanf("%d",&tc);
    //memset(prob,-1,sizeof prob);

    //printf("%lf\n",prob[0]);

    while(tc--){
        scanf("%d",&n);
        printf("Case %d: %.8lf\n",cs++,e[n]);
    }
    return 0;
}
