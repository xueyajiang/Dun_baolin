#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	int i = 2;
	int flag = 0;
	cin >> a >> b >> c;
	while (i < 1000000)
	{
		if ((a % i == b % i) && (b % i == c % i))
		{
			flag = 1; 
			break;
		}
		i++;
	}
	if (flag)
	{
		cout << i << endl;
	}
	else
	{
		cout << "û���ҵ���С��������" << endl;
	}
	
	return 0;
}
