#include <iostream>
using namespace std;
bool whoIsThief(bool w, bool x, bool y, bool z)
{
	int sum = 0;
	bool flag = false;
	bool a = true, b = false, c = false, d = false;
	if (!w) sum++;
	if (y) sum++;
	if (z) sum++;
	if (!z) sum++;
	if (sum == 3) flag = true;
	return flag;
} 
int main()
{
	bool a = true, b = false, c = false, d = false;
	bool result;
	result = whoIsThief(a, b, c, d);
	if (result) cout << "It is A." << endl;
	else
	{
		a = false, b = true, c = false, d = false;
		result = whoIsThief(a, b, c, d);
		if (result) cout << "It is B." << endl;
		else
		{
			a = false, b = false, c = true, d = false;
			result = whoIsThief(a, b, c, d);
			if (result) cout << "It is C." << endl;
			else
			{
				a = false, b = false, c = false, d = true;
				result = whoIsThief(a, b, c, d);
				if (result) cout << "It is D." << endl;
			}
			
		}
	} 
	return 0;
}
