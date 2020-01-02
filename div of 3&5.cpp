#include<stdio.h>
int main()
{
	int d;
	printf("enter the number:");
	scanf("%d",&d);
	if(d%3==0)
	{
        if(d%5==0)
		printf("%d FIZZBIZZ",d);
		else if( d%5==0)
		printf("%d BIZZ",d);
		else
		printf("%d",d);
		
	}
	else
	printf("%d FIZZ",d);
	return 0;
}

