#include "header.h"

void prShape(triangle tri)
{
  switch (tri) {
  case noTriangle:
    cout << "Not a triangle." << endl;
    break;
  case equilateral:
    cout << "Equilateral." << endl;
    break;
  case isosceles:
    cout << "Isosceles." << endl;
    break;
  case scalene:
    cout << "Scalene." << endl;
    break;
  default:
    cout << "ERROR!!!!!!" << endl;
    break;
  }
}

