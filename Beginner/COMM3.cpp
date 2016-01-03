#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<stack>
#include<algorithm>

using namespace std;
double dist(int x0,int y0, int x1, int y1) {
  return sqrt((x0-x1)*(x0-x1) + (y0-y1)*(y0-y1));
}

int main() {
  int T;
  cin >> T;
  while(T--) {
    int R,x0,y0,x1,y1,x2,y2;
    cin >> R >> x0 >> y0 >> x1 >> y1 >> x2 >> y2;
    double d01 = dist(x0,y0,x1,y1);
    double d12 = dist(x1,y1,x2,y2);
    double d20 = dist(x2,y2,x0,y0);
    if((d01 <= R && d12 <= R) ||
       (d01 <= R && d20 <= R) ||
       (d12 <= R && d20 <= R)) cout << "yes\n";
    else cout << "no\n";
  }
  return 0;
}
