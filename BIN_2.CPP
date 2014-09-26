#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <math.h>

	int binr(int a[],int n,int x)
	{
		int low=1,high=n,mid;
		while(low<=high)
		{
		mid=floor((low+high)/2);
		if(x<a[mid])
		high=mid-1;
		else if(x>a[mid])
		low=mid+1;
		else
		return mid;
		}
		return 0;

	}
int main()
{
	clrscr();
	int a[20],i,n,x,loc;
	cout<<"ntr da value of n:";
	cin>>n;
	for(i=1;i<=n;i++)
	cin>>a[i];
	cout<<"Which value to find:";
	cin>>x;
	loc=binr(a,n,x);
	cout<<"loc="<<loc;
	getch();

return 0;
}