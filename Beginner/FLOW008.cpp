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
    int N;
    cin >> N;
    if(N < 10) cout << "What an obedient servant you are!\n";
    else cout << -1 << endl;
  }
  return 0;
}
