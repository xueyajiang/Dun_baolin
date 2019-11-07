#include <iostream>
using namespace std;
int main()
{
	int sum = 0;
	bool a = true, b = false, c = false, d = false;
	if (!a) sum++;
	if (c) sum++;
	if (d) sum++;
	if (!d) sum++;
	if (sum == 3) cout << "It is A." << endl;
	else
	{
		sum = 0;
		a = false, b = true, c = false, d = false;
		if (!a) sum++;
		if (c) sum++;
		if (d) sum++;
		if (!d) sum++;
		if (sum == 3) cout << "It is B." << endl;
		else
		{
			sum = 0;
			a = false, b = false, c = true, d = false;
			if (!a) sum++;
			if (c) sum++;
			if (d) sum++;
			if (!d) sum++;
			if (sum == 3) cout << "It is C." << endl;
			else
			{
				sum = 0;
				a = false, b = false, c = false, d = true;
				if (!a) sum++;
				if (c) sum++;
				if (d) sum++;
				if (!d) sum++;
				if (sum == 3) cout << "It is D." << endl;
			}
			
		}
	} 
	return 0;
}
