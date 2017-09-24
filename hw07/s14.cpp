#include "header.h"

int Sum(int A[5]) {
  int i;
  int sum = 0;
  for (i = 0; i < 5; i++) {
    sum += A[i];
    cout << "Address of index " << i << ": " << &A[i] << endl;
    cout << "Value of index " << i << ": " << A[i] << endl;
  }
  return sum;
}

int main() {
  int d[5];
  int s;

  /* initialize values with double the index value */
  for (int i = 0; i < 5; ++i) {
    d[i] = i + i;
  }

  s = Sum(d);
  
  cout << "Sum: " << s << endl;


  return 0;
}
