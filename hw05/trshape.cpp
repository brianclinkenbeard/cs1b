#include "header.h"

triangle triangleShape(double a, double b, double c)
{
  if (a + b < c || a + c < b || b + c < a) 
    return noTriangle;
  else if (a == b && b == c)
    return equilateral;
  else if (a == b || a == c || b == c)
    return isosceles;
  else
    return scalene;
}
