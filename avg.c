#include<stdio.h>
int main()
{
	int num1,num2;
	scanf("%d%d",&num1,&num2);
	float x=(float)(num1+num2)/2;
	printf("Average of %d and %d is:%.2f",num1,num2,x);
	return 0;
}
