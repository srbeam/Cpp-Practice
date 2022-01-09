#include <iostream>

int b(int num){
    return num%10;
}
int c(int num){
    num =(num/10);
    return num%10;
}
int a(int num){
    int result = b(num) + c(num);
    return result;
}

int main (){
    int number , sum;
    std::cin >> number;
    sum = a(number);
    std::cout << sum;
return 1;
}