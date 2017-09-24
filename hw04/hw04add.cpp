void add(double m1[3][3], double m2[3][3], double sums[3][3])
{
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      sums[i][j] = m1[i][j] + m2[i][j];
    }
  }
}
