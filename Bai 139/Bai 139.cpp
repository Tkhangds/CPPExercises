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
	if (a == 0)
		if (b == 0)
			cout << "Pt co vo so nghiem";
		else
			cout << "Pt vo nghiem";
	else
		cout << "Pt co nghiem la: x = " << -b / a;
	return 1;
}