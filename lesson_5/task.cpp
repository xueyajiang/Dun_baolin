#include <iostream>
using namespace std;
int main()
{
	int inputNum;
	int transferNum;
	int temp;
	int differ;
	
	transferNum = 0;
	cin >> inputNum;
	temp = inputNum;

	while (temp > 0)
    {
    	int bitNum;
    	bitNum = temp % 10;
        transferNum = transferNum * 10 + bitNum;
		temp = temp / 10;
	}
	
	differ = inputNum - transferNum;
	cout << differ << endl;
	
	return 0;
}
