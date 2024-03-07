#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float s = 4, e = 1;
	int i = 3, dau = -1;
	while (abs(e) >= pow(10, -6))
	{
		e = dau *(float)4 / i;
		s = s + e;
		dau = -dau;
		i = i + 2;
	}
	cout << "Pi = " << s;
	return 1;
}