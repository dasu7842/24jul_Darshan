//Write a program to print the number in reverse order.

#include<stdio.h>
int main(){

int a, b;
printf("Enter the value: ");
scanf("%d", &a);
printf("%d\n",a);

while(a>0)
{
b=a%10;
printf("%d",b);
a=a/10;
}
return 0;
}