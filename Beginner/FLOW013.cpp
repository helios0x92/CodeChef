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
    if(A > 0 && B > 0 && C > 0 && A+ B+C == 180) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}
