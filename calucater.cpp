#include<stdio.h>
int main()
{
	int n1,n2,n;
	printf("enter the number");
	scanf("%d%d",&n1,&n2);
	printf("1-add,2-subtration,3-multiplication,4-division,5-percentage\n");
	printf("enter your choice");
	scanf("%d",&n);
	switch (n)
	{
		case 1:
			printf("%d",n1+n2);
			break;
		case 2:
			printf("%d",n1-n2);
		    break;
		case 3:
			printf("%d",n1*n2);
			break;
		case 4:
			printf("%d",n1/n2);
			break;
		case 5:
			printf("%d",n1%n2);
			break;
			default:
				printf("invalid");
				break;
	}
}
