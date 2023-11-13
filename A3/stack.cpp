#include "stack.h"

int main() {
  string infixExpression;

  cout << "Enter an infix expression: ";
  getline(cin, infixExpression);

  if (isBalanced(infixExpression)) {
    string postfixExpression = infixToPostfix(infixExpression);
    cout << "Balanced Parentheses: Yes" << endl;
      cout << "Postfix Expression: " << postfixExpression << endl;
  } 
  else {
    cout << "Balanced Parentheses: No" << endl;
    cout << "Invalid Expression" << endl;
  }
  return 0;
}
