#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double min, max;
	double score, sum;
	sum = 0;
	min = 100;
	max = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> score;
		sum = sum + score;
		if (score >= max)
		{
			max = score;
		}
		if (score < min)
		{
			min = score;
		}
	}
	sum = sum - max - min;
	cout << fixed << setprecision(2) << sum / 8 << endl;
	return 0;
}
