#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	/* ���ڿ���Ҫ���⣺������ */
	int commonWord;
	int allWord;
	int commonCount;
	int allCount;

	commonWord = 3500;
	allWord = 90000;
	commonCount = 0;
	allCount = 0;

	while (commonWord)
	{
		commonCount++;
		commonWord = commonWord / 2;
	}
	while (allWord)
	{
		allCount++;
		allWord = allWord / 2;
	}
	cout << commonCount << " " << allCount << endl;
	return 0;
}
