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
    int N,res = 0;
    cin >> N;
    for(int i = 11; i >= 0; i--) {
      res += N/(1 << i);
      N %= (1 << i);
    }
    cout << res << "\n";
  }
  return 0;
}
