#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int a = (int)3.14;
	double b = a;
	int i = 21;
	float c = static_cast<float>(i);
	cout<<c<<endl;
	cout<<a<<" "<<b;
	printf("a = %d, b = %f \n", a, b);
	return 0;
}
