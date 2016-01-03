#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<stack>
#include<algorithm>

using namespace std;

int factorial(int N) {
  if(N == 0) return 1;
  return factorial(N-1)*N;
}

int main() {
  int T;
  cin >> T;
  while(T--) {
    int N;
    cin >> N;
    cout << factorial(N) << endl;
  }
  return 0;
}
