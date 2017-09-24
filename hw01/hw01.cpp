#include "hw01.h"

int main()
{
  int cap;
  int mpkw;

  cout << "Enter the battery capacity of the vehicle in KWh:\n";
  cin >> cap;
  cout << "Enter the miles per KWh of the vehicle:\n";
  cin >> mpkw;

  cout << "The vehicle can travel " << cap * mpkw << " miles without recharging.\n";

  return 0;
}
