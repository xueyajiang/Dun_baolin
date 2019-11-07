#include "iostream"
using namespace std;
int main()
{
	int num;
    int i;
    
    i = 1;
	num = 0;

    cout << "输出1000以内能被3整除的数：" << endl;
	while (num < 1000)
	{
		if (num % 3 == 0)
		{
			cout << num << "  ";
            i = i + 1;
		}
		if (i % 10 == 0)
		{
			cout << endl;
		}
		num = num + 3;
	}
	return 0;
}
