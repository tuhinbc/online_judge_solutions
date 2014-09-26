///loj 1012 c++
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<set>
#include<string.h>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
#define sc(a) scanf("%d",&a)
#define sc2(a,b) scanf("%d%d",&a,&b)
using namespace std;

struct point
{
    int x,y;
    point(int a,int b)
    {
        x=a;y=b;
    }
    point()
    {

    }
};

queue<point> data;

char ar[21][21],tmp[20];

bool stat[21][21];

int tc,cs=1,line,len;
int ct;

void checkvalid(int x,int y)
{
    if((x<line)&&(x>-1))
    {
        if((y<len)&&(y>-1))
        {
            if(ar[x][y]=='.')
                if(stat[x][y]==false)
                {
                    data.push(point(x,y));
                    stat[x][y]=true;
                    //printf("%d %d\n",x,y);
                }
        }
    }
}

void addall()
{
    point tt=data.front(); data.pop();
    //stat[tt.x][tt.y]=true;
    ct++;
    checkvalid(tt.x,tt.y+1);
    checkvalid(tt.x,tt.y-1);
    checkvalid(tt.x+1,tt.y);
    checkvalid(tt.x-1,tt.y);
}
int main()
{
    #ifdef tuhin
    freopen("1012.in","r",stdin);
    #endif

    point start;
    sscanf(gets(tmp),"%d",&tc);
    while(tc--)
    {
        memset(ar,0,sizeof ar);
        memset(stat,0,sizeof stat);
        ct=0;
        sscanf(gets(tmp),"%d%d",&len,&line);
        for(int i=0;i<line;i++)
        {
            gets(ar[i]);
            // puts(ar[i]);
            for(int t=0;t<len;t++)
            {
                if(ar[i][t]=='@')
                {
                    start.x=i;
                    start.y=t;
                }
            }
        }

        while(!data.empty()) data.pop(); ///clear data

        data.push(start);
        while(!data.empty())
        {
            addall();
        }
        ///output
        printf("Case %d: %d\n",cs++,ct);
    }

    return 0;
}
