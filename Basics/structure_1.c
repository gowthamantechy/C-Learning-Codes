#include <stdio.h>


struct Node 
{
	int id_no;	
	char name[10];

}N;


int main(void)
{

//struct Node N;


printf("\n The sizeof structure is:%ld",sizeof(N));

printf("\n Enter the name:");
scanf("%s",N.name);

printf("\n Enter the id of student:");
scanf("%d",&N.id_no);

printf("\n The name of student is:%s",N.name);
printf("\n The id of student is:%d",N.id_no);

printf("\n");
return 0;
}
