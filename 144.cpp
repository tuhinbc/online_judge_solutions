#include<stdio.h>
#include<stdlib.h>
#include<iostream>

int c,k,s,n;

int getcoin()
{
    if(c>k){
    c=1;
    return c++;
    }
    return c++;
}
int getstu()
{
    if(s>n){
       s=1;
       return s++;
       }
    return s++;
}
void deque(int a)
{
   printf("%3d",a);
}
int main()
{
    int tray,done,st,stum[30],i;
    while(1)
    {
        scanf("%d%d",&n,&k);
        if(!(n||k))break;
        for(i=1;i<=n;i++)
            stum[i]=0;

        done=0;
        tray=0;
        c=1;
        s=1;

        while(done<n)
        {
            if(!tray) tray+=getcoin();
            while(1)
            {
                    st=getstu();
                    if(stum[st]>=0) break;
            }
            //printf("#%d#%d#%d\n",st,stum[st],tray);
            stum[st]+=tray;
            if(stum[st]==40)
            {
                done++;
                deque(st);
                tray=0;
                stum[st]=-1;
            }
            else if(stum[st]>40)
            {
                done++;
                deque(st);
                tray=stum[st]-40;
                stum[st]=-1;
            }
            else tray=0;
        }
        printf("\n");
    }
    return 0;
}
