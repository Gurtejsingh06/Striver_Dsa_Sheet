#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
#define INF 1e18+9
#define endl '\n'
#define Mod 1000000007
#define MAX 1000001

using namespace std;
void setZeroes(vector < vector < int >> & matrix) {
  int col0 = 1, rows = matrix.size(), cols = matrix[0].size();
  for (int i = 0; i < rows; i++) {
   
    if (matrix[i][0] == 0) col0 = 0;
    for (int j = 1; j < cols; j++) {
      if (matrix[i][j] == 0) {
        matrix[i][0] = 0;
        matrix[0][j] = 0;
      }
    }
  }
  for (int i = rows - 1; i >= 0; i--) {
    for (int j = cols - 1; j >= 1; j--) {
      if (matrix[i][0] == 0 || matrix[0][j] == 0) {
        matrix[i][j] = 0;
      }
    }
    if (col0 == 0) {
      matrix[i][0] = 0;
    }

  }

}

int main() {
  vector < vector < int >> arr;
  arr = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
  setZeroes(arr);
  cout << "The Final Matrix is " << endl;
  for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr[0].size(); j++) {
      cout << arr[i][j] << " ";
    }
    cout << "\n";
  }
}
