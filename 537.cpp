#include <algorithm>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int tu()
{
     char ar[1100],*p,unit;
     double u=0.0,i=0.0,pp=0.0,res;

     gets(ar);
     //puts(ar);
     p=strtok(ar," ");
     while(p!=NULL)
     {
         if(*(p)=='U'&&*(p+1)=='=')
         {
            //printf("%s\n",p);
            sscanf(p,"%c%c%lf%c",&unit,&unit,&u,&unit);
            if(unit=='m') u/=1000;
            else if(unit=='k') u*=1000;
            else if(unit=='M') u*=1000000;
            //printf("%f %c\n",u,unit);
         }
        else if(*(p)=='I'&&*(p+1)=='=')
        {
            sscanf(p,"%c%c%lf%c",&unit,&unit,&i,&unit);
            if(unit=='m') i/=1000;
            else if(unit=='k') i*=1000;
            else if(unit=='M') i*=1000000;
            //printf("%f %c\n",i,unit);
        }
        else if(*(p)=='P'&&*(p+1)=='=')
        {
            sscanf(p,"%c%c%lf%c",&unit,&unit,&pp,&unit);
            if(unit=='m') pp/=1000;
            else if(unit=='k') pp*=1000;
            else if(unit=='M') pp*=1000000;
            //printf("%f %c\n",pp,unit);
        }
       p=strtok(NULL," ,");
     }

     if(u==0.0)
     {
        res=pp/i;
        printf("U=%.2fV\n",res);
     }
     else if(i==0.0)
     {
        res=pp/u;
        printf("I=%.2fA\n",res);
     }
     else if(pp==0.0)
     {
        res=u*i;
        printf("P=%.2fW\n",res);
        //printf("--%f %f\n",pp,i);
     }
     else res=123;


}


int main()
{
    //freopen("1.txt","r",stdin);
    int n=3,tc=1;
    char pp[10];
    sscanf(gets(pp),"%d",&n);
    while(n)
    {

        printf("Problem #%d\n",tc++);
        tu();
        n--;
        //if(n)
        putchar('\n');

    }



    return 0;
}
