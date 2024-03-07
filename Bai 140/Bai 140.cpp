#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a, b, c, d, x0, x1, x2;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
	d = b * b - 4 * a * c;
	if (d <= 0)
		if (d == 0)
		{
			x0 = -b / (2 * a);
			cout << "Pt co nghiem kep la: x1 = x2 = " << x0;
		}
		else
			cout << "Pt vo nghiem";
	else
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		cout << "Pt co 2 nghiem x1 va x2 la: " << x1 << " va " << x2;
	}
	return 1;
}