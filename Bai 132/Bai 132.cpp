#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float xA, yA, xB, yB, xC, yC, xM, yM, SABC, SMAB, SMBC, SMCA;
	cout << "Nhap xA: ";
	cin >> xA;
	cout << "Nhap yA: ";
	cin >> yA;
	cout << "Nhap xB: ";
	cin >> xB;
	cout << "Nhap yB: ";
	cin >> yB;
	cout << "Nhap xC: ";
	cin >> xC;
	cout << "Nhap yC: ";
	cin >> yC;
	cout << "Nhap xM: ";
	cin >> xM;
	cout << "Nhap yM: ";
	cin >> yM;
	SABC = ((float)1 / 2) * abs(xA * yB + xB * yC + xC * yA - xB * yA - xC * yB - xA * yC);
	SMAB = ((float)1 / 2) * abs(xM * yA + xA * yB + xB * yM - xA * yM - xB * yA - xM * yB);
	SMBC = ((float)1 / 2) * abs(xM * yB + xB * yC + xC * yM - xB * yM - xC * yB - xM * yC);
	SMCA = ((float)1 / 2) * abs(xM * yC + xC * yA + xA * yM - xC * yM - xA * yC - xM * yA);
	if (SABC ==(SMAB + SMBC +SMCA))
		cout << "Diem M nam trong tam giac ABC";
	else
		cout << "Diem M khong nam trong tam giac ABC";
	return 1;
}