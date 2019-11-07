#include <iostream>
using namespace std;
int main()
{
	/* 本次课主要讲解循环：for while */
	for (int i = 1; i <= 10; i++)
	{
		cout << i * i << endl;
		cout << "NEW TURN BEGINS..." << endl;
	}
	int i = 1;
	while (i <= 10)
	{
		cout << i * i << endl;
		i++;
	}
	return 0;
}
