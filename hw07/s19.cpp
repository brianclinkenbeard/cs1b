#include "header.h"

int Sum(int **p, int r, int c) {
  int j, k, sum = 0;
  for (j = 0; j < r; ++j) {
    for (k = 0; k < c; ++k) {
      sum += p[j][k];
    }
  }

  return sum;
}

int main() {
  int **d, s, i;

  d = new int*[5];

  for (i = 0; i < 5; ++i) {
    d[i] = new int[8];
  }
  for (int j = 0; j < 5; ++j) {
    for (int k = 0; k < 8; ++k) {
      d[j][k] = j + k;
      cout << "Address of index " << j << ", " << k << ": " << &d[j][k] << endl;
      cout << "Value of index " << j << ", " << k << ": " << d[j][k] << endl;
    }
  }

  s = Sum(d, 5, 8);
  cout << "Sum: " << s << endl;

  for (i = 0; i < 5; ++i)
    delete [] d[i];
  delete [] d;
  return 0;
}
