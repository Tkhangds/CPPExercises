#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	float s = 0;
	int i = 1;
	cout << "Nhap n: ";
	cin >> n;
	while (i <= 2*n + 1)
	{
		s = s + (float)i / (i + 1);
		i = i + 2;
	}
	cout << "Tong s(n) = " << s;
	return 1;
}