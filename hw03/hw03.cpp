#include "hw03.h"

int main()
{
  cout << "Brian Clinkenbeard | CS1B TTh 2:30 PM" << endl;

  ifstream mat1, mat2;
  ofstream mat3;

  /* open matrices */
  mat1.open("mat3x3_1.txt");
  mat2.open("mat3x3_2.txt");
  mat3.open("result.txt");
  
  /* create variables for each value */
  double m1_00, m1_01, m1_02, m1_10, m1_11, m1_12, m1_20, m1_21, m1_22;
  double m2_00, m2_01, m2_02, m2_10, m2_11, m2_12, m2_20, m2_21, m2_22;

  /* assign values */
  mat1 >> m1_00 >> m1_01 >> m1_02 >> m1_10 >> m1_11 >> m1_12 >> m1_20 >> m1_21 >> m1_22;
  mat2 >> m2_00 >> m2_01 >> m2_02 >> m2_10 >> m2_11 >> m2_12 >> m2_20 >> m2_21 >> m2_22;

  /* sums */
  double sum_00 = m1_00 + m2_00;
  double sum_01 = m1_01 + m2_01;
  double sum_02 = m1_02 + m2_02;
  double sum_10 = m1_10 + m2_10;
  double sum_11 = m1_11 + m2_11;
  double sum_12 = m1_12 + m2_12;
  double sum_20 = m1_20 + m2_20;
  double sum_21 = m1_21 + m2_21;
  double sum_22 = m1_22 + m2_22;

  /* differences */
  double dif_00 = m1_00 - m2_00;
  double dif_01 = m1_01 - m2_01;
  double dif_02 = m1_02 - m2_02;
  double dif_10 = m1_10 - m2_10;
  double dif_11 = m1_11 - m2_11;
  double dif_12 = m1_12 - m2_12;
  double dif_20 = m1_20 - m2_20;
  double dif_21 = m1_21 - m2_21;
  double dif_22 = m1_22 - m2_22;

  /* products */
  double prd_00 = m1_00 * m2_00 + (m1_01 * m2_10) + (m1_02 * m2_20);
  double prd_01 = m1_00 * m2_01 + (m1_01 * m2_11) + (m1_02 * m2_21);
  double prd_02 = m1_00 * m2_02 + (m1_01 * m2_12) + (m1_02 * m2_22);
  double prd_10 = m1_10 * m2_00 + (m1_11 * m2_10) + (m1_12 * m2_20);
  double prd_11 = m1_10 * m2_01 + (m1_11 * m2_11) + (m1_12 * m2_21);
  double prd_12 = m1_10 * m2_02 + (m1_11 * m2_12) + (m1_12 * m2_22);
  double prd_20 = m1_20 * m2_00 + (m1_21 * m2_10) + (m1_22 * m2_20);
  double prd_21 = m1_20 * m2_01 + (m1_21 * m2_11) + (m1_22 * m2_21);
  double prd_22 = m1_20 * m2_02 + (m1_21 * m2_12) + (m1_22 * m2_22);

  /* determinant */
  double dtrmnt = prd_00 * (prd_11 * prd_22 - prd_12 * prd_21)
                - prd_01 * (prd_10 * prd_22 - prd_12 * prd_20)
                + prd_02 * (prd_10 * prd_21 - prd_11 * prd_20);

  /* print values */
  cout << fixed << setprecision(2) << endl
    << "Sums:" << endl
    << setw(8) << sum_00 << setw(8) << sum_01 << setw(8) << sum_02 << endl
    << setw(8) << sum_10 << setw(8) << sum_11 << setw(8) << sum_12 << endl
    << setw(8) << sum_20 << setw(8) << sum_21 << setw(8) << sum_22 << endl
    << "Differences:" << endl
    << setw(8) << dif_00 << setw(8) << dif_01 << setw(8) << dif_02 << endl
    << setw(8) << dif_10 << setw(8) << dif_11 << setw(8) << dif_12 << endl
    << setw(8) << dif_20 << setw(8) << dif_21 << setw(8) << dif_22 << endl
    << "Products:" << endl
    << setw(8) << prd_00 << setw(8) << prd_01 << setw(8) << prd_02 << endl
    << setw(8) << prd_10 << setw(8) << prd_11 << setw(8) << prd_12 << endl
    << setw(8) << prd_20 << setw(8) << prd_21 << setw(8) << prd_22 << endl
    << "Determinant: " << dtrmnt << endl;

  /* write to result */
  mat3 << fixed << setprecision(2)
    << "Sums:" << endl
    << setw(8) << sum_00 << setw(8) << sum_01 << setw(8) << sum_02 << endl
    << setw(8) << sum_10 << setw(8) << sum_11 << setw(8) << sum_12 << endl
    << setw(8) << sum_20 << setw(8) << sum_21 << setw(8) << sum_22 << endl
    << "Differences:" << endl
    << setw(8) << dif_00 << setw(8) << dif_01 << setw(8) << dif_02 << endl
    << setw(8) << dif_10 << setw(8) << dif_11 << setw(8) << dif_12 << endl
    << setw(8) << dif_20 << setw(8) << dif_21 << setw(8) << dif_22 << endl
    << "Products:" << endl
    << setw(8) << prd_00 << setw(8) << prd_01 << setw(8) << prd_02 << endl
    << setw(8) << prd_10 << setw(8) << prd_11 << setw(8) << prd_12 << endl
    << setw(8) << prd_20 << setw(8) << prd_21 << setw(8) << prd_22 << endl
    << "Determinant: " << dtrmnt << endl;

  mat1.close();
  mat2.close();
  mat3.close();

  return 0;
}
