#include<stdio.h>
//#include<iostream>
//using namespace std;
//                 30,35  35,15  15,5  5,10  10,20  20,25
//int dimen[100]={30,   35,    15,    5,   10,    20,    25};
int dimen[100];
int cost[100][100];
int par[100][100];
void print(int i,int j)
{
    if(i==j) //cout<<"A"<<i;
        printf("A%d",i);
    else{
        //cout<<"(";
        putchar('(');
        print(i,par[i][j]);
        printf(" x ");
        print(par[i][j]+1,j);
        //cout<<")";
        putchar(')');
    }
}

int main()
{
	int count;
	int n,cs=1;
	#ifndef ONLINE_JUDGE
	freopen("384.txt","r",stdin);
	#endif
	while(1){
        scanf("%d",&n);
        if(n==0)break;
        for(int t=0;t<n;t++){
            scanf("%d%d",&dimen[t],&dimen[t+1]);
        }

        for(int i=1;i<=n;i++)cost[i][i]=0;
        for(int len=2;len<=n;len++){
            for(int i=1;i<=n-len+1;i++){
                int j=i+len-1;
                cost[i][j]=2000000000;
                for(int k=i;k<= j-1;k++){
                    int q=cost[i][k]+cost[k+1][j]+dimen[i-1]*dimen[k]*dimen[j];
                    if(q<cost[i][j]){
                        cost[i][j]=q;
                        par[i][j]=k;
                    }
                    //cout<<cost[i][j]<<"\n";
                }
            }
        }
        printf("Case %d: ",cs++);
        print(1,n);
        printf("\n");
	}
    return 0;
}
