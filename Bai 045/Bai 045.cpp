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
	while (i <= n)
	{
		s = s + (float)1 / (sqrt(i) + sqrt((i + 1)));
		i = i + 1;
	}
	cout << "Tong s(n) = " << s;
	return 1;
}