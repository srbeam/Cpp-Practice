// 8. จงเขียนโปรแกรมโดยใช้คำสั่ง Loop เพื่อสร้างรูปสามเหลี่ยมดังต่อไปนี้ 
// โดยความสูงของสามเหลี่ยมขึ้นอยู่กับค่าตัวเลขที่ผู้ใช้ป้อนเข้ามา
//8
#include <iostream>
using namespace std;

int main()
{
    int rows;

    cout << "Please input a number: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}