#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3;
	int min = 0;
    int n = -1;
	cin >> num1 >> num2 >> num3;
	if ((num1 <= num2) && (num1 <= num3))
	{
		min = num1;
	}
	else if ((num2 <= num1) && (num2 <= num3))
	{
		min = num2;
	}
	else if ((num3 <= num1) && (num3 <= num1))
	{
		min = num3;
	}
	else
	{
		min = num1;
	}
//	cout << min << endl;
	for (int i = 2; i < min; i++)
	{
//		cout << num1 % i << " " << num2 % i << " " << num3 % i << endl;
		if ((num1 % i == num2 % i) && (num1 % i == num3 % i))
		{
			n = i;
			break;
		}
	}
	
	cout << n << endl;
	return 0;
}
