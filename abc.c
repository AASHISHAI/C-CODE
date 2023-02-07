#include <stdio.h>
#include <stdlib.h>
void main()
{
int search, i, j, size, c=0, choice, temp;
int first, last, middle;
int a[] = {4, 7, 3, 2, 1, 7, 9, 0};
while (1)
{ 
printf("\nenter your choice\n 1.Linear search\n 2.Binary search\n 3.exit\n");
scanf("%d", &choice);
switch (choice)
{
case 1:
printf("Enter the element to be search");
scanf("%d", &search);
for (i = 0; i < 8; i++)
{
if (a[i] == search)
{
printf("%d is present at %d position\n", search, i + 1);
c = 1;
}
}
if (c == 0)
{
printf(" %d Element is not present\n", search);
}
break;
case 2:
for (i = 0; i < 8; i++)
{
temp = a[i];
j = i - 1;
while (j >= 0 && a[j] > temp)
{
a[j + 1] = a[j];
j--;
}
a[j + 1] = temp;
}
printf("Insertion sort are :\n");
for (i = 0; i < 8; i++)
{
printf("%3d", a[i]);
}
printf("Enter value to find\n");
scanf("%d", &search);
first = 0;
last = size - 1;
middle = (first + last) / 2;
int k=0;
while (first <= last)
{
if (a[middle] < search)
first = middle + 1;
else if (a[middle] == search)
{
printf("%d found at location %d.\n", search, middle+1);
k=1;
break;
}
else
last = middle - 1;
middle = (first + last) / 2;
}
if (k==1)
printf("Not found! %d isn't present in the list.\n",
search);
break;
case 3:
exit(1);
break;
}
}
}
