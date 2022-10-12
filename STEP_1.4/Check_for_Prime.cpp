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

bool isPrime(int N) {
  for (int i = 2; i < sqrt(N); i++) {
    if (N % i == 0) {
      return false;
    }
  }
  return true;
}
int main() {

  int n;
  cin >> n;

  bool ans = isPrime(n);
  if (n != 1 && ans == true) {
    cout << "Prime Number";
  } else {
    cout << "Non Prime Number";
  }
  return 0;
}


