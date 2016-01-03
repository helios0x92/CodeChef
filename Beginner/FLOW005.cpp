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
    int D[6] = {1,2,5,10,50,100};
    int res = 0;
    for(int i = 5; i >= 0; i--) {
      if(D[i] <= N) {
	res += N/D[i];
	N %= D[i];
      }
    }
    cout << res << endl;
  }
  return 0;
}
