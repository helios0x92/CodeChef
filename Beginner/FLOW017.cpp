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
    int A,B,C;
    cin >> A >> B >> C;
    if(A < B){
      if(B < C) cout << B << "\n";
      else cout << (A < C ? C : A) << "\n";
    } else {
      if(A < C) cout << A << "\n";
      else cout << (B < C ? C : B) << "\n";
    }
  }
  return 0;
}
