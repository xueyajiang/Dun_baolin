#include <iostream>
using namespace std;
int main()
{
	int n, m, x;
	int count = 0;
	cin >> n;
	cin >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if (x == m)
			count++;
	}
	cout << count << endl;
	return 0;
}
