#include "header.h"

int Sum(int *p, int k) {
  int i;
  int sum = 0;
  for (i = 0; i < k; ++i) {
    sum += *(p+i);
    cout << "Address of index " << i << ": " << (p + i) << endl;
    cout << "Value of index " << i << ": " << *(p + i) << endl;
  }
  
  return sum;
}

int main() {
  int d[5];
  int s;

  for (int i = 0; i < 5; ++i) {
    d[i] = i * i;
  }
  
  s = Sum(d, 5);
  cout << "Sum: " << s << endl;

  return 0;
}
