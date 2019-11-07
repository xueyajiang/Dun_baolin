#include <iostream>
#include <climits>
using namespace std;
int main()
{
	unsigned long long a = 5678901234;
	unsigned long long b = 123456789123456789;
	unsigned int c = 1314;
	cout << sizeof(a) << " " << sizeof(b) << " " << sizeof(c) << endl;
	cout << sizeof(char) << " " << sizeof(double) << " " << sizeof(bool) << " " << sizeof(int) << " " << sizeof(short) << " " << sizeof(long) << " " << sizeof(long long) << endl;
	cout << (a * b) % c << endl;
	cout << ((a % c) * (b % c)) %c << endl;
	return 0;
}
