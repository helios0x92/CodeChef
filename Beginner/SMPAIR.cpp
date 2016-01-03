#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<stack>
#include<climits>
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
    int s1 = INT_MAX,s2 = INT_MAX;
    for(int i = 0; i < N; i++) {
      if(A[i] < s1) {
	s2 = s1;
	s1 = A[i];
      } else if(A[i] < s2 ) s2 = A[i];
    }
    cout << s1 + s2 << "\n";
  }
  return 0;
}
