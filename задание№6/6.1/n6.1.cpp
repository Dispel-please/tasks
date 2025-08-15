#include<iostream>

int main() {
    int count;

    std::cout<<"Который час(12ч формат)";
    std::cin>>count;

    if (count>12 || count<1) {
        std::cout<<"Неверный формат";
        return 0;
    }

    while (count!=0)
    {
        std::cout<<"КУ-КУ\n";
        count-=1;
    }
    
}