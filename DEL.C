#include<stdio.h>
#include<conio.h>
#define N 5
void main()
{
int a[N], i, pos;
clrscr();
printf("Enter %d integer numbers:\n", N);
for(i=0;i<N;i++)
scanf("%d",&a[i]);
printf("\nEnter index position of the element to be deleted:\n");
scanf("%d",&pos);
for(i=pos;i<(N-1);i++)
{a[i]=a[i+1];}
printf("\nArray after deleting the specified element :\n");
for(i=0;i<(N-1);i++)
{printf("%d\n",a[i]);}
getch();
}