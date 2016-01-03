#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
  while(true) {
    int N;
    cin >> N;
    if(N == 0) break;
    vector<int> A(N+1);
    vector<int> B(N+1);
    for(int i = 1; i < N+1; i++) {
      cin >> A[i];
      B[A[i]] = i;
    }
    int i = 1;
    for(; i < N+1; i++) {
      if(A[i] != B[i]) break;
    }
    if(i == N+1) cout << "ambiguous\n";
    else cout << "not ambiguous\n";
  }
  return 0;
}
