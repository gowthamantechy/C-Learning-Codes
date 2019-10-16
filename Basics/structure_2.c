#include <stdio.h>


typedef struct Student
{
	int roll_no;
	char name[10];

}database;

database gowtham={23,"Gowtham"};

int main(void)
{



	printf("\n The sizeof structure is:%ld",sizeof(gowtham));

	printf("\n The roll no is:%d",gowtham.roll_no);

	printf("\n The name of student is:%s",gowtham.name);

	printf("\n");




return 0;
}
