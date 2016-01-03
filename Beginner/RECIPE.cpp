#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<algorithm>

using namespace std;

int main() {
  int T;
  cin >> T;
  while(T--) {
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++) cin >> A[i];
    int gcd = A[0];
    for(int i = 0; i < N; i++) {
      int tmp = gcd;
      while(A[i]%tmp || gcd%tmp) tmp--;
      gcd = tmp;
    }
    for(int i = 0; i < N; i++) cout << A[i]/gcd << " ";
    cout << "\n";
  }
  return 0;
}
