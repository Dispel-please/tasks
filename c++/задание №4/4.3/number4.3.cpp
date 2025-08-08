#include <iostream>

int main() {
    int Num;

    std::cout<<"Введите число:";
    std::cin>>Num;

    int remainder = std::abs(Num % 2);

    if (remainder!=0) {
        std::cout << "Число " << Num << " нечет"; 
    }

    else {
        std::cout << "Число " << Num << " чет";
    }

    return 0;
}
