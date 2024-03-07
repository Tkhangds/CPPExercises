#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x1, y1, x2, y2, x3, y3, a, b, c;
	cout << "Nhap xA: ";
	cin >> x1;
	cout << "Nhap yA: ";
	cin >> y1;
	cout << "Nhap xB: ";
	cin >> x2;
	cout << "Nhap yB: ";
	cin >> y2;
	cout << "Nhap xC: ";
	cin >> x3;
	cout << "Nhap yC: ";
	cin >> y3;
	a = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	b = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
	c = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	if ((a + b) > c && (b + c) > a && (c + a) > b)
		cout << "La ba dinh cua 1 tam giac";
	else
		cout << "Khong phai ba dinh cua 1 tam giac";
	return 1;
}