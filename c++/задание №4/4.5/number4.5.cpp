#include<iostream>

int main() {
    int firstNum;
    int secNum;

    std::cout<<"Перв число ";
    std::cin>>firstNum;

    std::cout<<"Вт число ";
    std::cin>>secNum;

    
    int remainder = firstNum%secNum;

    if (remainder!=0){
        std::cout<<"не делится";
    }

    else {
        std::cout<<"делится";
    }

}