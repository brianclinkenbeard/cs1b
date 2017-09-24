#pragma once

/*
 * Brian Clinkenbeard | CS1B | TTh 2:30 PM
 */

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int menu();

class matrix {
  public:
    matrix(int, int);
    matrix(const matrix&);
    int getRows();
    int getColumns();
    void input();
    /* operators to overload */
    friend matrix operator+(const matrix &mat1, const matrix &mat2);
    friend matrix operator-(const matrix &mat1, const matrix &mat2);
    friend matrix operator*(const matrix &mat1, const matrix &mat2);
    friend ostream& operator<<(ostream&, const matrix&);
    /* destructor */
    ~matrix();
  private:
    int rows;
    int columns;
    double **mat;
};
