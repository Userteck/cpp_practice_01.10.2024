#include <iostream> // include header file iostream that contains declarations of 
// standard library elements for input/output 
using namespace std; // statement that allows to use names defined under std 
// namespace in iostream header file. Names like cin и cout 
// become available without having to put a prefix std:: 
// before them 
int main() // program main function that program execution starts with
{ // beginning of the block
	int a, b, res, res1, res2, res3, res4; // declaration for variable а of type int

	cout << "Enter number: "; // text "Enter number: " output 
	cin >> a; // waiting for user to enter integer number. Number then is 
	// stored in variable а
	cout << "Enter number: ";
	cin >> b; 

	res = a + b; // calculate square of variable a value. Result is then stored in 
	cout << endl << "Number " << a << " + " << b << " = " << res << endl;

	res1 = a - b; // calculate square of variable a value. Result is then stored in 
	cout << endl << "Number " << a << " - " << b << " = " << res1 << endl;

	res2 = a * b; // calculate square of variable a value. Result is then stored in 
	cout << endl << "Number " << a << " * " << b << " = " << res2 << endl;

	res3 = a / b; // calculate square of variable a value. Result is then stored in 
	cout << endl << "Number " << a << " / " << b << " = " << res3 << endl;

	

	return 0; // main function returns 0 and this is interpreted as successful 
	// program termination 
} // end of the block