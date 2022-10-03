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
	int temp = n;
	int digits = floor(log10(n) + 1);
	int sum = 0;
	while(n!=0){
		sum += pow(n%10,digits);
		n/=10;
	}
	if(sum == temp)
		cout << "Yes";
	else
		cout << "No";

	return 0;
}
