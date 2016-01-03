#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<stack>
#include<algorithm>

using namespace std;

int main() {
  int T;
  cin >> T;
  while(T--) {
    int N,R=0,K;
    cin >> N;
    K = N;
    while(K) {
      R *= 10;
      R += K%10;
      K /= 10;
    }
    if(R == N) cout << "wins\n";
    else cout << "losses\n";
  }
  return 0;
}
