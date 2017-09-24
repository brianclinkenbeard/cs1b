#include "header.h"

string input(string);

void kbdInput(dat* data)
{
  cin.ignore();
  data->term = input("term");
  data->title = input("class title");
  data->desc = input("class description");
  data->ticket = input("ticket number");
  data->loc = input("class location");
  data->time = input("class time (including AM or PM)");
  data->instrctr = input("name of the instructor");
  data->labloc = input("lab location");
  data->labtime = input("lab time");
  data->labinstrctr = input("name of the lab instructor");
  data->units = input("number of units");
  data->prereq = input("class prerequisites");
  data->grade = input("current grade");
}

string input(string query)
{
  cout << "Enter the " << query << ": ";
  string item;
  getline(cin, item);

  /* replace empty items with "NA" */
  if (item.empty()) {
    return "NA";
  } else {
    return item;
  }
}
