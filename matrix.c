#include<stdio.h>
int main()
{
    int i,j,k,sum;
    int m1[10][10],m2[10][10],mul[10][10];
    int r1,r2,c1,c2;
    printf("enter the size of mtrix");
    scanf("%d%d",&r1,&c1);
      printf("enter the size of mtrix");
    scanf("%d%d",&r2,&c2);
    if(r1==c2||r2==c1)
    {
        printf("enter 1st matrix");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("inter element");
            scanf("%d",&m1[i][j]);

        }
    }}
         printf("enter 2st matrix");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("inter element");
            scanf("%d",&m2[i][j]);

        }
    }
    printf("The given matrix 1 is\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
         printf("%d\t",m1[i][j]);


        }
        printf("\n");
    }    
     printf("The given matrix 2 is\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
         printf("%d\t",m2[i][j]);


        }
        printf("\n");
    }    
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            sum=0;
            for(k=0;k<c1;k++)
            {
           sum+=m1[i][k]*m2[k][j];
        }
        mul[i][j]=sum;
        }
    }
printf("The multiplication of the given metrices is\n");
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;i++)
    {
        printf("%d",&mul[i][j]);
    }
    printf("\n");
}
    }

