#include "header.h"

int Sum(int A[][8]) {
  int i, j, sum = 0;
  for (i = 0; i < 5; ++i) {
    for (j = 0; j < 8; ++j) {
      sum += A[i][j];
    }
  }

  return sum;
}

int main() {
  int d[5][8];
  int s;

  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 8; ++j) {
      d[i][j] = i + j;
      cout << "Address of index " << i << ", " << j << ": " << &d[i][j] << endl;
      cout << "Value of index " << i << ", " << j << ": " << d[i][j] << endl;
    }
  }

  s = Sum(d);
  cout << "Sum: " << s << endl;

  return 0;
}
