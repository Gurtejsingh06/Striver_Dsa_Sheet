// Print all the subsequence whose sum is equal to given k

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

void printAllSubsequenceWithSum(int ind,vector<int> &ds,int arr[], int n, int sum, int k){
	if(ind == n){
		if(sum == k){
			for(auto it : ds){
				cout << it << " ";
			}
			cout << endl;			
		}
		return;
	}
	ds.pushb(arr[ind]);
	sum+=arr[ind];
	printAllSubsequenceWithSum(ind+1,ds,arr,n,sum,k);
	ds.popb();
	sum-=arr[ind];
	printAllSubsequenceWithSum(ind+1,ds,arr,n,sum,k);
}

int main()
{
   int arr[] = {1,2,1};
   int n = 3;
   int k = 2;
   vector<int> ds;
   printAllSubsequenceWithSum(0,ds,arr,n,0,k);
   return 0;
}
