#include <iostream> 
#include <fstream>
#include "calculator.h"

int main(){
    int choice;
    printMenu();

    std::cin >> choice;
    if(choice == 5)
        std::cout << "Cya Later!" << std::endl;

    while(choice != 5){
        while ( choice >  5 || choice < 1 || choice == 0 ) {
        std::cout << "" << std::endl;
        std::cout << "!!! Pick 1 - 5 !!!" << std::endl;
        std::cout << "" << std::endl;
        
        printMenu();
        std::cin >> choice;
        }
            switch(choice) {
                case 1 : //code
                    add();
                    break;
                case 2 : //code
                    subtract();
                    break;
                case 3 : //code
                    divide();
                    break;
                case 4 : //code
                    multiply();
                    break;
                default:
                    std::cout << "!!! Pick 1 - 5 !!!" << std::endl;
            }
    }
}