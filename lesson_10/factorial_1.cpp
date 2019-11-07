#include <iostream>
using namespace std;
int main()
{
	int num;
	long long sum = 1ll;
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		sum = sum * i;
	}
	cout << sum << endl;
	return 0;
}
