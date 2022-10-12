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
int i = 1;
void printNos(int N){
        if(i<=N){
            cout << i << " ";
            i+=1;
            printNos(N);
        }
}
int main() {

  int n;
  cin >> n;
  printNos(n);
  return 0;
}


