#include <string>
using namespace std;

void userinput(string input, char output[])
{
  for (int i = 0; i < input.length(); i++) {
    output[i] = input.at(i);
  }
}
