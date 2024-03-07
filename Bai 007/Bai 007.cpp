#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float r;
	cout << "Nhap do F: ";
	cin >> r;
	float dt = (((float)5 / 9) * r - 32);
	cout << "Do C la: " << dt;
	return 1;
}