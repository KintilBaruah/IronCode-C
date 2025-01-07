#include <stdio.h>
int main(){
    int a=2;
    int b=6;
    int temp;
    printf("case 1: a = %d, b = %d\n", a, b);
    temp=a;
    a=b;
    b=temp;
    printf("case 2: a = %d, b = %d\n", a, b);

}