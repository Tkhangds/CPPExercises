#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a, b,temp;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	cout << "Gia tri a va b theo thu tu tang dan la: " << a << " va " << b;
	return 1;
}