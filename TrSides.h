#pragma once
#include "Triangle.h"
#include <iostream>
using namespace std;

class TrSides : public Triangle {
public:

	TrSides() {	//	Конструктор за замовченням
		cout << "\nТрикутник по трьох сторонах" << endl;
		AB = 0;
		BC = 0;
		AC = 0;
	}

	void Read() {
		cout << "Введіть сторони трикутника" << endl;
		cout << "AB = ";
		cin >> AB;
		cout << "BC = ";
		cin >> BC;
		cout << "AC = ";
		cin >> AC;
		cout << endl;
	}

	void Calculate() {
		if (AB < BC + AC && BC < AC + AB && AC < AB + BC) {
			if (AB == BC)
				cout << "Трикутник рівнобедрений - AB = BC\t" << AB << " = " << BC << endl;
			else if (AB == AC)
				cout << "Трикутник рівнобедрений - AB = AC\t" << AB << " = " << AC << endl;
			else if (AC == BC)
				cout << "Трикутник рівнобедрений - AC = BC\t" << AC << " = " << BC << endl;
			else if (AB == BC && BC == AC)
				cout << "Трикутник рівносторонній - сторони AB, BC i AC рівні між собою" << endl;
			else
				cout << "Трикутний довільний." << endl;

			cout << "Середня лінія KL (паралельна до АВ)" << "\nKL = " << AB / 2 << " см" << endl;
			cout << "Медіана AM (до сторони BC)" << "\nAM = " << sqrt(pow(AB, 2) / 2 + pow(AC, 2) / 2 - pow(BC, 2) / 4) << " см" << endl;
		}
		else
			cout << "Трикутника не існує :(" << endl;
	}
};