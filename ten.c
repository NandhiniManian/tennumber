#include<stdio.h>
void main()
{
int a[10],i,greatest;
printf("The numbers are:");
for(i=0;i<10;i++)
{
scanf("%d\n",&a[i]);
}
greatest=a[0];
for(i=0;i<10;i++)
{
if(a[i]>greatest)
{
greatest=a[i];
}
}
printf("The greatest number among ten numbers is:%d",greatest);
}
