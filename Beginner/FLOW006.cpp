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
    int A,sum = 0;
    cin >> A;
    while(A) {
      sum += A%10;
      A /= 10;
    }
    cout << sum <<endl;
  }
  return 0;
}
