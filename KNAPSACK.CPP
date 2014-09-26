#include<stdio.h>

int C[100][100],n,m;
int Wi[50]={0,5,3,4,5};
int Vi[50]={0,10,12,3,7};

int max(int a,int b)
{
    printf("%d %d\n",a,b);
    return a<b?b:a;
}
void print()
{
    for(int i=0;i<=n;i++,putchar('\n'))
        for(int j=0;j<=m;j++)
            printf("%2d ",C[i][j]);
}
int main()
{
    int N,MW;
    n=N=4;
    m=MW=7;

    for (int i=0;i<=N ;i++)
        C[i][0] = 0;

    for (int w=0;w<=MW;w++)
        C[0][w] = 0;
    for (int i=1;i<=N;i++)//,print(),putchar('\n'))
      for (int w=1;w<=MW;w++)
      {
            if (Wi[i] > w)
              C[i][w] = C[i-1][w];
            else
              C[i][w] = max(C[i-1][w] , C[i-1][w-Wi[i]]+Vi[i]);
      }
      print();
    return 0;
}
