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
	if (dn == n)
		cout << "n la so doi xung";
	else
		cout << "n ko phai so doi xung";
	return 1;
}