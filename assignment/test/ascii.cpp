#include <iostream>
int main(){
// ASCII Value of 'T' is 84
// ASCII Value of 'X' is 88
// ASCII Value of 'Q' is 81
int ch = 84;
int i = 1;
while (i)
{
    if(ch>88)
    ch++;
    else if(ch<81)
    i++;
    else
    --ch;
    std::cout << ch ;
    i=0;
}
}