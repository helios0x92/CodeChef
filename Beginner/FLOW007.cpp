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
    int A,R = 0;
    cin >> A;
    while(A) {
      R*=10;
      R += A%10;
      A /= 10;
    }
    cout << R <<endl;
  }
  return 0;
}
