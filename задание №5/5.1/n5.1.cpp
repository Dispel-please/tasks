#include <iostream>

int main() 
{
    int height;
    int speed;

    std::cout<<"Какая высота самолета? ";
    std::cin>>height;

    std::cout<<"Какая скорость самолета? ";
    std::cin>>speed;

    if ( (750<=speed && speed<=850) && (9000<=height && height<=9500)) {
        std::cout<<"Самолет летит нужным эшелоном";
    }

    else {
        std::cout<< "Самолет летит неправильным эшелоном";
    }

}