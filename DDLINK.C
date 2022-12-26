#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct stack
{ int data;
 struct stack *next;
} stack;
stack *top;
int stackempty()
{if(top==NULL)
 return 1;
else
 return 0;
}
void push()
{
 stack *P;
 if (top==NULL)
 {
 top=(stack*)malloc(sizeof(stack));
 printf("enter data");
 scanf("%d",&top->data);
 top->next=NULL;
 }
 else
 { P=(stack*)malloc(sizeof(stack));
 printf("enter data");
 scanf("%d",&P->data);
 P->next=top;
 top=P;
 }
}
 void pop()
 {int i;
 stack *p;
 i=stackempty();
 if(i==0)
 {p=top;
  top=top->next;
  printf("deleted element %d",p->data);
  free(p);
 }
 else
 printf("stack is empty");
 }
 void display()
 {stack *P;
  P=top;
  while(P!=NULL)
  {printf("%d->",P->data);
   P=P->next;
  }
  }
  void main()
  {
  int ch;
  while(1)
  {
  printf("\nenter your choice\n1:push\n2:pop\n3:display\n4:exit\n");
  scanf("%d",&ch);
  switch(ch)
 {
  case 1:
   push();
   break ;
  case 2:
   pop();
   break;
  case 3:
   display();
   break;
  case 4:
   exit(1);
   break;
   default:
   printf("enter correct choice");
   }
  }
  return 0;
  }