#include "header.h"

ostream& operator<<(ostream &os, const matrix &outmat)
{
  for (int i = 0; i < outmat.rows; i++) {
    for (int j = 0; j < outmat.columns; j++) {
      if (j != 0) {
        /* dont use setw since values can be of any size */
        cout << ", ";
      }
      /* output value */
      os << fixed << setprecision(2) << outmat.mat[i][j];
    }
    os << "\n";
  }
  return os;
}
