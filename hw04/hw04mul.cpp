void mul(double m1[3][3], double m2[3][3], double prds[3][3])
{
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      prds[i][j] = m1[i][0] * m2[0][j]
                 + m1[i][1] * m2[1][j]
                 + m1[i][2] * m2[2][j];
    }
  }
}
