#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, t, s = 0, dem = 0;
	cout << " Nhap n: ";
	cin >> n;
	t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			s = s + dv;
		t = t / 10;
	}
	cout << "Tong cac chu so chan cua n la: " << s;
	return 1;
}