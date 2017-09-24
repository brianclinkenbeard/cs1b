#include "header.h"
#include <iomanip>

void prArray(double array[50])
{
	/* print ten elements per line */
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 10; j++) {
			cout << setw(5) << array[(i * 10) + j];
		}
		cout << endl;
	}
}
