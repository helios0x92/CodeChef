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
    int N;
    cin >> N;
    if(N < 1500) cout << 2*N << endl;
    else cout << 500 + 0.98*N << endl;
  }
  return 0;
}
