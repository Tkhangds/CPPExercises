#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float s = 4 - (float)2/4 -(float)1/5 - (float)1/6, e = s;
	int i = 1, t = 1;
	while (abs(e) >= pow(10, -6))
	{
		t = t * 16;
		e = (4 / (8 * i + 1) - 2 / (8 * i + 4) - 1 / (8 * i + 5) - 1 / (8 * i + 6)) / t;
		s = s + e;
		i = i + 1;
	}
	cout << "Pi = " << s;
	return 1;
}