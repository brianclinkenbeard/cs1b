#include "header.h"

matrix::matrix(int row, int col)
{
  rows = row;
  columns = col;

  /* initialize matrix */
  mat = vector< vector<double> >(row, vector<double>(col, 0));
}

/* copy constructor */
matrix::matrix(const matrix &newmat)
{
  rows = newmat.rows;
  columns = newmat.columns;
  mat = newmat.mat;
}
