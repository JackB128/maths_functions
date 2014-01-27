#include <stdio.h>

int main()
{
int Max = 0;
printf("Enter a value for Max: ");
scanf("%i", &Max);


int sum = 0;
int x = 0;
int i=0;
for(i=0;i<Max;i++) {
printf("Enter a value: ");
scanf("%i", &x);
sum=sum+x;
x=0; }
int average=0;
average=sum/Max;
printf("The average is: %i\n", average );
}


  
