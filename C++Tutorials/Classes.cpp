#include <iostream>

//Classes
//c++ object oriented programming language means is creating objects that have data and functions

//fruit is a class banana,apple etc. is objects

class MyClass {       // The class
public:             // Access specifier
                    //public - members are accessible from outside the class
                    //private - members cannot be accessed(or viewed) from outside the classBy default, all members of a class are private if you don't specify
                    //protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes.
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

/*
int main() {
  MyClass myObj;  // Create an object of MyClass
                  // Can be created multiple objects

  // Access attributes and set values
  myObj.myNum = 15;
  myObj.myString = "Some text";

  // Print attribute values
  cout << myObj.myNum << "\n";
  cout << myObj.myString;
  return 0;
}
*/

//classes can contain functions
class MyClass {        // The class
public:              // Access specifier
    void myMethod() {  // Method/function defined inside the class
        cout << "Hello World!";
    }
};

/*
int main() {
    MyClass myObj;     // Create an object of MyClass
    myObj.myMethod();  // Call the method
    return 0;
}
*/

class MyClass {        // The class
public:              // Access specifier
    void myMethod();   // Method/function declaration
};

// Method/function definition outside the class
void MyClass::myMethod() {
    cout << "Hello World!";
}
/*
int main() {
    MyClass myObj;     // Create an object of MyClass
    myObj.myMethod();  // Call the method
    return 0;
}
*/
/*-------------------------------------------------------------*/
//constructors are special method and called automaticly when object from class created
//Note: The constructor has the same name as the class, it is always public, and it does not have any return value and can take parameters


class Car {        // The class
public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z); // Constructor declaration
};

// Constructor definition outside the class
Car::Car(string x, string y, int z) {
    brand = x;
    model = y;
    year = z;
}
/*

int main() {
  // Create Car objects and call the constructor with different values
  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  // Print values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}

*/
/*-----------------------------------------------------*/
//Encapsulation
//For reasons like security some values needs to direcly unaccessible
//To access that values we use getter/setter functions

#include <iostream>
using namespace std;

class Employee {
private:
    // Private attribute
    int salary;

public:
    // Setter
    void setSalary(int s) {
        salary = s;
    }
    // Getter
    int getSalary() {
        return salary;
    }
};
/*
int main() {
    Employee myObj;
    myObj.setSalary(50000);
    cout << myObj.getSalary();
    return 0;
}
*/

/*------------------------------------------*/
//Inheritance
// Inheritance provides code reusebility 
//In C++, it is possible to inherit attributes and methods from one class to another. We group the "inheritance concept" into two categories:
//derived class (child)-the class that inherits from another class
//base class (parent)-the class being inherited from

//classes can be inherited multilevels (child-father-grandfather) or multiple classes(child-father+mother)

// Base class (parent)
class MyClass {
public:
    void myFunction() {
        cout << "Some content in parent class.";
    }
};

// Derived class (child)
class MyChild : public MyClass {
};

// Derived class (grandchild)
class MyGrandChild : public MyChild {
};

int main() {
    MyGrandChild myObj;
    myObj.myFunction();
    return 0;
}
// Base class
class MyClass {
public:
    void myFunction() {
        cout << "Some content in parent class.";
    }
};

// Another base class
class MyOtherClass {
public:
    void myOtherFunction() {
        cout << "Some content in another class.";
    }
};

// Derived class
class MyChildClass : public MyClass, public MyOtherClass {
};
/*
int main() {
    MyChildClass myObj;
    myObj.myFunction();
    myObj.myOtherFunction();
    return 0;
}
*/
/*------------------------------------------------*/
//Polymorhism
//similiar to function overloading but in clasess

// Base class
class Animal {
public:
    void animalSound() {
        cout << "The animal makes a sound \n";
    }
};

// Derived class
class Pig : public Animal {
public:
    void animalSound() {
        cout << "The pig says: wee wee \n";
    }
};

// Derived class
class Dog : public Animal {
public:
    void animalSound() {
        cout << "The dog says: bow wow \n";
    }
};
/*
int main() {
    Animal myAnimal;
    Pig myPig;
    Dog myDog;

    myAnimal.animalSound();
    myPig.animalSound();
    myDog.animalSound();
    return 0;
}
*/