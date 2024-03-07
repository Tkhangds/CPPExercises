#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	if (x >= 0)
		if (x <= 1)
			cout << "f(x) = " << 5 * x - 7;
		else
			cout << "f(x) = " << 2 * pow(x, 3) + 5 * pow(x, 2) - 8 * x + 3;
	else
		cout << "f(x) = " << -2 * x * x * x + 6 * x + 9;
	return 1;
}