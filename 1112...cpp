/*

    Author       :  Jan

    Problem Name :

    Algorithm    :

    Complexity   :

*/



#include <set>

#include <map>

#include <list>

#include <cmath>

#include <ctime>

#include <queue>

#include <stack>

#include <cctype>

#include <cstdio>

#include <string>

#include <vector>

#include <cassert>

#include <cstdlib>

#include <cstring>

#include <sstream>

#include <iostream>

#include <algorithm>



using namespace std;



int money[100005];





int main() {

    //freopen("1112.in", "r", stdin);

    //freopen("c.ans", "w", stdout);







    int cases, n, query, caseno = 0, ith, jth, newAmount;



    scanf("%d", &cases);

    while( cases-- ) {

        scanf("%d %d", &n, &query);

        for( int i = 0; i < n; i++ ) scanf("%d", &money[i]);



        printf("Case %d:\n", ++caseno);

        while( query-- ) {

            int type;

            scanf("%d", &type);



            if( type == 1 ) {

                scanf("%d", &ith);

                printf("%d\n", money[ith]);

                money[ith] = 0;

            }

            else if( type == 2 ) {

                scanf("%d %d", &ith, &newAmount);

                money[ith] += newAmount;

            }

            else {

                scanf("%d %d", &ith, &jth);

                assert( ith <= jth );

                int s = 0;

                for( int k = ith; k <= jth; k++ ) s += money[k];

                printf("%d\n", s);

            }

        }



        //cerr << caseno << endl;

    }






    return 0;

}
