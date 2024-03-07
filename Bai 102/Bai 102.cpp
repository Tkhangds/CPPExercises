#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float s = 0, e = 1;
	int i = 2;
	while (e >= pow(10, -6))
	{
		e = (float)1 / i;
		s = s + e;
		i = i + 2;
	}
	cout << "Tong S(n) = " << s;
	return 1;
}