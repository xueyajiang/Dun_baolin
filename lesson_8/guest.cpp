#include <iostream>
using namespace std;
int main()
{
	bool guests, dishes;
	cin >> guests >> dishes;
	if (guests && dishes)
	{
		cout << "Let's have meals." << endl;
	}
	else
	{
		cout << "Wait..." << endl;
	}
	return 0;
}
