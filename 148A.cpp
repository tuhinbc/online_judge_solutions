#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<set>
#include<map>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;
int main()
{
    #ifdef tuhin
    freopen("148A.in","r",stdin);
    #endif
    int a[5],n;
    bool ar[100005]={false};
    for(int i=1;i<=4;i++) scanf("%d",&a[i]);
    scanf("%d",&n);
    for(int i=1;i<=4;i++)
        for(int t=a[i];t<=n;t+=a[i]) ar[t]=true;
    cout<<count(ar,ar+n+1,true)<<endl;
    return 0;
}
