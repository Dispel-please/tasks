#include<iostream>

int main(){
    int counter=3;
    int number;
    int firstSum=0;
    int secSum=0;

    std::cout<<"Номер билета ";
    std::cin>>number;

    while (counter!=0)
    {
        firstSum+=number%10;
        number/=10;
        counter-=1;
    }
    counter=3;
    while (counter!=0)
    {
        secSum+=number%10;
        number/=10;
        counter-=1;
    }

    if (firstSum==secSum){
        std::cout<<"Счатливый билет";
    }
    else{
        std::cout<<"Не повезло";
    }
}