#include<stdio.h>
#include<math.h>
#include<iostream>
#include<set>
#include<map>
using namespace std;
int main()
{
    char pp[]="dfh";
    map<string,int> tu;
    map<string,int>::iterator it;
    tu["mfg"]=45;
    tu[pp]++;
    tu[pp]++;
    //tu[pp]+=78;
    it=tu.begin();
    cout<<it->second;

    return 0;
}
