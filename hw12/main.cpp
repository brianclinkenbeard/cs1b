#include "header.h"

int main()
{
  int numrows = 0;
  while (numrows < 1) {
    cout << "Enter the number of rows: " << endl;
    cin >> numrows;
  }
  
  int numcols = 0;
  while (numcols < 1) {
    cout << "Enter the amount of columns: " << endl;
    cin >> numcols;
  }

  cout << endl;

  cout << "Creating first matrix..." << endl;
  matrix mat1(numrows, numcols);
  mat1.input();

  cout << endl;

  cout << "Creating second matrix..." << endl;
  matrix mat2(numrows, numcols);
  mat2.input();

  cout << endl;

  while (true) {
    int operation = menu();
    cout << endl;
    switch (operation) {
    case 1:
      cout << "Matrix of the sum: " << endl;;
      cout << mat1 + mat2 << endl;
      break;
    case 2:
      cout << "Matrix of the difference: " << endl;
      cout << mat1 - mat2 << endl;
      break;
    case 3:
      cout << "Matrix of the product: " << endl;
      cout << mat1 * mat2 << endl;
      break;
    case 4:
      return 0;
    }
  }
}
