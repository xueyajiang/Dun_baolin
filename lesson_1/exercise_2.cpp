#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int targetNum;
	int inputNum = 0;
	
	srand(time(0));
	targetNum = rand() % 100 + 1;

	while(inputNum != targetNum)
	{
		cout << "请输入猜测的数字：" << endl;
	    cin >> inputNum;
		if (inputNum > targetNum)
		{
			cout << "你可以再猜小点！" << endl;
		}
		else if (inputNum < targetNum)
		{
			cout << "你可以再猜大点！" << endl; 
			
		}
		else
		{
			cout << "你太厉害了！你猜对了。" << endl;
//			break; 
		} 
	}
	return 0;
} 
