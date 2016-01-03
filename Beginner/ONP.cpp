#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;

int main() {
  int T;
  cin >> T;
  while(T--) {
    string infix,rpn = "";
    cin >> infix;
    stack<char> s;
    for(int i = 0; i < infix.size(); i++) {
      if(isdigit(infix[i]) || isalpha(infix[i])) rpn += infix[i];
      else if(infix[i] == '+' || infix[i] == '-' || infix[i] == '*'
	      || infix[i] == '/' || infix[i] == '^' || infix[i] == '(') {
	s.push(infix[i]);
      } else {
	while(!s.empty() && s.top() != '(') {
	  rpn += s.top();
	  s.pop();
	}
	s.pop();
      }
    }
    cout << rpn << "\n";
  }
  return 0;
}
