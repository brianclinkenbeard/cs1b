#include <iostream>
using namespace std;

int menu()
{
  cout << endl
       << "Choose operation:" << endl
       << "1. Addition" << endl
       << "2. Subtraction" << endl
       << "3. Multiplication" << endl
       << "4. Determinant" << endl
       << "5. Exit" << endl;
  int choice;
  cin >> choice;

  cout << endl;

  return choice;
}
