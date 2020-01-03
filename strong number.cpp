#include<stdio.h>
int main()
{
	int i,originalnumber,num,lastdigite,sum;
	long fact;
	printf("enter a number to check strong number or not");
	scanf("%d",&num);
	originalnumber=num;
	sum=0;
	while(num>0)
	{
		lastdigite=num%10;
		fact=1;
		for(i=1;i<=lastdigite;i++)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		num=num/10;
	}
	if(sum==originalnumber)
	{
		printf("%d is strong number",originalnumber);
	}
	else
	{
		printf("%d is not strong number",originalnumber);
	}
	return 0;
}
