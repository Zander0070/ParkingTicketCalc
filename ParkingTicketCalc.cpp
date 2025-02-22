#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main() {
	float total = 0 ;
	int catagory,hours;
	string SStruck;
	bool truck = false;

	cout << "Welcome to the parking system" << endl;
	cout << "------------------" << endl;
	cout << "Are you a truck (yes/no)";
	cin >> SStruck;

	if (SStruck == "yes") {
		//truck = true;
		total++;
	}
	else {
		//truck = false;
	}

	cout << "-------------------" << endl;
	cout << "How many hours have you been parked here : ";
	cin >> hours;

	if (hours < 2) {
		total = total + 2;
		catagory = 1;
	}
	else if (hours < 3 && hours > 1) {
		total = total + 3;
		catagory = 1;
	}
	else if (hours < 6 && hours > 2) {
		total = total + 5;
		catagory = 1;
	}
	else if (hours > 5) {
		total = total + 10;
		catagory = 1;
	}

	switch (catagory) {
	case(1):
		cout << "Please note you need to pay " << total << endl;
		break;
	case(2):
		cout << "Please note you need to pay " << total << endl;
		break;
	case(3):
		cout << "Please note you need to pay " << total << endl;
		break;
	case(4):
		cout << "Please note you need to pay R" << total << endl;
		break;
	default:
		cout << "Please enter a number";
	}

	return 0;

}
