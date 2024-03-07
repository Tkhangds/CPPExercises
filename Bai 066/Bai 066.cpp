#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, t, s = 0, flag = 0;
	cout << " Nhap n: ";
	cin >> n;
	t = n;
	int lc = n % 10;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = 1;
		t = t / 10;
	}
	if (flag == 1)
		cout << "So n co ton tai chu so chan";
	else
		cout << "So n khong ton tai chu so chan";
	return 1;
}