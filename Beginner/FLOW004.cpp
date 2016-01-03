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
    int A;
    cin >> A;
    int res = A%10;
    while(A >= 10) {
      A /= 10;
    }
    cout << res +A <<endl;
  }
  return 0;
}
