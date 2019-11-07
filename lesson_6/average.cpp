#include <iostream>
using namespace std;
int main()
{
	int n;
	double average, sum, x;
	
	n = 0;
	sum = 0;
	cin >> x;
	while(x)
	{
	    n++;
	    sum += x;
		cin >> x;	
	}
	average = sum / n;
	
	cout << average << endl;
	return 0;
} 
