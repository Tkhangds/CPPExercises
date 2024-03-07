#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float s = 0, e = 1;
	int i = 1, t= 0;
	while (e >= pow(10, -6))
	{
		t = t + i;
		e = (float)1 / t;
		s = s + e;
		i = i + 1;
	}
	cout << "Tong S(n) = " << s;
	return 1;
}