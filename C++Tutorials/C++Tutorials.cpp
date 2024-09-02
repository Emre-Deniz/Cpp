
// is single comment line this means program ignore whatever written here    for multi line comments or between codes use /* */ 

// Header and library files needs to included here 
#include <iostream> //input output stream library to work with cout
#include <string> // string library
#include <cmath> //math library
using namespace std; //using standard library namespace

int main()
{
    cout << "Hello World!\n"; //write hello world! to screen and go below 1 line with /n
    /*

     / is escape character /n is escape sequence and its used to change writing screens cursor position and various other things
    /n means newline
    // is meant to write / because single / expects second character thus cant used alone
    /t creates tab
    /" writes " explained above
    */

    //simple data types
    int i = 0, j = 1, k = 15, l = 155, m = -10; //integer or whole numbers are stored in the int datatype decimals are not stored and lost test example is below
    // int test = 2.2; cout << test;


    double d = 6125789001.00267, negativeD = -681688871.000125;//double stores any number inside inculuding decimals
    float f = 1.4, g = -0.4, h = 3.14; // float is smaller version of double

    char c = 'c', q = 'q', character1 = '1'; //char stores single characters and characters have to written between two ' also beware int 1 and char 1 is NOT same things

    string str = "string1", hello = "Hello World!"; // string stores texts

    bool answer = true, lying = false, b = 1, p = 0; // bool stores 0 and 1 true or false with cout it writes 0 or 1 not true or false 

    const int minutePerHour = 60; //const is stands for constant needs to assigned to immediatly otherwise its read only and cant changed 
    // const int minutePerHour;
    // minutePerHour = 60 !!!!! is a error
    /*-----------------------------------------------------------------------------------------*/
    //user input
    int x;
    cout << "Type a number: ";
    cin >> x; // assign number to x   side note:cin also from iostream library

    // for strings space is terminating character this means after space input is not recived for entries with space use getline(cin,string) function 
    cout << "Your number is: " << x;

    /* Operators
     arithmetic operators
        +    -   *   /   %   ++  --
     assingment operators
        =   +=  -=  *=  /=  %=  &=  |=  ^=  >>=     <<=
     comparison operators
     ==	!=  > < >= <=
     logical operators
     ! && ||
    */

    string abc = "abcdefg"; cout << abc.length(); cout << abc[0]; //for string length and desired character abc[0] means a in example

    /* simple math  requires cmath library
    max(x,y);min(x,y) to find which one is bigger smaller
    sqrt(4),log(2),round(1.1) square root, logaritmic and rounding
    */
    /*--------------------------------------------------------------------------------*/
    // Conditions
    int number = 11;
    if (number < 11) {
        //if condition is TRUE this block executed
    }
    else if (number > 11) {
        //if condition obove is false and this one is true this block executed else if can be used much as needed
    }
    else /*no conditions needed*/ {
        //if all above false this code executed
    }
    /*--------------------------------------------------------------*/
    // if else for 1 condition can be simplified
    bool condition = false;
    string result;
   result = (condition == true) ? "true" : "false"; //!!!
   cout << result;
   /*----------------------------------------------------------------*/
   //instead of writing too much if else block we can use switch statement
   int day = 4;
   switch (day) {
   case 1:
       cout << "Monday";
       break;
   case 2:
       cout << "Tuesday";
       break;
   case 3:
       cout << "Wednesday";
       break;
   case 4:
       cout << "Thursday";
       break;
   case 5:
       cout << "Friday";
       break;
   case 6:
       cout << "Saturday";
       break;
   case 7:
       cout << "Sunday";
       break;
   default:
       cout << "Have a nice day!";
   }

    //break means exit currentyly executed code block its useful for conditional functions like this
    // defaul is like if elses else executed if others false
       /*-------------------------------------------------------------------*/
    //Loop conditions
       while (condition) {
           // code block to be executed if condition is TRUE
           // it will run endlessly unless condition becomes false or encounter break or manually broken by user
       }
       /*---------------------------------------------------------------------------------------------------------------------------*/
       do {
           // code block to be executed
           //difference is this code executed at least once even condition is false and contidion checked after that 
       } while (condition);
       /*-----------------------------------------------------*/
       //for loop
       for (int i = 0; i < 5; i++) {
           cout << i << "\n";
       }
       /* Code block above will write
       *0
       * 1
       * 2
       * 3
       * 4
       if you know how many times you need to loop this code is can be used instead of while loop
       */
       /*---------------------------------*/
       //nested loops
       //loops can be written inside of other loops
       // Outer loop
       for (int i = 1; i <= 2; ++i) {
           cout << "Outer: " << i << "\n";  // Executes 2 times

           // Inner loop
           for (int j = 1; j <= 3; ++j) {
               cout << " Inner: " << j << "\n";  // Executes 6 times (2 * 3)
           }
       }
       /*------------------------------------------------*/
       //in loops maybe we need to skip specific loops continue comes for our help
       for (int i = 0; i < 10; i++) {
           if (i == 4) {
               continue;
           }
           cout << i << "\n";
       }
       //in this example 4 is skipped
       /*--------------------------------------------------------------------*/
       //Arrays
       //compact way to store multiple values in single variable
       string fruit[2] = { "Banana","Coconut" }; int myNumberss[] = { 11,14,15,16 };
       cout << fruit[0];
       //beware even write 2 in fruits index is 0 and 1
       string trees[2];
       trees[0] = "pine";
       trees[1] = "oak";

       
       /*----------------------*/
       //array size
       int myNumbers[5] = { 10, 20, 30, 40, 50 };
       int getArrayLength = sizeof(myNumbers) / sizeof(int); //without sizeof(int) result is 20 means 5 integer number and 4 byte each 4*5=20 byte 
       cout << getArrayLength;
       /*----------------------------------------------*/
       //multidimensions
       int matrix[3][3] = { {0,1,2},{3,4,5},{6,7,8} };
       //useful for area coverings like chess etc.
       /*----------------------------------------------------*/
       //Structures
       //Used to group several related data types

       /*

       struct {
           string brand;
           string model;
           int year;
       } myCar1, myCar2; // We can add variables by separating them with a comma here

       // Put data into the first structure
       myCar1.brand = "BMW";
       myCar1.model = "X5";
       myCar1.year = 1999;

       // Put data into the second structure
       myCar2.brand = "Ford";
       myCar2.model = "Mustang";
       myCar2.year = 1969;

       // Print the structure members
       cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
       cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
       */
       /*--------------------------------------------------------------------------------*/
       //Enumerations
       //Grouped constants like numbers,names not needed to changed like number of hours a day, name of days ,unique id of colours etc. defined once and used as necessary
       //needs to defined outside of main function  

       /*
       
       enum Level {
  LOW = 25,
  MEDIUM = 50,
  HIGH = 75
};
       
       int main() {
  enum Level myVar = MEDIUM;
  cout << myVar;  // Now outputs 50
  return 0;
}

       */
       /*--------------------------------------------------------*/
       //Referances and pointers
       string food = "Pizza";  // food variable of string type
       string& meal = food;    // reference to food
       cout << food << "\n";  // Outputs Pizza
       cout << meal << "\n";  // Outputs Pizza
       cout << &food << "\n"; // Outputs hexadecimal number like 0x3daed2 not same everytime

       string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food
       cout << ptr << "\n";    // Dereference: Output the value of food with the pointer (Pizza)
       *ptr = "Hamburger";     // Change the value of the pointer
       cout << *ptr << "\n";    // Output the new value of the pointer (Hamburger)
       cout << food << "\n";    // Output the new value of the food variable (Hamburger)


       return 0; //code executed as expected
}   

