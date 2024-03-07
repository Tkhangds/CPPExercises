#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b, temp;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "Gia tri cua a va b dao nguoc la: " << a << " va " << b;
	return 1;
}