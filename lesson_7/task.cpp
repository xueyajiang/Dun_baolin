#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	char name[50];
	int i;
	i = 0;
	cin.get(name, 50);
//	printf("%d", name[0]);
	while (name[i] != '\0')
	{
		if ((name[i] <= 'Z') && (name[i] >= 'A'))
		{
			char letter = name[i];
		    while(letter)
			{
				if (letter & 0x1)
				{
					cout << "+";
				}
				else
				{
					cout << "-";
				}
				letter = letter / 2;
             //   printf("%d,", letter);
			}
			cout << " ";
		}
		cout << endl;
		i++;
	}
	
	return 0;
}
