#include <iostream>
using namespace std;
int main()
{
	/* 算术运算：+ - * / % () ++ -- */
	/* 重点：%   ++   -- */ 
	int a = 6;
	int b = 2;
//	char c = 'a';
	cout << a << " + " << b << " = " << a + b << endl; 
	cout << a << " - " << b << " = " << a - b << endl;
	cout << a << " * " << b << " = " << a * b << endl;
	cout << a << " / " << b << " = " << a / b << endl;
/*	int c = 3;
	cout << a - b + c << endl;  // 7
	cout << a - b * c << endl;  // 0
	cout << (a - b) * c << endl; //12
	
	int d = 23;
	int e = 4;
	cout << d / e << endl;
	cout << d % e << endl;
	
	cout << 10 % 3 << endl; //1
	cout << 9 % 3 << endl; // */
	
	int a1 = 1;
	int b1 = 1;
	
	cout << a1++ << " " << ++b1 << endl;
	
	int a2 = 10;
	while (a2 > 0)
	{
		cout << a2-- << endl;
	}
	cout << "任务完成！" << endl;
	
	int a3 = 10;
	while (a3) cout << a3-- << endl;
	cout << "任务完成1！" << endl; 
	
	int a4 = 10;
	int b4 = 5;
	cout << a4 - (b4++) << endl; //10 - 5 = 5
	//b4 = 6
	cout << a4 - (++b4) << endl; //10 - 7 = 3
	//b4 = 7

	return 0;
}
