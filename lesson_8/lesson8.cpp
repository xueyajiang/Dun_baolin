#include <iostream>
using namespace std;
int main()
{
	/* 本次课主要讲解关系运算符：|| && ！ */
	bool a, b;
	cin >> a >> b;
	if (a || b)
	{
	    cout << "Door will be opened!" << endl;
	}
	else
	{
		cout << "Door will not be opened!" << endl;
	}
	return 0;
}
