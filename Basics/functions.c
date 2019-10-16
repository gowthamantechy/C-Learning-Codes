//The standard input and output library which contains the printf function prototype
#include <stdio.h>

/* C Programming the Middle level programming language. And it is main application is , System programming,
 * Embedded programming, Network programming etc */


// get_input(void) function declaration (or) it is also known as prototype. void means NULL , we may pass or not.
void get_input(void);

//This is the addition prototype , we pass int .so, when we calling this function,we must pass integer.
void addition(int,int);



//This is the main function from where the execution parts starts
int main(void)
{
	int m=14,n=16;

//calling the prototype inside the main scope
addition(m,n);



//calling the function inside the main scope
get_input();

//Defining the function inside the main scope and This definition should be called to be executed
void put_output(){
	int val=10;
	printf("\n The value of val variable is:%d ",val);
	printf("\n");

}

//calling the function inside the main function
put_output();




return 0;
}

// get_input() function definition
void get_input(){
	
	//Declaring the datatypes
	int a,b,c;

	printf("\n Enter the value of a and b:");
	//scaning the memory location to provide data
	scanf("%d %d",&a,&b);
	//adding the the value of a and b and storing into c
	c=a+b;
	printf("\n The Sum of a and b is:%d",c);

}

//Defining the addition function for the prototype. This is the void funciton. so,it wont return anything.
void addition(int a,int b){
	int c;
	c=a+b;
	printf("\n The summed value is:%d",c);
	printf("\n");

}














//Note: In function, only one value can be returned
