#include "header.h"

int Sum(int *p, int k) {
  int i;
  int sum = 0;
  for (i = 0; i < k; ++i) {
    sum += *(p+i);
  }

  return sum;
}

int main() {
  int *d, s;
  d = new int[5];
  if (!d) return -1;

  for (int i = 0; i < 5; ++i) {
    d[i] = i * 2;
    cout << "Address of index " << i << ": " << &d[i] << endl;
    cout << "Value of index " << i << ": " << d[i] << endl;
  }

  s = Sum(d, 5);
  cout << "Sum: " << s << endl;

  delete [] d;
  return 0;
}
