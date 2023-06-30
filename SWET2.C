// Write a programme to print the factorial of number N using for loop.

#include<stdio.h>
#include<conio.h>

void main(){

int a,b,c=1;

clrscr();

printf("Enter any number : ");
scanf("%d",&a);

for(b=1;b<=a;b++)
{
  c=c*b;
}
printf("The factorial of number %d is : %d ",a,c);

getch();
}