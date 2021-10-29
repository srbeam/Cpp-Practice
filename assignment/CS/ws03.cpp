//3.จงเขียนโปรแกรมรับตัวเลขจากผู้ใช้งาน 2 ตัว จากนั้นให้แสดงผลลัทธ์ 3 เท่า และ 5 เท่าของตัวเลขแต่ละตัว
//3
#include <iostream>
using namespace std; 
int main(){
    int num1, num2;
    cout << "Enter Number 1 : " ;
    cin >> num1;
    cout << num1 << " multiples of 3 is " << num1*3 << endl;
    cout << num1 << " multiples of 5 is " << num1*5 << endl;
    
    cout << "Enter Number 2 : " ;
    cin >> num2;
    cout << num2 << " multiples of 3 is " << num2*3 << endl;
    cout << num2 << " multiples of 5 is " << num2*5 << endl;
    
    return 0;
} 
