#include <iostream>

void magic64(int x[], int y[]){
    int i;
    for(i=0;1<5;i++){
        x[i] = y[i]*2;
        y[i] = x[i]+ 4;
    }
}
int main(){
    int a[]= {5,4,3,2,1},b[]= {1,2,3,4,5}, i;

    magic64(a,b);
    for ( i=0;i<5;i++)
        std::cout << a[i] << b[i] ;

    return 0;
}