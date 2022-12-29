
#include<stdio.h>
#include<conio.h>

#define size 5

void que(int);
void deque();
void display();
int cq[size],f=-1,r=-1;

void main()
{
int ch,value;
clrscr();
while(1)
{
printf("\nMenu\n1.queue\n2.Deque\n3.Display\n4.Exit\n");
printf("Enter yoyur choise: ");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("Enter the value to be inserted: ");
scanf("%d",&value);
que(value);
break;
case 2: deque();
break;
case 3: display();
break;
case 4: exit(0);
break;
default:
printf("Wrong choise");
}
}
}

void que(int value)
{
if((f==0 && r==size-1) || (f==r+1))
{
printf("\nQueue is full\n");
return;
}
else
{
if(r==size-1 && f!=0)
r=-1;
cq[++r]=value;
printf("\n queqing success\n");
if(f==-1)
f=0;
}
}
void deque()
{
if(f==-1 && r==-1)
{
printf("\nQueue is empty\n");
return;
}
else
{
printf("Deleted element is %d\n",cq[f++]);
if(f==size)
f==0;
if(f-1==r)
f=r=-1;
}
}


void display()
{
if(f==-1)
{
printf("\nQueue is empty\n");
return;
}
else
{
int i=f;
printf("\nQueue element are: ");
if(f<=r)
{
while(i<=r)
printf("%d\n",cq[i++]);
}
else
{
while(i<=size-1)
printf("%d\n",cq[i++]);
i=0;
while(i<=r)
printf("%d",cq[i++]);
}
}
}