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
