#include <stdio.h>

// Static is one kind of Storage class. The life time of the storage is at the end of program. It stores the value in the data segment.

void display();
int main(void)
{


	display();
	display();
	display();
	
	printf("\n");
return 0;
}


void display(){

	static int i=0;
	printf("\n The value of i is:%d",i);
	i+=5;

}
