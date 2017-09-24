void rotate(char array[], int length)
{
  char last = array[length - 1];
  for (int i = length - 1; i > 0; i--) {
    array[i] = array[i - 1];
  }
  array[0] = last;
}
