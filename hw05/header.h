#ifndef _H_
#define _H_

/*
 * Brian Clinkenbeard | CS1B TTh 2:30 PM
 */

#include <iostream>
using namespace std;

enum triangle {scalene, isosceles, equilateral, noTriangle};
triangle triangleShape(double, double, double);
void prShape(triangle);

#endif
