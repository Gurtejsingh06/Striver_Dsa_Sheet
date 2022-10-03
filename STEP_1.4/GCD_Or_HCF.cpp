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

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}
int main()
{
	int a = 4, b = 8;
	int g = gcd(a, b);
	int lcm = (a * b) / g;
	cout <<lcm <<" "<< g;
}
