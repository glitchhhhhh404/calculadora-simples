#include <iostream>

using namespace std;

int main() {
  double num1, num2;
  char op;

  cout << "Insira o primeiro número: ";
  cin >> num1;

  cout << "Insira o segundo número: ";
  cin >> num2;

  cout << "Insira a operação (+, -, *, /): ";
  cin >> op;

  if (op == '+') {
    cout << num1 + num2;
  } else if (op == '-') {
    cout << num1 - num2;
  } else if (op == '*') {
    cout << num1 * num2;
  } else if (op == '/') {
    cout << num1 / num2;
  } else {
    cout << "Operação inválida";
  }

  return 0;
}
