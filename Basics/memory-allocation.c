#include <stdio.h>
#include <stdlib.h>



//There are four functions malloc(),calloc(),free(),realloc()


//sum of N numbers problem

// Main Funcition from where execution starts
int main(void)
{
	int n,i,sum=0,*ptr;

	printf("\n Enter the no of elements:");
	scanf("%d",&n);

	ptr=(int*)malloc(n*sizeof(int));

	if(ptr==NULL)
	{
		printf("Error: The Memory is not Allocated....");

		exit(0);
	
	}

	for(i=0;i<n;++i)
	{	
		printf("\n Enter the %d Number at %p:%d",i,(ptr+i),*(ptr+i));
		//scanf("%d",(ptr+i));
		sum+=*(ptr+i);
	
	}


	printf("\n The Sum of N Number is:%d",sum);
	printf("\n The sizeof allocated memory is:%ld",sizeof(ptr));
	free(ptr);
	printf("\n");
return 0;
}
