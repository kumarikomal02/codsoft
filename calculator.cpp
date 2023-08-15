# include <iostream>
using namespace std;

int main()
 {

  char opr;
  float num1, num2;

  cout << "Enter operator: +, -, *, /: ";
  cin >> opr;

  cout << "Enter two operands: ";
  cin >> num1 >> num2;

  switch(opr)
   {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:
      cout << "Error! entered operator is not correct";
      break;
  }

  return 0;
}
