#include <iostream>
using namespace std;
int main()
{
	double left, right;
	double number;
	cout << "������2������"; 
	cin >> left >> right;
	cout << "������Ҫ�ж�������";
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
