#include<stdio.h>

int main()
{
    int a[100],i;
    for (i=0;i<100;i++)
    {
        if(i<30)
        {
            a[i]=1;
        }
        else
        {
            a[i]=0;
        }
    }
    for(i=0;i<100;i++)
    {
        printf("%d",a[i]);

    }


}