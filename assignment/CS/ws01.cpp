//1.ให้นักศึกษาเขียนโปรเเกรมรับคำาตัวเลข 4-8 หลัก พร้อมแสดงผลลัพตัวเลขโดตแต่ละตัวแยกกัน

//1
#include <iostream>
using namespace std;
int main()
{
	int i = 0;
	int number;
	int resto[10];
	int sum = 0;
	cout << "Enter Number (length 4-8):";
	cin >> number;
	while (number > 0)
	{	
		resto[i] = number%10;
		sum = sum + resto[i];
		number = number/10;
		i++;
	}
	for (i = i-1; i >= 0 ; i--)
	{
		cout << resto[i] << " ";
	}
	return 0;
}