#pragma once

/*
 * Brian Clinkenbeard | CS1B | TTh 2:30 PM
 */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct dat {
  string term;
  string title;
  string desc; string ticket;
  string loc;
  string time;
  string instrctr;
  string labloc;
  string labtime;
  string labinstrctr;
  string units;
  string prereq;
  string grade;
};

struct lst;

struct nav {
  lst *list;
  nav *next;
  nav *prev;
  dat *data;
};

struct lst {
  int size;
  nav *first;
  nav *last;
};

int menu();
void addRec(lst*);
void kbdInput(dat*);
void delRec(lst*);
void disRec(lst*);
