// Print all the subsequence 

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

void printAllSubsequence(int ind,vector<int> &ds,int arr[], int n){
	if(ind == n){
		for(auto it : ds){
			cout << it << " ";
		}
		if(ds.size() == 0){
			cout <<"null";
		}
		cout << endl;
		return;
	}

	ds.pushb(arr[ind]);
	printAllSubsequence(ind+1,ds,arr,n);
	ds.popb();
	printAllSubsequence(ind+1,ds,arr,n);
}

int main()
{
   int arr[] = {3,1,2};
   int n = 3;
   int k = 2; 
   vector<int> ds;
   printAllSubsequence(0,ds,arr,n);
   return 0;
}
