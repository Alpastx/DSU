#include <stdio.h>
#include<conio.h>
void main()
{
int a[100],x, n, i, j, position, swap;
clrscr();
printf("\nEnter number of elements\n");
scanf("%d", &n);
printf("\nEnter %d Numbers\n", n);
for (i = 0; i < n; i++)
scanf("%d", &a[i]);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
x=a[i];
a[i]=a[j];
a[j]=x;
}
}
}

printf("Sorted Array by selection sort:\n");
for(i = 0; i < n; i++)
printf("%d\n", a[i]);
getch();
}