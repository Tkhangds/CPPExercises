#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float x2 = x * x;
	float x3 = x2 * x;
	float x5 = x2 * x3;
	float x10 = x5 * x5;
	float x11 = x10 * x;
	cout << "x^11 = " << x11;
	return 1;
}