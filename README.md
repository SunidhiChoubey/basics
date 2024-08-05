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





