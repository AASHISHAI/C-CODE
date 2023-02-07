#include<stdio.h>
#include<stdlib.h>
int main()
{
int n, num,digit, sum = 0, rev = 0;
printf("\n Input the number :");
scanf("%d", &num);
printf("\n Given number = %7d",num);
n = num;
do
{
digit = num % 10;
sum += digit;
rev = rev * 10 + digit;
num /= 10;
}while(num != 0);
printf("\n Sum of the digits of the number = %d", sum);
printf("\n Reverse of the number = %d", rev);
if(n == rev)
printf("\n\nThe given number is a Palindrome");
else
printf("\n\n The given number is not a Palindrome");

}