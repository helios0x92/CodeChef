#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<stack>
#include<map>
#include<algorithm>

using namespace std;

int main() {
  int T;
  cin >> T;
  map<char,string> H;
  H['B'] = "BattleShip";
  H['C'] = "Cruiser";
  H['D'] = "Destroyer";
  H['F'] = "Frigate";
  while(T--) {
    char c;
    cin >> c;
    c = (char) toupper(c);
    cout << H.find(c)->second << endl;
  }
  return 0;
}
