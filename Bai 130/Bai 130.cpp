#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x, y, z, temp;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	cout << "Nhap z: ";
	cin >> z;
	if ((x + y) > z && (x + z) > y && (y + z) > x)
		cout << "Co ton tai 1 tam giac";
	else
		cout << "Khong ton tai 1 tam giac";
	return 1;
}
