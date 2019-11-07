#include <iostream>
using namespace std;
long long factorial(int n)
{
    if (n == 1)
		return 1;
	else
		return factorial(n -1) * n;
}
int main()
{
	int num;
	cin >> num;
	cout << factorial(num) << endl;
	return 0;
}
