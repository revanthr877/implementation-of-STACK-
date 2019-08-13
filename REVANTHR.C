#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int top=-1,stack [MAX];
void push();
void pop();
void display();
void main()
{
int ch;
clrscr();
do
{
printf("Enter your choice:");
printf("1.push\n 2.pop\n 3.display\n 4.exit\n ");
scanf("%d", &ch);
switch(ch)
{
case 1: push();
      break;
case 2: pop();
      break;
case 3: display();
      break;
 case 4: exit(1);
      break;
default:printf("Wrong choice\n");
}} while(ch!=0);
getch();
}
void push()
{
int var;
if(top==MAX)
{printf("Stack is full\n");}
else
printf("Enter any value:");
scanf("%d",&var);
stack[++top]=var;
}
void pop()
{
if (top==-1)
{printf("Stack is empty\n");}
else
printf("Deleted element is %d",stack[top]);
top=top-1;
}
void display()
{
int i;
if (top==-1)
{printf("\nStack is empty ");}
else
{printf("\nStackis:");
for(i=0;i<=top;i++)
printf("%d\n",stack[i]);
}
}