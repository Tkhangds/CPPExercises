#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, dn = 0, dv;
	cout << "Nhap n: ";
	cin >> n;
	int i = n;
	while (i != 0)
	{
		dv = i % 10;
		dn = dn * 10 + dv;
		i = i / 10;
	}
	cout << "Chu so dao nguoc cua n la: " << dn;
	return 1;
}