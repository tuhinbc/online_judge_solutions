#include<stdio.h>
#include<iostream>
#define ll long long
using namespace std;
int main()
{
    ll number,div;
    while(1)
    {
        cin>>number;
        if(!number) break;
        div=number/9;
        if(number%9==0)
        {
            cout<<div-1+number<<" "<<div+number<<endl;
        }
        else
        {
            cout<<number+div<<endl;
        }
    }
    return 0;
}
