/*PROGRAM TO print the multiplication table of the number entered by the user. the table should get displayed  
AUTHOR:JIJNU RAJU
DATE:5/03/19*/
#include<stdio.h>
void main()
{
int num,i=0,product;
printf("enter the number");
scanf("%d",&num);
for(i=0;i<10;i++)
	{
	product=num*(i+1);
	printf("%d*%d=%d\n",num,i,product);
	}
}
