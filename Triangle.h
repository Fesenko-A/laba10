#pragma once
using namespace std;

class Triangle {
protected:
	unsigned int AB, BC, AC;	//	Сторони трикутника
	int ax, ay, bx, by, cx, cy;	//	Координати вершин трикутника

public:

	Triangle() {	//	Конструктор за замовченням
		AB = 0;
		BC = 0;
		AC = 0;

		ax = 0;
		ay = 0;
		bx = 0;
		by = 0;
		cx = 0;
		cy = 0;
	}

	virtual void Read() = 0;

	virtual void Calculate() = 0;	//	Розрахунки в трикутниках
};