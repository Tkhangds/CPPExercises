#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float r;
	cout << "Nhap r: ";
	cin >> r;
	float dt = 3.14 * pow(r, 2);
	cout << "Dien tich duong tron la: " << dt;
	return 1;
}