#include <iostream>
using namespace std;
int main()
{
    cout << "Are you sure to continue? It will delete "
	        "all your data. Y/N" << endl;
	char a;
	cin >> a;
	if ((a == 'y') || (a == 'Y'))
    {
    	cout << "Data deleted!" << endl;
	}
	else if ((a == 'n') || (a == 'N'))
	{
		cout << "Wise guy!" << endl;
	}
	else
	{
		cout << "Since you did not follow my instruction, "
		        "your data is still destroyed." << endl;
	}
    return 0;
}
