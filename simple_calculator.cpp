#include <iostream>

int main() {
  char op;
  double num1, num2;

  std::cout << "Enter operator (+, -, *, /): ";
  std::cin >> op;

  std::cout << "Enter two operands: ";
  std::cin >> num1 >> num2;

  switch(op) {
    case '+':
      std::cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      std::cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      std::cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      std::cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:
      std::cout << "Error! Invalid operator";
      break;
  }

  return 0;
}
