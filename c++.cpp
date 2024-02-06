#include <iostream>

using namespace std; //Spacing between the lines is only used to make it easier for us to read and code. The computer does not care.

int main() { // The { introduces the function. It is the beginning of block for "main"
    // This "int main ( )" thing is the introduction of a function
    // Second comment
    /* This
    is
    a
    multi-line comment */
    // Note that the */ is only necessary when you are making a multi-line comment.

    //cout << "Hello world!\n\n"; //Output statement. Must include double quotations between whatever is to be printed (shown). "cout" means Console Output. The "\n" signifies that it will change lines. Instead of \n, we can use "<< endl" for End Line.
  //  cout << "Hi" << endl;

//cout << "new line";

//int number; //whatever comes after int doesn't have to be "number", it's just like a variable like in math, but let's not name them x, y, z, whatever.

//number = 5;

//int chiffre;

//chiffre = number;

//cout << "The value of my number is " << chiffre << endl; 

//int numberForMyTest; //Camelcase naming convention, first letter of first word must be decapitalized.

//numberForMyTest = 10;

//cout << "My test score is " << numberForMyTest << endl;

    cout << 12 * 5; //Difference between literal string and literal integer is that if you use strings, you cannot do math. So to do math, you have to do simply 12 * 5, it will show 60. If you do "12 * 5", it will show you "12 * 5". If you do "12" * 5, it will show an error.

    return 0; //
} // This "}" thing concludes the function. It is the end of block for "main"
