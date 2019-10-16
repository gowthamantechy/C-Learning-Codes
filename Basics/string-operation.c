#include <stdio.h>
#include <string.h>



int main(void)
{
	char *name="Gowthaman";

	

	printf("\n The length of string is:%ld\n",strlen(name));

	for(int i=strlen(name)-1;i>=0;--i)
	{
		printf("%c",name[i]);
	}

	printf("\n");


return 0;
}
