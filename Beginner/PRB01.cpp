#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;
vector<int> P(100001,true);
void generatePrimes() {
  for(int i = 2; i*i <= 100000; i++) {
    if(P[i]) {
      for(int j = i*2; j <= 100000; j += i) P[j] = false; 
    } 
  }
}

int main() {
  int T;
  cin >> T;
  generatePrimes();
  while(T--) {
    int N;
    cin >> N;
    if(P[N]) cout << "yes\n";
    else cout << "no" << endl;
  }
  return 0;
}
