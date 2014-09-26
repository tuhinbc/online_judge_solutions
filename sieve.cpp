#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

#define  MX 1000
int N =MX,prime[1001];
bool  status[MX+100];

int main() {

  int i, j, sqrtN;

          for(int a=1;a<1001;a++)
          cout<<a<<" "<<status[a]<<endl;

  sqrtN = int( sqrt( N ) );
  for( i = 2; i <= sqrtN; i += 1 )
    if( status[i] == 0 ) //0 means i is a prime
       for( j = 2*i; j <= N; j += i )
          status[j] = 1;  //cut the multiples


 prime[0]=2;
  for( i = 3,j=1; i <= N; i += 2 )
    if( status[i] == 0 ) //collect the remaining numbers
    {
		//cout<<i<<endl;
        prime[j++]=i;
	}
	cout<<sizeof(int)<<endl;

return 0;
}
