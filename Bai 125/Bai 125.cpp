#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	if (a < 0)
		a = -a;
	if (b < 0)
		b = -b;
	cout << "Gia tri tuyet doi cua a va b la: " << a << " va " << b;
	return 1;
}