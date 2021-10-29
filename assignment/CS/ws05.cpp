//6. ประชากรของเมือง A มีจำนวนน้อยกว่าประชากรของเมือง 8 อย่างไรก็ตาม จำนวนประชากรของเมือง A มี
// การเติบโตเร็วกว่าจำนวนประชากร ของเมือง B เขียนโปรแกรมที่แจ้งให้ผู้ใช้ปีอนจำนวนประชากรและอัตรา
// การเติบโตของแต่ละเมือง โปรแกรมแสดงผลลัทธ์อีกกี่ปีประชากรของเมือง A จะมากกว่าหรือเท่ากับประชากร
// ของเมือง B (ตัวอย่างอินพุดคือ: ประซากรของเมือง A 5,000 อัตราการเติบโตของเมือง A 496 ประชากรของ
// เมือง B 8,000 และอัตราการเติบโตของเมืองบี 2%)

#include <iostream>

using namespace std;

int main() {

    int p1, p2;
    float g1, g2;


    cout << "Enter population of City A: ";
    cin >> p1;

    cout << "Enter population of City B: ";
    cin >> p2;

    cout << "Enter grow rate of City A(%): ";
    cin >> g1;

    cout << "Enter grow rate of City B(%): ";
    cin >> g2;
    
    int year = 0;
    
    if (p1 <= p2 && g1 > g2) {
        do {      
            (p1 = ((g1 / 100) * p1) + p1);
            (p2 = ((g2 / 100) * p2) + p2);
        
        if(p1>=p2){
            break;
        
        }else{
            year++;
        }
            
   } while (p1 <= p2);

      cout << year << "Years " ;

   }

   return 0;
}