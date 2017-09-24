#include "header.h"

matrix operator-(const matrix &mat1, const matrix &mat2)
{
  /* check for the same number of rows and columns */
  if (mat1.rows == mat2.rows && mat1.columns == mat2.columns) {
    matrix sum(mat1.rows, mat1.columns);

    /* subtract elements */
    for (int i = 0; i < sum.getRows(); i++) {
      for (int j = 0; j < sum.getColumns(); j++) {
         sum.mat[i][j] = mat1.mat[i][j] - mat2.mat[i][j];
      }
    }

    return sum;
  } else {
    cout << "Matrices cannot be added." << endl;
  }
}
