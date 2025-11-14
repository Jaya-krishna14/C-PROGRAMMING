#include<stdio.h>
int main()
{
	int a[10][10],i,j,r,sum=0;
	scanf("%d",&r);
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	sum=sum+a[i][i];
	printf("trace of matrix: %d",sum);
	return 0;
}
