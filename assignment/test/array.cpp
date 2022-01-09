#include <iostream>
int main(){
int r,c;
int num[3][3]={ {1,2,3} ,{4,5,6} , {7,8,9}};
for (r=0; r<3; r++)
{
    for (c=0; c<3; c++)
    {
        if (r==c)
        num[r][c] = 0;
    }
}
}