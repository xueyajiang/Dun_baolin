#include "iostream"
using namespace std;
int main()
{
	int currentDay;
	int afterDay;
	int i;
	/* 1 2 3 4 5 6 0
	   1 2 3 4 5 6 0
	   1 2 3 4 5 6 0
	   1 2 3 4 5 6 0 */
	i = 0;
	currentDay = 3;
	while (i < 20)
	{
		afterDay = currentDay + 1;
		if (afterDay == 7)
		{
			afterDay = 0;
		}
		cout << "i = " << i << endl;
		cout << "after day: " << afterDay << endl;
		cout << "current day: " << currentDay << endl;
		currentDay = currentDay + 1;
		if (currentDay == 7) 
		{
			currentDay = 0;
		}
		i++;
	}
	cout << afterDay << endl;
}
