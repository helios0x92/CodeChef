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
    int A,count = 0;
    cin >> A;
    while(A) {
      if(A%10 == 4) count++;
      A /= 10;
    }
    cout << count <<endl;
  }
  return 0;
}
