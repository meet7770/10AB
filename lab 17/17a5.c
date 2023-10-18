#include<stdio.h>
void main() {
	int n,i;
    int data[n];
    printf("enter the value of n : ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for (i=0;i<n;++i)
        scanf("%d",data+i);

    printf("You entered: \n");
    for (i=0;i<n;++i)
        printf("%d\n",*(data+i));
}
