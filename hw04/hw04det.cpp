#include <iostream>
using namespace std;

void det(double prd[3][3])
{
  double dtrmnt = prd[0][0] * (prd[1][1] * prd[2][2] - prd[1][2] * prd[2][1])
                - prd[0][1] * (prd[1][0] * prd[2][2] - prd[1][2] * prd[2][0])
                + prd[0][2] * (prd[1][0] * prd[2][1] - prd[1][1] * prd[2][0]);
  cout << "Determinant:" << endl << dtrmnt << endl;
}
