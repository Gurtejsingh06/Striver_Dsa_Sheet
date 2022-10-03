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
	ll num = N;
    ll reverse = 0;
    if (N < 0){
        cout<< "false";
        return 0;
    }
    if(N < 0) 
    while(N!=0)
    {
        ll digit = N%10;
        reverse = reverse*10+digit;
        N = N/10;
    }
    if(reverse == num)
    	cout << "true";
    else
    	cout << "false";
	return 0;
}
