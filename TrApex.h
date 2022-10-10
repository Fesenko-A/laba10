#pragma once
#include "Triangle.h"
#include <iostream>
using namespace std;

class TrApex : public Triangle {
public:

	TrApex() {	//	Конструктор за замовченням
		cout << "\nТрикутник за трьома вершинами" << endl;
		ax = 0;
		ay = 0;
		bx = 0;
		by = 0;
		cx = 0;
		cy = 0;
	}

	void Read() {
		cout << "Введіть координати точок трикутника" << endl;
		cout << "Ax = ";
		cin >> ax;
		cout << "Ay = ";
		cin >> ay;
		cout << "Bx = ";
		cin >> bx;
		cout << "By = ";
		cin >> by;
		cout << "Cx = ";
		cin >> cx;
		cout << "Cy = ";
		cin >> cy;
	}

	void Calculate() {
		AB = sqrt(pow((bx - ax), 2) - pow((by - ay), 2));
		BC = sqrt(pow((cx - bx), 2) - pow((cy - by), 2));
		AC = sqrt(pow((cx - ax), 2) - pow((cy - ay), 2));
		cout << endl;

		if (AB <= 0)
			cout << "AB = " << AB << " - трикутник не може існувати" << endl;
		else if (BC <= 0)
			cout << "BC = " << BC << " - трикутник не може існувати" << endl;
		else if (AC <= 0)
			cout << "AC = " << AC << " - трикутник не може існувати" << endl;
		else if (AB > BC + AC || AC > AB + BC || BC > AB + AC)
			cout << "\nТрикутника не існує :(" << endl;
		else {
			cout << "AB = " << AB << " см" << endl;
			cout << "BC = " << BC << " см" << endl;
			cout << "AC = " << AC << " см" << endl;

			if (AB == BC)
				cout << "Трикутник рівнобедрений - AB = BC\t" << AB << " = " << BC << endl;
			else if (AB == AC)
				cout << "Трикутник рівнобедрений - AB = AC\t" << AB << " = " << AC << endl;
			else if (AC == BC)
				cout << "Трикутник рівнобедрений - AC = BC\t" << AC << " = " << BC << endl;
			else if (AC == BC && BC == AB)
				cout << "Трикутник рівносторонній - сторони AB, BC i AC рівні між собою" << endl;
			else
				cout << "Трикутний довільний." << endl;

			cout << "Середня лінія KL (паралельна до АВ)" << "\nKL = " << AB / 2 << " см" << endl;
			cout << "Медіана AM (до сторони BC)" << "\nAM = " << sqrt(pow(AB, 2) / 2 + pow(AC, 2) / 2 - pow(BC, 2) / 4) << " см" << endl;
		}
	}
};