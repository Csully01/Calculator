#include <iostream> 
#include <fstream>
#include "calculator.h"

//prints the menu for the calculator
void printMenu(){
    std::cout << "  Welcome to the calculator!" << std::endl;
    std::cout << "Start by selecting your option:" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << "1. Add" << std::endl;
    std::cout << "2. Subtract" << std::endl;
    std::cout << "3. Divide" << std::endl;
    std::cout << "4. Multiply" << std::endl;
    std::cout << "5. Exit" << std::endl;
}
void add(){
    std::cout << "Please Enter 2 numbers:";
    int num1 = 0;
    int num2 = 0;
    std::cin >> num1;
    std::cin >> num2;
    int sum = num1 + num2;
    std::cout << "Your answer is: " << sum << std::endl;
    std::cout << "Thanks for using my tool!" << std::endl;
    exit(1);
}
void subtract(){
    std::cout << "Please Enter 2 numbers:";
    int num1 = 0;
    int num2 = 0;
    std::cin >> num1;
    std::cin >> num2;
    int sum = num1 - num2;
    std::cout << "Your answer is: " << sum << std::endl;
    std::cout << "Thanks for using my tool!" << std::endl;
    exit(2);
}
void divide(){
    std::cout << "Please Enter 2 numbers:";
    int num1 = 0;
    int num2 = 0;
    std::cin >> num1;
    std::cin >> num2;
    int sum = num1 / num2;
    std::cout << "Your answer is: " << sum << std::endl;
    std::cout << "Thanks for using my tool!" << std::endl;
    exit(3);
}
void multiply(){
    std::cout << "Please Enter 2 numbers:";
    int num1 = 0;
    int num2 = 0;
    std::cin >> num1;
    std::cin >> num2;
    int sum = num1 * num2;
    std::cout << "Your answer is: " << sum << std::endl;
    std::cout << "Thanks for using my tool!" << std::endl;
    exit(4);
    
}