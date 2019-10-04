#include "std_lib_facilities.h"

struct Reading {
	int hour;
	double temperature;
};

struct Stats {
	double mean;
	double median;
};

vector<Reading> temps;

int main() {
	string iname = "raw_temps.txt";

	ifstream ist(iname);
	if (!ist) error("can't open input file ", iname);
	int hour;
	double temperature;

	while (ist >> hour >> temperature) {
		temps.push_back(Reading{ hour, temperature });
	}

	double sum = 0;
	double mean;
	for (int i = 0; i < temps.size(); i++) {
		sum += temps[i].temperature;
	}
	mean = sum / temps.size();
}