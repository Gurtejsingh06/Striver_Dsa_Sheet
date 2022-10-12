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
	int n;
	cin >> n;
	int sum = 0;
    for (int i = 1; i <= n; ++i){
        sum += (n / i) * i;
    }
	cout << sum ;
	return 0;
}
