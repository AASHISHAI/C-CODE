#include<stdio.h>
int gcd(int a,int b)
{ 
    if (b==0)
    return a;
    return gcd(b,a%b);

}
void main()
{ 
    int a,b,c ;
    printf("enter the three number:\n");
    scanf("%d %d %d",&a,&b,&c);
    int res=gcd(a,gcd(b,c));
    printf("GCD of three Number is :");
    printf("%d",res);
    
}