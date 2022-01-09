#include <iostream>

int i = 10;
int j = 0;
int n=0;
 int testVar(int j){
     int n = 5;
     i=4;
     return n*j*i;
 }
 
 int main(){
     int m;
     m= testVar(i);
     std :: cout << i ;
     std :: cout << m ;
 }