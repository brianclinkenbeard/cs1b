#pragma once

/*
 * Brian Clinkenbeard | TTh 2:30 PM
 * Assignment 10
 */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct carType {
  string brand;
  string model;
  string year;
  string color;
};

struct carNav {
  carNav *next;
  carNav *prev;
  carType *data;
};
