#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    long long a,b,c;
    //scanf("%I64d%I64%I64",&a,&b,&c);
    cin>>a>>b>>c;
    //printf("%I64\n",(long long)(ceil((double)a/(double)c)*ceil((double)b/(double)c)));
    cout<<(long long)(ceil((double)a/(double)c)*ceil((double)b/(double)c));
    return 0;
}
