//4. จงเขียนโปรแกรมโดยใช้คำสั่ง loop เพื่อสร้างรูปสามเหลี่ยมดังต่อไปนี้ โตยความสูงของสามเหลี่ยมขึ้นอยู่กับค่าตัวเลขที่ผู้ใช้ป้อนเข้ามา
//4
#include <iostream>
using namespace std;

int main()
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = rows; i >= 1; --i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}