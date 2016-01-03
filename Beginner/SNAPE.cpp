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
    double B,LS;
    cin >> B >> LS;
    double min = sqrt(LS*LS - B*B);
    double max = sqrt(LS*LS + B*B);
    cout << min <<" "<<max << "\n";
  }
  return 0;
}
