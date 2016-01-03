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
    string A;
    cin >> A;
    int ycnt = 0, icnt = 0,ncnt = 0;
    for(int i = 0; i < A.size(); i++) {
      if(A[i] == 'Y') ycnt++;
      else if(A[i] == 'N') ncnt++;
      else icnt++;
    }
    if(icnt != 0) cout << "INDIAN\n";
    else if(icnt == 0 && ycnt == 0) cout << "NOT SURE\n";
    else cout << "NOT INDIAN\n";
  }
  return 0;
}
