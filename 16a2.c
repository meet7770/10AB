#include<stdio.h>   
  
void main()  
{  
    int N;
    int a[N], i, p = 0, n = 0, z = 0;  
  
    printf("how many numbers you want to enter? =");
	scanf("%d",&N);  
    for(i = 0; i < N; i++)  
        scanf("%d", &a[i]);  
  
    for(i = 0; i < N; i++)  
    {  
        if(a[i] > 0)  
            p++;  
        else if(a[i] < 0)  
            n++;  
        else  
            z++;  
    }  
  
    printf("\nPositive no: %d\nNegative no: %d\nZeros: %d\n", p, n, z);  
  
}  
