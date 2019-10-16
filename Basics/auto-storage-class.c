#include <stdio.h>



int main(void)
{

	int add(void){
		int a=13;
		auto int b=48;
		return a+b;
	}
	

	int sub=10;
	{
		printf("\n Welcome");
	}
	add();
	auto int j=1;
	{	
		auto int j=2;
		{
			int i=23;
			auto int j=3;
			printf("\n The value of j is:%d",j);
			printf("\n The value of i is:%d",i);
		}
		printf("\n The value of j is :%d",j);
		
	}
	
	printf("\n value of add func is:%d",add());
	
	
	
	printf("\n The value of sub is:%d",sub);
	printf("\n The value of j is:%d",j);
	printf("\n");

return 0;
}
