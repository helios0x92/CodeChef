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
    int A,B;
    cin >> A >> B;
    cout << max(A,B) << " "<< A+B << "\n";
  }
  return 0;
}
