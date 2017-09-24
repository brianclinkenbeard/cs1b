#include "header.h"

matrix::matrix(int row, int col)
{
  rows = row;
  columns = col;

  /* allocate array dynamically */
  mat = new double*[row];
  for (int i = 0; i < row; i++) {
    mat[i] = new double[col];
  }
}

matrix::matrix(const matrix &newmat)
{
  rows = newmat.rows;
  columns = newmat.columns;

  mat = new double*[rows];
  for (int i = 0; i < rows; i++) {
    mat[i] = new double[columns];
  }

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      mat[i][j] = newmat.mat[i][j];
    }
  }
}
