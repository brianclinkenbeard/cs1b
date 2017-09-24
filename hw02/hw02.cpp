#include "hw02.h"

int main()
{
	cout << "Brian Clinkenbeard | CS1B TTh 2:30-5:50 PM" << endl;

	const double k = 6.67e-11;
	double m1;
	double m2;
	double dist;

	/* get mass of both bodies */
	cout << "Enter the mass of the first body in kilograms: ";
	cin >> m1;
	cout << "Enter the mass of the second body in kilograms: ";
	cin >> m2;

	/* get distance */
	cout << "Enter the distance between the bodies in meters: ";
	cin >> dist;

	/* calculate gravity */
	cout << "The force between the bodies is " << k * m1 * m2 / (dist * dist) << " N" << endl;

	return 0;
}
