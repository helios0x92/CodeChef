#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> D(101);
int main() {
  int T;
  cin >> T;
  while(T--) {
    int N;
    cin >> N;
    vector<vector<int>> A(N,vector<int>(N));
    for(int i = 0; i < N; i++) {
      for(int j = 0; j < i+1; j++) {
	cin >> A[i][j];
      }
    }
    fill(D.begin(),D.end(),-1);
    
    D[0] = A[0][0];
    for(int i = 1; i < N; i++) {
      for(int j = i; j >= 0; j--) {
	if(j == 0) D[j] = A[i][j] + D[j];
	else if(j == i) D[j] = A[i][j] + D[j-1];
	else D[j] = A[i][j] + max(D[j-1],D[j]);
      }
    }
    cout << *max_element(D.begin(), D.end()) << "\n";
  }
}
