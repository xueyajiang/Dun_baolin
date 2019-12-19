#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double a, b, c;
	double sum, min, max;
	cin >> a >> b >> c;
	sum = a * 10;
	max = sum - b * 9;
	min = sum - c * 9;
	cout << fixed << setprecision(2) << (sum - max - min) / 8 << endl;
	return 0;
}
