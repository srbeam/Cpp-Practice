//2. ให้นักศึกษาเขียนโปรแกรมรับคำชุดตัวเข 4 หลัก (ตัวอย่างเช่น 2514) จากผู้ใช้งาน โปรแกรมทำการแสดงผลรวมของชุตตัวเลขที่รับจากผู้ใช้งาน
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, m;
    cout << "Enter Number (length 4): ";
    cin >> n;
    while (n > 0)
    {
        m = n % 10;
        sum = sum + m;
        n = n / 10;
    }
    cout << sum << endl;
    return 0;
}