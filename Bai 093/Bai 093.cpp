#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int i = 1;
	float s = 0;
	while (i <= n)
	{
		s = sqrt(2 + s);
		i = i + 1;
	}
	cout << "S(n) = " << s;
	return 1;
}