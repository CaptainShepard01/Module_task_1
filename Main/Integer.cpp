#include <stdio.h>
#include <iostream>
#include "MyLib.h"
using namespace std;

/*Integer10. ���� ����������� �����. ������� ������� ��� ��������� �����
(�������), � ����� � ��� ������� ����� (�������). */

void int10()
{
	setlocale(LC_ALL, "Russian");
	int a, ed, des;
	cout << "Integer10. ���� ����������� �����. ������� ������� ��� ��������� ����� (�������), � ����� � ��� ������� �����(�������)." << endl;
	cout << "������� ����������� �����: ";
	cin >> a;
	ed = a % 10;
	des = a / 10 - (a / 100) * 10;
	cout << ed << endl << des << endl << endl << endl;
}

/* Integer17. ���� ����� �����, ������� 999. ��������� ���� �������� �������
������ � ���� �������� ������ ������� �� �������, ����� �����, �������-
�������� ������� ����� � ������ ����� �����.*/

void int17()
{
	setlocale(LC_ALL, "Russian");
	cout << "Integer17. ���� ����� �����, ������� 999. ��������� ���� �������� ������� ������ � ���� �������� ������ ������� �� �������, " << endl;
	cout << "����� �����, ��������������� ������� ����� � ������ ����� �����." << endl;
	int a;
	cout << "������� �����, ������� ������ 999: ";
	cin >> a;
	cout << (a % 1000) / 100 << endl << endl << endl;
}

/* Integer24. ��� ������ ������������� ��������� �������: 0 � �����������,
1 � �����������, 2 � �������, �, 6 � �������. ���� ����� ����� K, ��-
����� � ��������� 1�365. ���������� ����� ��� ������ ��� K-�� ��� ����,
���� ��������, ��� � ���� ���� 1 ������ ���� �������������.*/


void int24()
{
	setlocale(LC_ALL, "Russian");
	cout << "Integer24. ��� ������ ������������� ��������� �������: 0 � �����������, 1 � �����������, 2 � �������, �, 6 � �������." << endl;
	cout << " ���� ����� ����� K, ������� � ��������� 1�365.���������� ����� ��� ������ ��� K - �� ��� ����, " << endl;
	cout << "���� ��������, ��� � ���� ���� 1 ������ ���� �������������." << endl;
	int a;
	cout << "������� �: ";
	cin >> a;
	cout << "��� ���� � ������� = " << a % 7 << endl << endl << endl;
}

/*Integer28. ��� ������ ������������� ��������� �������: 1 � �����������,
2 � �������, �, 6 � �������, 7 � �����������. ���� ����� ����� K, ��-
����� � ��������� 1�365, � ����� ����� N, ������� � ��������� 1�7. ��-
�������� ����� ��� ������ ��� K-�� ��� ����, ���� ��������, ��� � ����
���� 1 ������ ���� ���� ������ � ������� N. */

void int28()
{
	setlocale(LC_ALL, "Russian");
	int N, K, x, y;
	cout << "Integer28. ��� ������ ������������� ��������� �������: 1 � �����������, 2 � �������, �, 6 � �������, 7 � �����������.���� ����� ����� K, ������� � ��������� 1�365, � ����� ����� N, ������� � ��������� 1�7." << endl;
	cout << "���������� ����� ��� ������ ��� K - �� ��� ����, ���� ��������, ��� � ���� ���� 1 ������ ���� ���� ������ � ������� N." << endl;
	cout << "������� �: ";
	cin >> K;
	cout << "������� N: ";
	cin >> N;
	x = (9 - N) % 7;
	y = (K - x) % 7 + 1;
	if (y == 0)
		y = y + 7;
	cout << y << endl << endl << endl;
}

/* Integer30. ��� ����� ���������� ���� (����� ������������� �����). ������-
���� ��������������� ��� ����� ��������, ��������, ���, � �������, ��-
����� 20 �������� ��� 1901 ���.*/

void int30()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Integer30. ��� ����� ���������� ���� (����� ������������� �����). ���������� ��������������� ��� ����� ��������, ��������, " << endl;
	cout << "���, � �������, ������� 20 �������� ��� 1901 ���." << endl;
	cout << "������� ���r: ";
	cin >> a;
	cout << "�������� = " << (a - 1) / 100 + 1 << endl << endl << endl;
}