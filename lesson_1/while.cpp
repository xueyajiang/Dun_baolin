#include <iostream>
using namespace std;

int main()
{
	/* 本节课主要讲解 do  while 和 while */
	
	int a = 10;
	int i = 0;
	
	do {
		cout << "任务完成!!！" << endl; 
	}while(false);

	while (a > 0) //条件：a < 10  真； 假 
    {
		cout << "i = " << i << endl;
		cout << "a = " << a << endl; 
		cout<< "您好！" << endl;

		i = ++i;
		a = a - 1;
    }
    
	cout << "任务完成！" << endl; 
	return 0;
}
