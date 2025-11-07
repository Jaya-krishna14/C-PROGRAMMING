#include<stdio.h>
int main()
{
	int a[100],n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("duplicate elements in the array are :\n");
	for(i=0;i<n;i++)
	{
		if(a[i]==a[j])
		{
		
		printf("%d\n",a[i]);
		break;
		
		
		}
	}
	return 0;
}
