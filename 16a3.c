#include <stdio.h>

void main(){
  int rollno[20], marks[20], i;

  for (i=0;i<20;i++) {
    printf("\n Enter Roll of Student  [%d] = ", i + 1);
    scanf("%d",&rollno[i]);
    printf("\n Enter Mark of Student  [%d] = ", i + 1);
    scanf("%d",&marks[i]);
  }

  for (i=0;i<20;i++) {
    printf("\n Roll No :  %d   Marks : %d", rollno[i], marks[i]);
  }
  
}
