#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap nam: ";
	cin >> n;
	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
		cout << "La nam nhuan";
	else
		cout << "Khong phai nam nhuan";
	return 1;
}