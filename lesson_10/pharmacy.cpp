#include <iostream>
using namespace std;
int main()
{
	int total;
	int n;
	int number;
	int people_num = 0;
	cin >> total;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> number;
		if (number <= total)
		{
			total = total - number;
		}
		else
		{
			people_num++;
		}
	}
	cout << people_num << endl;
	return 0;
} 
