void sub(double m1[3][3], double m2[3][3], double difs[3][3])
{
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      difs[i][j] = m1[i][j] - m2[i][j];
    }
  }
}
