#include "header.h"

int Sum(int *p, int r, int c) {
  int j, k, sum = 0;
  for (j = 0; j < r; ++j) {
    for (k = 0; k < c; ++k) {
      sum += *(p+j*c+k);
    }
  }

  return sum;
}

int main() {
  int *d, s;

  d = new int[5*8];
  if (!d) return -1;

  for (int i = 0; i < (5*8); ++i) {
    d[i] = i + i;
    cout << "Address of index " << i << ": " << &d[i] << endl;
    cout << "Value of index " << i << ": " << d[i] << endl;
  }

  s = Sum(d, 5, 8);
  cout << "Sum: " << s << endl;

  delete [] d;
  return 0;
}
