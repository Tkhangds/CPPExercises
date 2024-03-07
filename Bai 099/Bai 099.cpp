#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int i = 1, t = 1;
	float s = 0;
	while (i <= n)
	{
		s = pow(i + s, (float)1 / (i+1));
		i = i + 1;
	}
	cout << "S(n) = " << s;
	return 1;
}