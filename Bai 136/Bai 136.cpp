#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x, y, i;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	i = x;
	cout << "Nam nhuan trong khoang x toi y la: ";
		while (i <= y)
		{
			if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
				cout << i << " ";
			i = i + 1;
		}
	return 1;
}