#include "header.h"

matrix::~matrix()
{
  /* free memory */
  for (int i = 0; i < rows; ++i) {
    delete [] mat[i];
  }
  delete [] mat;
}
