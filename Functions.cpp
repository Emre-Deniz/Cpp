#include <iostream>

//main function can be used once in your project and execution stars there 
//other functions needs to defined outside and before of main function can be in a seperate file or same file

/*int,double,bool,char,string, any data type can be used here and they have to matching return value*/
int  myFunc /*name of function*/(/*parameters its take, can be left empty*/) {
	//code block or function body for whatever need to do

	return 0; // return value is importand factor and needs to match return type (int,double,bool etc.)
}
//functions defined once and used much as needed 
/*-----------------------------------------------------------------------*/

//void is a type is returnless function
//also if parameers defined we need to call functions with parameters
void voidFunction(int a, int b, double c) { //this function needs to called like voidFunction(length,height,result)-- voidFunction() returns error
	int pi=3.14;
	//we can declare local variables in functions
	c = (a + b)*pi;
	//no return our function is void type
}//after code block ends local variables(pi) are lost but global variables(c) is remain beware of global variables they can be changed in functions and this can cause problems

void plantFunction(string planet = earth ) {

	//earth means default value this function can be called like planetFunction() unlike example above

	cout << planet << "I'm Here";
}
/*--------------------------------------------------------------*/
//Function overloading
int plusFuncINT(int a, int b) {
	return a + b;
}
double plusFuncDOUBLE(double a, double b) {
	return a + b;
}
//to use it plusFuncINT(2,2) plusFuncDOUBLE(1.5,2.2)
//to use it we have to remember their names of both plus functions and this a bit of overloading instead of overloading people we can overload functions
//this 2 functions have a similiarity right? instead of writing 2 entirely different functions we can overload it like below

int plusFunc(int x, int y) {
	return x + y;
}

double plusFunc(double x, double y) {
	return x + y;
}
//after this we can call int and double for same function plusFunc(2,2) plusFunc(3.1,3.9) better for remembering right?

/*------------------------------------------------------*/
//Recursive Functions
//functions can be called in each other and themselves

int sum(int k) {
	if (k > 0) {
		return k + sum(k - 1);
	}
	else {
		return 0;
	}
}

//this is a recursive function for adding 2 numbers if k = 5 function executed like 
/*
5+sum(4)
5+(4+sum(3))
5+4+(3+sum(2))
5+4+3+(2+sum(1))
5+4+3+2+(1+sum(0)) after hit 0 program stops calling itself and returns result
5+4+3+2+1+0 =  15

 recursives is little harder to understand do a litle practice
*/