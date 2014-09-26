#include<stdio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int comp(const void *i, const void *j)
{
  return *(int *)i - *(int *)j;
}
int main()
{
    freopen("t.in","r",stdin);
    int ar[1000][2]={10,01,45,54,32,23,98,89,65,56};

    for(int i=0;i<5;i++)
    cout<<ar[i][0]<<" "<<ar[i][1]<<endl;

    qsort(ar,5,4,comp);

    for(int i=0;i<5;i++)
    cout<<ar[i][0]<<" "<<ar[i][1]<<endl;
    return 0;
}
