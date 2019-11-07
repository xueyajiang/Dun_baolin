#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n;
	int num[200];
	int count = 0;
	char ch;
	int flag = 0;
    int rowCount = 0;
    int sum = 0;
	
	while(scanf("%d%c",&num[count], &ch))
	{
		count++;
		if (count >= 200)
		    break;
		if(ch=='\n'){
			break;
		}
	}
	n = num[0];
	for (int i = 1; i < count; i++)
	{
		sum += num[i];
	}
	if (n * n != sum)
	{
		return -1; 
	}
	
	for (int i = 1; i < count; i++)
	{
		for (int j = 0; j < num[i]; j++)
		{
			cout << flag;
			rowCount++;
			if (rowCount == n)
			{
				cout << endl;
				rowCount = 0;
			}
		}
		if (flag == 0)
		{
			flag = 1;
		}
		else
		{
			flag = 0;
		}
	}
	return 0;
}
