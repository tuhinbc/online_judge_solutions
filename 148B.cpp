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
    freopen("148B.in","r",stdin);
    #endif
    double psp,dsp,late,wait,c,food=0,loss,curr,meet;

    cin>>psp>>dsp>>late>>wait>>c;
    if(psp>=dsp) meet=c;
    else
    {
        curr=psp*late;
        meet=(psp*curr)/(dsp-psp)+curr;
    }

    while(meet<c)
    {
        food++;
        loss=(meet/dsp)+wait;
        curr=meet+psp*loss;
        meet=(psp*curr)/(dsp-psp)+curr;
    }
    cout<<food<<endl;
    return 0;
}
