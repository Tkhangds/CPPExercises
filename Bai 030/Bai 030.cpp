#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	float s = 0;
	int i = 2;
	cout << "Nhap n: ";
	cin >> n;
	while (i <= 2*n)
	{
		s = s + (float)1 / i;
		i = i + 2;
	}
	cout << "Tong s(n) = " << s;
	return 1;
}