#include <iostream>
#include "basicmath.h"

int main()
{
	using std::cout;
	cout << "Hi!\r\n";
	cout << "2+2=" << add(2,2) << "\r\n";
	cout << "2-2=" << subtract(2,2) << "\r\n";
	cout << "2*2=" << multiply(2,2) << "\r\n";
	cout << "2/2=" << divide(2,2) << "\r\n";
	return 0;
}
