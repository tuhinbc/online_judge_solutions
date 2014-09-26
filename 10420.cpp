#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<set>
#include<map>
#include<algorithm>
#include<stack>
#include<queue>
//#include<string.h>
using namespace std;
int main()
{
    #ifdef tuhin
    freopen("10420.in","r",stdin);
    #endif
    map<string,int> mp;
    map<string,int>::iterator it;
    char ar[100],tmp[100];
    int n;

    gets(ar);
    sscanf(ar,"%d",&n);
    while(n--)
    {
        gets(ar);
        sscanf(ar,"%s",&tmp);
        mp[tmp]++;
    }
    for(it=mp.begin();it!=mp.end();it++)
    cout<<it->first<<" "<<it->second<<endl;



    return 0;
}
