#include<stdio.h>

void main()
{
    float var,*ptr;
    var = 77.472;
    ptr = &var;
    printf("Address of var without using pointer = %u\n",&var);
    printf("Value of var = %f\n",*ptr);
    printf("Address of var using pointer = %u\n",ptr);
}
