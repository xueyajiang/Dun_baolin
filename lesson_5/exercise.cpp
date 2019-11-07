#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int num;
    
    cout << "请输入元、角：";
    cin >> a >> b;
    num = (a * 10 + b) / 19;
    cout << "最多能买: " << num << "支" << endl;
    return 0;
}
