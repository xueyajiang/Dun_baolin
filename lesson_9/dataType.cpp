#include <iostream>
using namespace std;
int main()
{
	/* 本次课主要讲解：long long、short、long、sizeof()、unsigned */
	int a = 2147483647;
	cout << a << endl;
	a = a + 1;
	cout << a << endl;
	long long b; //64bits, 8个字节
	short year = 2018;
	short pages = 300;
	short age = 10;
	
	int c = 9;
	cout << sizeof(c) << endl;
	cout << sizeof(int) << endl;
	double d = 3.33;
	cout << sizeof(double) << endl;
	
	cout << USHRT_MAX << endl;
	cout << UINT_MAX << endl;
	cout << ULONG_MAX << endl;
	cout << ULLONG_MAX << endl; 
	return 0;
}
