#include<iostream>

int main() {
    int initiallyMoney;
    int needMoney;
    int counter=0;
    int percent;
    int percentMoney;

    std::cout<<"Введите размер вклада: ";
    std::cin>>initiallyMoney;

    std::cout<<"Введите процентную ставку: ";
    std::cin>>percent;

    std::cout<<"Введите желаемую сумму: ";
    std::cin>>needMoney;

    if(initiallyMoney<=0 || percent<=0 || needMoney<initiallyMoney) {
        std::cout<<"Невозможная ситуация";
        return 0;
    }

    while (initiallyMoney<=needMoney){
        percentMoney=(initiallyMoney*percent)/100;
        initiallyMoney+=percentMoney;
        counter+=1;
    }
    std::cout<<"Придётся подождать: "<<counter;
}