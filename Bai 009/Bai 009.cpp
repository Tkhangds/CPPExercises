#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float r;
	int n;
	cout << "Nhap r: ";
	cin >> r;
	cout << "Nhap n: ";
	cin >> n;
	float dt = r*r *((float)1/2) * n * sin(2*3.14 / n);
	cout << "Dien tich da giac la: " << dt;
	return 1;
}