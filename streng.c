#include<stdio.h>
#include<string.h>
int main()
{
	char a[10]="cse",b[10]="jay krishna";
	printf("string length of a %d\n",strlen(a));
	printf("stringh reverse is %s\n",strrev(b));
	printf("stringh upper is %s\n",strupr(a));
	printf("stringh lower case %s\n",strlwr(b));
	printf("stringh camp is %d \n",strcmp(a,b));
	printf("string copy from b to a %s \n",strcpy(a,b));
	printf("string concat is %s",strcat(a,b));
	return 0;
	
}
