#include <iostream>
using namespace std;
int main()
{
	float x, length, current;
	int step;
	
	cin >> x;
	length = 0;
	current = 2;
	for (int i = 1; length < x; i++)
	{
		length = length + current; 
		current = current * 0.98;
		step = i;
	}
	cout << step << endl;
	return 0;
}
