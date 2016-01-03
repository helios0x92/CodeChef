#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<stack>
#include<algorithm>

using namespace std;

int gcd(int a, int b) {
  while (b) b ^= a ^= b ^= a %= b;
  return a;
}


int main() {
  int T;
  cin >> T;
  while(T--) {
    int A,B;
    cin >> A >> B;
    int _gcd = gcd(A,B);
    int _lcm = (A*B)/_gcd;
    cout << _gcd << " "<< _lcm <<endl;
  }
  return 0;
}
