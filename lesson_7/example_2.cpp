#include <iostream>
using namespace std;
int main()
{
	int n, m, c = 0, flag = 0;
	cin >> n;
	while(cin >> m)
	{
		while(m)
		{
			c++;
			if (flag)
			    cout << 1;
			else
			    cout << 0;
			if (c % n == 0)
			    cout << endl;
			m--;
		}
		flag = !flag;
	}
	cout << endl;
	return 0;
}
