#include <iostream>
int x = 1;
int y =2;
void abcSort( int a, int b ){
    if ( a<b ){
        std::cout << b+a*2;
    
}
    else{
        std::cout << a+b%3;
    }
}

int main(){
abcSort(x,y);
return 0;
}