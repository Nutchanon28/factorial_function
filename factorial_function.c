// จงเขียนฟังก์ชั่น factorial (Level 3)

#include <stdio.h>

int factorial(int number){ 
    return number == 0 ?  1 : number * factorial(number - 1);
}

int main()
{
    return 0;
}