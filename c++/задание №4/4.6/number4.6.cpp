#include <iostream>

int main() {
    int population;
    int barbersQuantity;
    int needBarber;

    std::cout<<"Население ";
    std::cin>>population;
    std::cout<<"число барберов ";
    std::cin>>barbersQuantity;

    int remainder=population%240;

    if (remainder!=0) {
        needBarber = population/240 + 1;
    }
    else{
        needBarber = population/240;
    }

    if (needBarber==barbersQuantity){
        std::cout<<"Нужное кол-во ";
    }
    else if (needBarber>barbersQuantity) {
        std::cout<<"Слишком мало барберов нужно "<< needBarber;
    }
    else{
        std::cout<<"Слишком много барберов нужно "<< needBarber;

    }

}