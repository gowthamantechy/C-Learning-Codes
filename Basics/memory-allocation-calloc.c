#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int n;

	int *ptr;
	printf("\n Enter no of elements:");
	scanf("%d",&n);

	ptr=(int*)calloc(n,sizeof(int));

	for(int i=0;i<n;++i)
	{
		printf("\n Enter %d:",i);
		scanf("%d",ptr);
		ptr=ptr+1;
	}

	for(int i=0;i<n;i++)
	{
		printf("\n The value is:%d",*ptr);
		ptr+=1;
	}



	return 0;
}
