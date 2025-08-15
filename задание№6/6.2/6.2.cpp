#include <iostream>

int main(){
    int number;
    int counter =0;

    std::cout<<"Число ";
    std::cin>>number;

    while (number/10!=0)
    {
        number /=10;
        counter+=1;
    }
    counter+=1;
    std::cout<<counter;
}