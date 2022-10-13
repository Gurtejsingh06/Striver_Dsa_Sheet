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

ll fact(ll N){
	if(N<=1){
		return 1;
	}
	return (N*fact(N-1));
}
int main(){
  ll N;
  cin >> N;
  cout << fact(N);
  return 0;
}


