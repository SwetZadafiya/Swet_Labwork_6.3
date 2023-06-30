// Write a programme to print the multiplication table of the number N using any type of loop.

#include<stdio.h>
#include<conio.h>

void main(){

int a,b,c;

clrscr();

printf("Enter any number : ");
scanf("%d",&a);

for(b=1;b<=10;b++)
{
 c=b*5;
}

printf("Multiplication table is : ",c);
getch();
}