/*Copyright(C) 2022, Anton Fesenko 202-TH №23
1. Визначте абстрактний клас трикутників і дві його реалізації: за трьома вершинами і за трьома сторонами.
2. Доповніть клас трикутників конструктором за основами його трьох медіан. Реалізуйте метод обчислення довільної медіани трикутника.
3. За довільною стороною трикутника знайдіть паралельну їй середню лінію.
4. Визначте ієрархію трикутник-прямокутний трикутник. Реалізуйте функції обчислення довжин радіусів вписаного і описаного кіл. */

#include <Windows.h>
#include <iostream>
#include "RightTriangle.h"
#include "Triangle.h"
#include "TrSides.h"
#include "TrApex.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Triangle* try_storony = new TrSides();
    try_storony->Read();
    try_storony->Calculate();

    Triangle* try_vershyny = new TrApex();
    try_vershyny->Read();
    try_vershyny->Calculate();

    Triangle* prtr = new RightTriangle();
    prtr->Read();
    prtr->Calculate();

    return 0;
}
