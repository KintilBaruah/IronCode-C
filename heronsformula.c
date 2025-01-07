#include <stdio.h>
#include <math.h>// we will find area of triangle using heron's formula
int main(){
    int a=4;
    int b=9;
    int c=2;
    int s = a+b+c/2;// semipemeter 
    int area= sqrt(s*(s-a)*(s-b)*(s-c));
    printf("the area of triangle %d",area);

}