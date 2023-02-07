#include<stdio.h>
#include<stdlib.h>
 void main()
 {
    int a,b,c,big;
    printf("enter the value of a,b,c");
    scanf("%d %d %d",&a,&b,&c);
    printf("\n value of a=%d",a);
    printf("\nvalue of b=%d",b);
    printf("\nvalue of c=%d",c);
    big=a;
    if(b>big)big=b;
    if(c>big)big=c;
    printf("\nbiggest amoung three number=%d",big);
 }