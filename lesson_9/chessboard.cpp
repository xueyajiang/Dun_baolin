#include <iostream>
using namespace std;
int main()
{
	unsigned long long sum = 1;
	unsigned long long each = 1;
	int i = 0, j = 0;
	while (i < 10)
	{

		each = 1 << i;
//		cout << each << endl; 

//		cout << "i = " << i <<" " << sum << " " << each << endl;
		sum = sum + each;
		i++;
	}
	cout << sum - 1 << endl;
	return 0;
}
