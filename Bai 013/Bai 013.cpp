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
	float x7 = x5 * x2;
	cout <<"x^7 = " << x7;
	return 1;
}