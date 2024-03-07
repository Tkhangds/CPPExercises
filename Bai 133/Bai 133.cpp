#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x, y, z;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	cout << "Nhap z: ";
	cin >> z;
	if ((x + y) > z && (x + z) > y && (y + z) > x)
		if ((x == y) && (y == z))
			cout << "Tam giac deu";
		else
			if ((pow(x, 2) == pow(y, 2) + pow(z, 2)) || (pow(y, 2) == pow(x, 2) + pow(z, 2)) || (pow(z, 2) == pow(y, 2) + pow(x, 2)))
				if (x == y || y == z || z == x)
					cout << "Tam giac vuong can";
				else
					cout << "Tam giac vuong";
			else
				if (x == y || y == z || z == x)
					cout << "Tam giac can";
				else
					cout << "Tam giac thuong";
	else
		cout << "Khong phai tam giac";
	return 1;
}