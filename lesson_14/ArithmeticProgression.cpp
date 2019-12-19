#include <iostream>
using namespace std;
int main()
{
	int a1, a2, n;
	int diff, an;
	cin >> a1 >> a2;
	cin >> n;
	diff = a2 - a1;
	an = a1 + diff * (n - 1); //1 4 7 10 13
	cout << an << endl;
	return 0;
}
