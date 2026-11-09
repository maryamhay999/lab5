

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a, s;
	cout << "print the area of a hexagon :";
	cout << "\n--------------------------------------";
	cout << "\ninput the side of the hexagon :";
	cin >> s;
	a = (6 * pow(s, 2)) / (4 * tan(M_PI / 6));
	cout << "\nthe area of the hexagon is :" << a;
	return 0;
}


