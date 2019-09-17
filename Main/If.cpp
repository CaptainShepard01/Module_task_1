﻿#include <stdio.h>
#include <iostream>
#include "MyLib.h"
using namespace std;

/* If10. Даны две переменные целого типа: A и B. Если их значения не равны, то
присвоить каждой переменной сумму этих значений, а если равны, то при-
своить переменным нулевые значения. Вывести новые значения перемен-
ных A и B.*/

void summ(int a, int b)
{
	a = (a + b);
	b = a;
	cout << a << " " << b << endl;
}

void if10()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "If10. Даны две переменные целого типа: A и B. Если их значения не равны, то присвоить каждой переменной сумму этих значений, " << endl;
	cout << "а если равны, то присвоить переменным нулевые значения.Вывести новые значения переменных A и B." << endl;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	if (a == b)
		cout << 0 << " " << 0 << endl;
	else summ(a, b);
}

/*If20.На числовой оси расположены три точки : A, B, C.Определить, какая из
двух последних точек(B или C) расположена ближе к A, и вывести эту точ -
ку и ее расстояние от точки A.*/

void if20()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "If20.На числовой оси расположены три точки : A, B, C.Определить, какая из двух последних точек(B или C) расположена ближе к A, " << endl;
	cout << "и вывести эту точку и ее расстояние от точки A." << endl;
	cout << "A = ";
	cin >> a;
	cout << "B = ";
	cin >> b;
	cout << "C = ";
	cin >> c;
	if (abs(a - b) < abs(a - c))
		cout << "B" << "Расстояние от точки А = " << abs(a - b) << endl;
	else cout << "C" << "Расстояние от точки А = " << abs(a - c) << endl;
}

/*If26°. Для данного вещественного x найти значение следующей функции f, при-
нимающей вещественные значения:
–x, если x ≤ 0,
f(x) = x2, если 0 < x < 2,
4, если x ≥ 2.*/

void if26()
{
    int x;
	cout << "If26°. Для данного вещественного x найти значение следующей функции f, принимающей вещественные значения : " << endl;
	cout << "f(x) = –x, если x ≤ 0," << endl;
	cout << "f(x) = x2, если 0 < x < 2," << endl;
	cout << "f(x) = 4, если x ≥ 2." << endl;
	cout << "x = ";
	cin >> x;
	if (x <= 0)
		cout << "-x = " << -x;
	else if ((x > 0) && (x < 2))
		cout << "x ^ 2 = " << x * x << endl;
	else cout << 4 << endl;
}

/*If28.Дан номер года(положительное целое число).Определить количество
дней в этом году, учитывая, что обычный год насчитывает 365 дней, а ви -
сокосный — 366 дней.Високосным считается год, делящийся на 4, за ис -
ключением тех годов, которые делятся на 100 и не делятся на 400 (напри -
	мер, годы 300, 1300 и 1900 не являются високосными, а 1200 и 2000 — яв -
	ляются).*/

void if28()
{
	setlocale(LC_ALL, "Russian");
	int a;
	int c;
	cout << "If28.Дан номер года(положительное целое число).Определить количество дней в этом году, учитывая, что обычный год насчитывает 365 дней, а високосный — 366 дней." << endl;
	cout << "Високосным считается год, делящийся на 4, за исключением тех годов, которые делятся на 100 и не делятся на 400." << endl;
	cout << "Год: ";
	cin >> a;
	if ((a % 4 == 0) && (a % 100 == 0) && (a % 400 == 0))
		c = 366;
	else c = 365;
	cout << c << " дней" << endl;
}