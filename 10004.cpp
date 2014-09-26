//uva 10004 c++
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<vector>
#include<map>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;
int main()
{
    #ifdef tuhin
    freopen("10004.in","r",stdin);
    #endif

    int node,edge,a,b,visited[205]={};//,dist[100]={};
    vector<int> graph[205];
    queue<int> q;
    //bool colored[205]={false},color[205]={false},ok;
    bool colored[205],color[205],ok;
    while(1)
    {
        for(int i=0;i<202;i++)
        colored[i]=false,visited[i]=0;

        //printf("%s",colored[i]?"y":"N");
        scanf("%d",&node);
        if(!node) break;
        scanf("%d",&edge);

        while(edge--)
        {
            scanf("%d%d",&a,&b);
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        //   /// clean up ......
                    /// more
        q.push(0); ///src
        visited[0]=1;
        //dist[0]=0;
        colored[0]=true;
        color[0]=true;
        ok=true;

        while((!q.empty())&&ok)
        {
            int parnt=q.front();
            for(int n=0;n<graph[parnt].size();n++)
            {
                int child=graph[parnt][n];

                //
                if(!visited[child])
                {
                    q.push(child);
                }
                if(colored[child])
                {
                    if(color[parnt]==color[child]) {ok=false;break;}
                    //printf("child %d\n",child);
                    //break;
                }
                else
                {
                    color[child]=!color[parnt];
                    colored[child]=true;
                }
                    //dist[child]=dist[parnt]+1;
                    visited[child]=1;
            }
            q.pop();

        }
        while(!q.empty()) q.pop();
        if(ok) printf("BICOLORABLE.\n");
        else printf("NOT BICOLORABLE.\n");
        //q.clear();
        for(int t=0;t<node;t++)
        graph[t].clear();

    }
    return 0;
}
