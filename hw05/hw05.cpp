#include "header.h"

int main()
{
  cout << "Enter the lengths of the three sides of a triangle:" << endl;
  /* get sides from user */
  double a, b, c;
  cin >> a >> b >> c;

  triangle result = triangleShape(a, b, c);
  prShape(result);

  return 0;
}
