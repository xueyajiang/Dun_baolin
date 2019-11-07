#include <iostream>
#include <cfloat>
using namespace std;
int main()
{
	/* 本节课主要讲解：数据类型 float  double */
	/* 之前学习的数据类型：int  char  bool */
	float pi = 3.14F;
	float quarter = 0.25F;
	float hundred_more = 100.001F;
	float sqrt2 = 1.41421F;
	float lightspeed = 3.0E8F; //3.0 * 10^8
	float light = 2.15E-2F; // 2.15 * 10^-2 = 0.0215
    int radius = 10;
    unsigned int a = -12;
    cout << a << endl;
//    unsigned short 
//    unsigned char 
	cout << pi * radius * radius << endl;
	
	cout << FLT_MAX << endl;
	cout << FLT_MIN << endl;
	
	cout << DBL_MAX << endl;
	cout << DBL_MIN << endl;
	
	double atom_radius = 1.0E-9;
	return 0;
}
