#include <stdio.h> // include header file stdio.h that contains declarations for 
// scanf and printf functions 
int main() // program main function that program execution starts with
{ // beginning of the block 
	int a, b, res, res1, res2, res3, res4; // declaration for variable а of type int
	float k, m;

	//int res; // declaration for variable res of type int 

	printf("Enter first number: "); // text "Enter number: " output
	scanf_s("%i", &a); // waiting for user to enter integer number. Number then is 
	// stored in variable а
	printf("Enter second number: "); // text "Enter number: " output
	scanf_s("%i", &b); // waiting for user to enter integer number. Number then is 
	res = a + b; // calculate square of variable a value. Result is then stored in 
	// variable res 
	printf("%i + %i is %i\n", a, b, res); // output the result
	res1 = a - b; // calculate square of variable a value. Result is then stored in 
	printf("%i - %i is %i\n", a, b, res1); // output the result
	res2 = a * b; // calculate square of variable a value. Result is then stored in 
	printf("%i * %i is %i\n", a, b, res2); // output the result
	res3 = a / b; // calculate square of variable a value. Result is then stored in 
	printf("%i / %i is %i\n", a, b, res3); // output the result
	return 0; // main function returns 0 and this is interpreted as successful 
	// program termination 
} // end of the block