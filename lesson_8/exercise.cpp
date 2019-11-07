#include <iostream>
using namespace std;
int main()
{
	double left, right;
	double number;
	cout << "请输入2个数："; 
	cin >> left >> right;
	cout << "请输入要判定的数：";
	cin >> number;
	if (left > right)
	{
		double temp = left;
		left = right;
		right = temp;
	}
	if ((number < left) || (number > right))
	{
		cout << "No" << endl;
	}
	else
	{
		cout << "Yes" << endl;
	}
	
	return 0;
}
