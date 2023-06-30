//Write a programme to print the sum of all number from 1 to N using for loop.

#include<stdio.h>
#include<conio.h>

void main(){

int a,b,c=0;

clrscr();

printf("Enter any Number : ");
scanf("%d",&a);

for(b=1;b<=a;b++)
{
   c=c+b;
}

printf("The sum of number 1 to %d is : %d ",a,c);

getch();
}