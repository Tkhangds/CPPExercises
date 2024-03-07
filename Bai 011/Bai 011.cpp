#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x1, y1, x2, y2, x3, y3, a, b, c;
	cout << "Nhap x1: ";
	cin >> x1;
	cout << "Nhap y1: ";
	cin >> y1;
	cout << "Nhap x2: ";
	cin >> x2;
	cout << "Nhap y2: ";
	cin >> y2;
	cout << "Nhap x3: ";
	cin >> x3;
	cout << "Nhap y3: ";
	cin >> y3;
	a = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	b = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
	c = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	float p = (a + b + c)/2;
	float s = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "Dien tich tam giac la: " << s;
	return 1;
}