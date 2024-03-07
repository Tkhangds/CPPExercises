#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float s = 1, e = 1;
	int i = 1, m = 1;
	while (e >= pow(10, -6))
	{
		m = m * i;
		e = (float)1 / m;
		s = s + e;
		i = i + 1;
	}
	cout << "Tong e = " << s;
	return 1;
}