#include <iostream>
#include <climits>
using namespace std;
int main()
{
	unsigned long long sum = 0;
	unsigned long long each;
	int i = 0, j = 0;
	while (i < 64)
	{
        j = 1;
        each = 1;
		while (j <= i)
		{
			each = 2 * each;
			j++; 
		}
		sum = sum + each;
		i++;
	}
	cout << sum << endl;
	return 0;
}
