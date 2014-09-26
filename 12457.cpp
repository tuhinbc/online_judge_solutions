//uva 12457 c++
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<set>
#include<map>
#include<algorithm>
#include<stack>
#include<math.h>
using namespace std;
double mem[30][30];
double prob_of_a;
int win_point;
double dp(int a,int b)
{
    if(mem[a][b]<5000) return mem[a][b];
    if(a==win_point){
        return 1;
    }
    if(b==win_point){
        return 0;
    }

    double res;
    res=prob_of_a*dp(a+1,b)+(1-prob_of_a)*dp(a,b+1);
    mem[a][b]=res;
    return res;

}
int main()
{
    #ifdef tuhin
    freopen("12457.in","r",stdin);
    #endif
    int tc,cs=1;
    scanf("%d",&tc);
    while(tc--){

        for(int i=0;i<28;i++)
            for(int j=0;j<28;j++)
                mem[i][j]=8000;

        scanf("%d",&win_point);
        scanf("%lf",&prob_of_a);
        printf("%.2lf\n",dp(0,0));
        //printf("%lf\n",prob_of_a);
    }
    return 0;
}
