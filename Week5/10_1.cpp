#include "std_lib_facilities.h"

/* Ch 10 Exercise 1
Program that produces the sum of all the numbers 
in a file of whitespace-separated integers. 


int main() {
	string iname = "filename.txt";
	ifstream ist(iname);
	if (!ist) error("can't open input file ", iname);

	double total = 0;
	double value;

	while (ist >> value) {
		total += value;
	}
	cout << total;
}
*/