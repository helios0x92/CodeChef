#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<stack>
#include<iomanip>
#include<algorithm>

using namespace std;

int main() {
  int T;
  cin >> T;
  while(T--) {
    double Q,P;
    cin >> Q >> P;
    double res = Q*P;
    cout << fixed ;
    if(Q > 1000) cout << setprecision(6) << 1.0*res*0.9<< endl;
    else cout << 1.0*res << setprecision(6) << endl;
  }
  return 0;
}
