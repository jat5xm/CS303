#pragma once
#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;


// check if a character is one of the basic arithmetic operators (+, -, *, /, %)
bool isOperator(char c) {
  return (c == '+' || c == '-' || c == '*' || c == '/' || c == '%');
}


// determine the precedence of an operator (higher precedence has a higher return value)
int precedence(char op) {
  if (op == '+' || op == '-')
      return 1;
  if (op == '*' || op == '/' || op == '%')
      return 2;
  return 0; // default case when the character is not an operator
}

// check if a character is one of the parentheses characters
bool isParenthesis(char c) {
  return (c == '(' || c == ')' || c == '{' || c == '}' || c == '[' || c == ']');
}

// check if a character is a left parenthesis
bool isLeftParenthesis(char c) {
  return (c == '(' || c == '{' || c == '[');
}

// check if a character is a right parenthesis
bool isRightParenthesis(char c) {
  return (c == ')' || c == '}' || c == ']');
}

// check if parentheses in the expression are balanced
bool isBalanced(string expression) {
  stack<char> s;
  for (char c : expression) {
    if (isParenthesis(c)) {
      if (isLeftParenthesis(c))
        s.push(c);
      else {
        if (s.empty() || !((c == ')' && s.top() == '(') || (c == '}' && s.top() == '{') || (c == ']' && s.top() == '[')))
          return false; // unmatched parentheses
        s.pop();
      }
    }
  }
  return s.empty(); // check if all parentheses are matched
}

// convert an infix expression to postfix notation
string infixToPostfix(string infix) {
    stack<char> s;
    string postfix;
    for (char c : infix) {
      if (isalnum(c))
        postfix += c;  //  if alphanumeric, add to the postfix expression
      else if (isOperator(c)) {
        while (!s.empty() && precedence(s.top()) >= precedence(c)) {
          postfix += s.top();
          s.pop();
        }
        s.push(c);
        } 
      else if (isLeftParenthesis(c)) {
        s.push(c);
        } 
      else if (isRightParenthesis(c)) {
        while (!s.empty() && !isLeftParenthesis(s.top())) {
          postfix += s.top();
          s.pop();
        }
        s.pop(); // pop the left parenthesis
      }
    }
    while (!s.empty()) {
      postfix += s.top();
      s.pop();
    }
    return postfix;
}
