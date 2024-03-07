#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, s = 0, i = 1;
	cout << "Nhap n: ";
	cin >> n;
	while (i <= n)
	{
		s = s + i;
		i = i + 1;
	}
	cout << "Tong s(n) = " << s;
	return 1;
}