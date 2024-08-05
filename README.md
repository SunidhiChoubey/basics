# EXPERIMENT-1

## AIM-Downloading and Installing VS Code, (Hello World and Calculator program)

## THEORY- 
C++ is a powerful, high-performance programming language known for its versatility and efficiency. It was developed by Bjarne Stroustrup as an extension of the C programming language, incorporating object-oriented features.
In this the program illustrates fundamental C++ concepts through simple tasks such as calculating sums and averages, determining if a number is even or odd, and checking for leap years. It highlights the use of basic input/output operations, arithmetic calculations, and conditional logic, making it a good starting point for beginners in C++ programming.

### STEPS TO DOWNLAOD VS CODE:
1. Download VS Code
• Visit the official VS Code website: https://code.visualstudio.com/
• Click on the "Download for Windows" button (or the appropriate button for your operating 
system).
2. Run the Installer
• Once the download is complete, locate the downloaded file (usually named something like
VSCodeSetup.exe) and double-click it to run the installer.
4. Accept the License Agreement
• Read the license agreement and click "I accept the agreement".
5. Choose Installation Location (Optional)
• You can choose the installation location if you prefer a different directory. Otherwise, keep 
the default.
6. Select Additional Tasks
Choose the desired options, such as creating a desktop icon, adding VS Code to the Start menu, 
or opening VS Code after installation.
7. Start the Installation
• Click the "Install" button to begin the installation process.
8. Finish Installation
• Once the installation is complete, click the "Finish" button.
9. Install Extensions
• Enhance VS Code's functionality by installing extensions for different programming (here we 
are downloading package for c++) languages, themes, and tools.
![](https://github.com/SunidhiChoubey/basics/blob/main/Screenshot%202024-07-22%20022951.png)
![](https://github.com/SunidhiChoubey/basics/blob/main/Screenshot%202024-07-22%20023135.png)

CODES-
~~~
//SUNIDHI CHOUBEY 23070123137
#include <iostream>

int main() {
    std::cout << "Hello World!\n";
    //SUM OF TWO NUMBERS
    std::cout <<"let us print sum of two numbers" << std::endl;
    int a,b; 
    std::cout <<"Enter a " << std::endl;
    std::cin >>  a;
    std::cout <<"Enter b " << std::endl;
    std::cin >>  b;
    int sum= a+b;
    std::cout<<" the sum of two numbers are\n"<<sum << std::endl;
    //AVERAGE
    int avg= (a+b)/2;
    std::cout<<"the avg is\n"<<avg << std::endl;
    //NOW CHECK ENTERED NUMBER EVEN OR ODD
    int c;
    std::cout <<"Enter c " << std::endl;
    std::cin >>  c;
     if (c % 2 == 0) {
        std::cout << c << " is even."<< std::endl;
    } else {
        std::cout << c << " is odd."<< std::endl;
    }
    // check for leap year
    int d;
    std::cout <<"Enter d " << std::endl;
    std::cin >>  d;
    if (d %4 ==0 || d% 400 == 0){
        std::cout<< "d is leap year"<< std::endl;
    } else {
         std::cout << d << " is not a leap year."<< std::endl;

    }
    return 0;
}
~~~
![](https://github.com/SunidhiChoubey/basics/blob/main/Screenshot%202024-07-23%20012318.png)

## CONCLUSION
We learnt how to download vs code and learnt how to do basic program in C++.

# EXPERIMENT-2
## AIM- To study and implement C++ Program Structure (Data types)
## THEORY-
In C++, variables are declared with specific data types to restrict the type of data they can store. The compiler allocates memory based on the declared data type, and each data type requires a different amount of memory. The data types in C++ include:
Character (char)
Integer (int)
Boolean (bool)
Floating point (float)
Double Floating point (double)
Void (void)
Wide Character (wchar_t)
### Modifiers
Data types can have modifiers to adjust their size and storage capacity:
Short
Long
Signed
Unsigned
For instance, using the long modifier with an integer type can extend its size to 4 bytes.
### Storage Classes
Variables in C++ can be stored in different storage classes:
#### Auto
Default storage class for variables declared inside a function or block.
Accessible only within the block or function they are declared in.
#### Extern
Indicates that the variable is defined elsewhere.
Can be accessed within any function or block.
Typically used for global variables.
#### Static
Preserves the value of a variable even after its scope ends.
Initialized only once and retains value throughout the program's lifecycle.
Local to the function they are defined in, but global static variables can be accessed anywhere in the program.
Default value is 0.
#### Register
Hints the compiler to store the variable in a CPU register for faster access.
If no register is available, the variable is stored in memory.
Useful for frequently accessed variables.
The address of a register variable cannot be obtained using pointers.
## CODES
~~~
//SUNIDHI CHOUBEY 23070123137
#include <iostream>
using namespace std;

int main() {
    int a;
    float b;
    char c;
    short int d;
    double e;
    long int f;
    signed short int g;
    unsigned short int h;
    signed long int i;
    unsigned long int j;
    long long int k;
    unsigned long long int l; // Corrected variable name

    cout << "Size of int " << sizeof(a) << " bytes" << endl;
    cout << "Size of float " << sizeof(b) << " bytes" << endl;
    cout << "Size of char " << sizeof(c) << " bytes" << endl;
    cout << "Size of short int " << sizeof(d) << " bytes" << endl;
    cout << "Size of double " << sizeof(e) << " bytes" << endl;
    cout << "Size of long int " << sizeof(f) << " bytes" << endl;
    cout << "Size of signed short int " << sizeof(g) << " bytes" << endl;
    cout << "Size of unsigned short int " << sizeof(h) << " bytes" << endl;
    cout << "Size of signed long int " << sizeof(i) << " bytes" << endl;
    cout << "Size of unsigned long int " << sizeof(j) << " bytes" << endl;
    cout << "Size of long long int " << sizeof(k) << " bytes" << endl;
    cout << "Size of unsigned long long int " << sizeof(l) << " bytes" << endl;

    return 0;
}
~~~
## OUTPUT-
![](https://github.com/SunidhiChoubey/basics/blob/main/Screenshot%202024-07-23%20013226.png)
### code for stoarge class
~~~
#include <iostream>
using namespace std;

int extern_variable = 30; 
int main() {
    auto a = 8;
    register int registered_variable = 100;
    static int s = 7;
    
    cout << "The local variable: " << a << std::endl;
    cout << "The variable in register: " << registered_variable << endl;
    cout << "External variable: " << extern_variable << endl;
    
    s = 10;
    cout << "The static variable: " << s << endl;
    
    return 0;
}
~~~
## OUTPUT-
![](https://github.com/SunidhiChoubey/basics/blob/main/Screenshot%202024-08-06%20021720.png)
## CONCLUSION-
We learnt how to run and implement the basic fundatamentals of C++ for example the varibales and their sizes, the different type of storage classes.

# EXPERIMENT-3
## AIM- To study and implement operators in c++
## THEORY-
Operators in C++ are symbols that perform specific mathematical or logical computations on values. They are essential for any programming language. An operator operates on operands, for example, in int c = a + b; the + is the addition operator, and a and b are the operands.
Operators in C++ can be classified into six types:
### Arithmetic Operators:
Used to perform basic mathematical operations.
Examples: + (addition), - (subtraction), * (multiplication), / (division), % (modulus).
### Relational Operators:
Used to compare values.
Examples:
Greater than (>): Checks if one variable is greater than another.
Greater than or equal to (>=): Checks if one variable is greater than or equal to another.
Less than (<): Checks if one variable is less than another.
Less than or equal to (<=): Checks if one variable is less than or equal to another.
Equal to (==): Checks if two variables are equal.
Not equal to (!=): Checks if two variables are not equal.
These operators return either true (1) or false (0).
### Logical Operators:
Used to perform logical operations.
Examples: && (AND), || (OR), ! (NOT).
### Bitwise Operators:
Operate on bits and perform bit-level operations.
Examples: & (AND), | (OR), ^ (XOR), ~ (NOT), << (left shift), >> (right shift).
### Assignment Operators:
Used to assign values to variables.
The basic assignment operator is =. Examples include:
=: Assigns a value to a variable. For example, int x = 10; assigns 10 to x.
+=: Adds a value to a variable and assigns the result.
-=: Subtracts a value from a variable and assigns the result.
*=: Multiplies a variable by a value and assigns the result.
/=: Divides a variable by a value and assigns the result.
### Ternary or Conditional Operator:
The ternary operator (?:) is a shorthand for an if-else statement.
It evaluates a condition and returns one value if true and another if false.
Example: int result = (a > b) ? a : b; assigns a to result if a is greater than b, otherwise assigns b.
## CODES-
~~~
//SUNIDHI CHOUBEY
//23070123137

#include <iostream>
int main() {
    // Arithmetic Operators
    int a = 10;
    int b = 5;
    
    std::cout << "Arithmetic Operators:" << std::endl;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "a - b = " << a - b << std::endl;
    std::cout << "a * b = " << a * b << std::endl;
    std::cout << "a / b = " << a / b << std::endl;
    std::cout << "a % b = " << a % b << std::endl;

    // Assignment Operators
    int c = a;
    c += b;
    std::cout << "\nAssignment Operators:" << std::endl;
    std::cout << "c after c += b: " << c << std::endl;
    c -= b;
    std::cout << "c after c -= b: " << c << std::endl;
    c *= b;
    std::cout << "c after c *= b: " << c << std::endl;
    c /= b;
    std::cout << "c after c /= b: " << c << std::endl;
    c %= b;
    std::cout << "c after c %= b: " << c << std::endl;

    // Comparison Operators
    std::cout << "\nComparison Operators:" << std::endl;
    std::cout << "a == b: " << (a == b) << std::endl;
    std::cout << "a != b: " << (a != b) << std::endl;
    std::cout << "a > b: " << (a > b) << std::endl;
    std::cout << "a < b: " << (a < b) << std::endl;
    std::cout << "a >= b: " << (a >= b) << std::endl;
    std::cout << "a <= b: " << (a <= b) << std::endl;    

    return 0;
}
~~~
## OUTPUT-
![](https://github.com/SunidhiChoubey/basics/blob/main/Screenshot%202024-08-06%20021824.png)
## CONCLUSION-
We learnt how to execute different types of operators(arithmetic, assignment and comparison operator) on c++.

# EXPERIMENT-4
## AIM- Ro study and implement C++ Bitwise Operators
## THEORY-
Bitwise operators perform operations at the bit level on integers, treating them as sequences of binary digits. C++ provides various bitwise operators:
### Bitwise AND (&):
Compares each bit of two integers and sets the result bit to 1 only if both corresponding bits are 1.
Example: a & b
### Bitwise OR (|):
Compares each bit of two integers and sets the result bit to 1 if any of the corresponding bits is 1.
Example: a | b
### Bitwise XOR (^):
Compares each bit of two integers and sets the result bit to 1 if the corresponding bits differ.
Example: a ^ b
### Bitwise NOT (~):
Inverts each bit of the integer (turns 0s into 1s and 1s into 0s).
Example: ~a
### Left Shift (<<):
Shifts the bits of an integer to the left by a specified number of positions. Equivalent to multiplying the integer by 2 raised to the number of positions shifted.
Example: a << n (shifts a left by n positions)
### Right Shift (>>):
Shifts the bits of an integer to the right by a specified number of positions. Equivalent to dividing the integer by 2 raised to the number of positions shifted.
Example: a >> n (shifts a right by n positions)
## CODES-
~~~
//SUNIDHI CHOUBEY
//23070123137

#include <iostream>

int main() {
    // Arithmetic Operators
    int a = 10;
    int b = 5;
    int bitwise_and = a & b;
    int bitwise_or = a | b;
    int bitwise_nor = ~(a | b);
    int bitwise_xor = a ^ b;
    int bitwise_xnor = ~(a ^ b);

    std::cout << "The bitwise AND value of a and b is: " << bitwise_and << std::endl;
    std::cout << "The bitwise OR value of a and b is: " << bitwise_or << std::endl;
    std::cout << "The bitwise NOR value of a and b is: " << bitwise_nor << std::endl;
    std::cout << "The bitwise XOR value of a and b is: " << bitwise_xor << std::endl;
    std::cout << "The bitwise XNOR value of a and b is: " << bitwise_xnor << std::endl;

    return 0;
}
~~~
## OUTPUT-
![](https://github.com/SunidhiChoubey/basics/blob/main/Screenshot%202024-08-06%20021908.png)
## CONCLUSION-
We learnt in depth about bitwise operator and learnt how to use this in program.
