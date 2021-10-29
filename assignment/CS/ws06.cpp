// 7. จงเขียนโปรแกรมคำนวนค่า factorial โดยรับคำจำนวนเต็มบวกจากผู้ใช้งาน จากนั้นใช้การเขียนโปรแกรม
// วนลูปในการคำนวณหาคำา factorial พร้อมแสดงผลลัพธ์
//7
#include <iostream>  
using namespace std;  
int main()  
{  
    int i,fact=1,number;    
    cout<<"Enter any Number: ";    
    cin>>number;    
  for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  cout << "Factorial of " << number << " is: " << fact << endl;  
  return 0;  
} 