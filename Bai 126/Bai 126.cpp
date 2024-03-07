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
	float lc = a;
	if (lc < b)
		lc = b;
	cout << "Gia tri lon nhat giua a va b la: " << lc;
	return 1;
}