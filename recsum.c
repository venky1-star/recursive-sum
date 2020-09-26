#include<stdio.h>
int recsum(int);
main()
{
	int num;
	printf("Input number : ");
	scanf("%d",&num);
	printf("Sum of digits : %d",recsum(num));
}
int recsum(num)
{
	if(num/10==0)
	return num;
	else
	return(num%10+recsum(num/10));
}
