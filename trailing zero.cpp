#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<set>
#include<map>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;
int nofzero(int n)
{
    int t=0;
    while(n>4){
        t++;
        n/=5;
    }
    return t;
}
int main()
{
    #ifdef tuhin
    freopen("124563.in","r",stdin);
    #endif

    return 0;
}
