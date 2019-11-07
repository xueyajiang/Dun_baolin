#include <iostream>
using namespace std;
int main()
{
	double height;
	int count = 0;
	double sum = 0;
	cin >> height;
	while (count < 10)
	{
		sum = sum + height;
		height = height / 2;
		if (height == 0)
		    break;
		count++;
		cout << count << " " << height << " " << sum << endl; 
	}
	cout << sum << endl;
	cout << height << endl;
	return 0;
}
