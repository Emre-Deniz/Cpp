//Exceptions
//exceptions meant to prevent foreseeable errors it has 3 ketwords try,throw,catch
//try code blok is for trying to get error problematic codes written here
//throw is like call function for catch usualy takes problematic data as paramaeters
//catch is where is error handled write log or execute other functions

try {
    int age = 15;
    if (age >= 18) {
        cout << "Access granted - you are old enough.";
    }
    else {
        throw (age);
    }
}
catch (int myNum) {
    cout << "Access denied - You must be at least 18 years old.\n";
    cout << "Age is: " << myNum;
}
//we can use throw as throw 404; specifiy error
//catch can be used like catch(...) to get all errors useful if throw type isnt specified