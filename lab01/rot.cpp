#include "header.h"

int main()
{
  /* get a word from the user */
  string word;
  cout << "Enter a word:" << endl;
  cin >> word;

  /* create array from word */
  char array[word.length() - 1];
  userinput(word, array);

  /* output rotations */
  cout << endl << "Press Enter to rotate:";
  cin.ignore();
  for (int i = 0; i < word.length(); i++) {
    cin.ignore();
    rotate(array, word.length());
    cout << array;
  }
  cout << endl;

  return 0;
}
