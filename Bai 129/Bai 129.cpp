#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a, b, c, temp;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	if (a > c)
	{
		temp = a;
		a = c;
		c = temp;
	}
	if (b > c)
	{
		temp = b;
		b = c;
		c = temp;
	}
	cout << "Gia tri a va b va c theo thu tu tang dan la: " << a << " va " << b << " va " << c;
	return 1;
}