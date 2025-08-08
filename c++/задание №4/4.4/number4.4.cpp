#include<iostream>

int main() {
    int exp;

    std::cout<<"Введите число очков опыта:";
    std::cin>>exp;

    if (exp < 0 || exp > 5000) {
        std::cout<<"неверное кол-во опыта";
    }
    else if (exp<=1000) {
        std::cout<<"Ваш уровень: 1";
    }
    
    else if (exp<=2500) {
        std::cout<<"Ваш уровень: 2";
    }

    else {
       std::cout<<"Ваш уровень: 3"; 
    }
    return 0;
}