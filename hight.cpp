#include<stdio.h>
int main()
{
	int h;
	printf("enter hight od the person:");
	scanf("%d",&h);
	if(h>150)
	{
		if(h<165)
		printf("%d is average hight",h);
		else if(h<190)
		printf("%d is tall",h);
		else
		printf("%d is abnormal hight",h);
		
	}
	else
	{	
	printf("%d is dwarf",h);
}
	return 0;
}
