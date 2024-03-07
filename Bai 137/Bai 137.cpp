#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	if (x >= 5)
		cout << "f(x) = " << 2 * x * x + 5 * x + 9;
	else
		cout << "f(x) = " << -2 * x * x + 4 * x - 9;
	return 1;
}