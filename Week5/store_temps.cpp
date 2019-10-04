/*Chapter 10 Exercise 2
#include "std_lib_facilities.h"

struct Reading {
	int hour;
	double temperature;
};

int main()
{
	vector<Reading> temps;

	string oname = "raw_temps.txt";
	int hour;
	double temperature;
	
	cout << "Please give hour and temperature: \n";

	while (temps.size() < 5) {
		cin >> hour >> temperature;
		if (hour < 0 || 23 < hour) error("hour out of range");
		temps.push_back(Reading{ hour, temperature });
	}

	ofstream ost{ oname };
	if (!ost) error("can't open output file ", oname);

	for (int i = 0; i < temps.size(); ++i)
		ost << '(' << temps[i].hour << ', '
		<< temps[i].temperature << ")\n";
}
*/