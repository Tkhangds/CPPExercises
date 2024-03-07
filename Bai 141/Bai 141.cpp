#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, dt;
	cout << "Nhap n: ";
	cin >> n;
	dt = abs(n);
	while (dt >= 10)
		dt = dt / 10;
	cout << "Chu so dau tien cua n la: " << dt;
	return 1;
}