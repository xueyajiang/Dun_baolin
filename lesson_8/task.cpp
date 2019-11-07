#include <iostream>
using namespace std;
int main()
{
	int chinese, math;
	cin >> chinese >> math;
	if ((chinese < 60) || (math < 60))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}
