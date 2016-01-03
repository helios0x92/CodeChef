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
    int N,K;
    cin >> N >> K;
    int res = 0;
    for(int i = 1; i <= K; i++) {
      if(res < N%i) res = N%i;
    }
    cout << res << endl;
  }
  return 0;
}
