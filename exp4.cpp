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
