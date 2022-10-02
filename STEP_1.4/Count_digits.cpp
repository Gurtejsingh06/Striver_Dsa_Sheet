// My Solution

#include <bits/stdc++.h>

#define ll long long
#define f first
#define s second
#define ull unsigned long long int
#define pushb push_back
#define popb pop_back
#define INF 1e18+9
#define endl '\n'
#define Mod 1000000007
#define MAX 1000001

using namespace std;

int main()
{
	ll N=0;
	cin >> N;

	string x = to_string(N);
  	ll size = x.length(); 
        ll count = 0;
 		ll N1 = N;
        while(size != 0){
            ll X = N % 10;
            if(X > 0){
            	if(N1 % X == 0){
               		count++;
            	}
        	}
            N /= 10;
            size--;
        }
        cout << count;


	return 0;
}

// Autor Solution 

#include <bits/stdc++.h>

#define ll long long
#define f first
#define s second
#define ull unsigned long long int
#define pushb push_back
#define popb pop_back
#define INF 1e18+9
#define endl '\n'
#define Mod 1000000007
#define MAX 1000001

using namespace std;

int main()
{
	ll N=0;
	cin >> N;

	int temp = N, count = 0;
        while (temp != 0)
        {
            // extract the last digit
            int d = temp % 10;
            temp /= 10;
             
            // check if d divide N completly
            if (d > 0 && N%d == 0)
              count++;
        }

        cout << count;


	return 0;
}
