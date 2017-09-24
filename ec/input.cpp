#include "header.h"

void matrix::input()
{
  for (int i = 0; i < this->getRows(); i++) {
    for (int j = 0; j < this->getColumns(); j++) {
      cout << "Enter the value at row " << i << ", column " << j << ":" << endl;
      cin >> mat[i][j];
    }
  }
}

