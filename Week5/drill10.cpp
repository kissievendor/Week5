#include "std_lib_facilities.h"

class Point {
public:
	Point(double _x, double _y);
	void set_pt(double _x, double _y);
	double get_pt_x() { return x; }
	double get_pt_y() { return y; }
private:
	double x;
	double y;
};

Point::Point(double _x, double _y) {
	x = _x;
	y = _y;
}

void Point::set_pt(double _x, double _y) {
	x = _x;
	y = _y;
}

vector<Point> original_pts;

void fill_original_pts() {
	cout << "Enter 7 point pairs in format x, y. \n"
		"To end your input type x " << '\n';
	while (original_pts.size() < 7) {
		double x, y;
		char comma;
		char check;
		cin >> check;

		if (check == 'x') {
			break;
		}
		else {
			cin.putback(check);
		}

		if (cin >> x >> comma >> y) {
			if (comma != ',') {
				cout << "x and y seperated by comma, not: " << comma << '\n';
			}
			else {
				Point pt(x, y);
				original_pts.push_back(pt);
			}
		}
		else {
			cin.clear();
			string check1;
			cin >> check1;
			cout << "Invalid value input: " << check1 << '\n';
		}
	}
}

int main()
try
{
	fill_original_pts();
}

catch (runtime_error e) {
	cout << e.what() << '\n';
}

catch (...) {
	cout << "Exiting" << '\n';
}