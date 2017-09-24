#include "hw04.h"

int main()
{
  cout << "Brian Clinkenbeard | CS1B TTh 2:30 PM" << endl;

  ifstream mat1, mat2;

  /* open matrices */
  mat1.open("mat3x3_1.txt");
  mat2.open("mat3x3_2.txt");
  
  /* create arrays for each matrix */
  double m1[3][3], m2[3][3], m3[3][3];

  /* assign values */
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      mat1 >> m1[i][j];
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      mat2 >> m2[i][j];
    }
  }

  int choice;

  while (choice != 5) {
    /* get user choice */
    choice = menu();

    switch (choice) {
    case 1:
      add(m1, m2, m3);
      cout << "Sums:" << endl;
      break;
    case 2:
      sub(m1, m2, m3);
      cout << "Differences:" << endl;
      break;
    case 3:
      mul(m1, m2, m3);
      cout << "Products:" << endl;
      break;
    case 4:
      double prd[3][3];
      mul(m1, m2, prd);
      det(prd);
      break;
    case 5:
      /* do nothing */
      break;
    default:
      cout << "Invalid choice." << endl;
      break;
    }

    if (choice > 0 && choice < 4) {
      /* output the result matrix */
      for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
          cout << fixed << setprecision(2) << setw(8) << m3[i][j];
        }
        cout << endl;
      }
    }
  }

  mat1.close();
  mat2.close();

  return 0;
}
