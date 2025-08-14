#include <iostream>

int main() {
    int birthDay;
    int birthMonth;
    int birthYear;

    int todayDay;
    int todayMonth;
    int todayYear;

    std::cout<<"День рождения день ";
    std::cin>>birthDay;

    std::cout<<"месяц ";
    std::cin>>birthMonth;

    std::cout<<"год ";
    std::cin>>birthYear;

    std::cout<<"Сегодня день ";
    std::cin>>todayDay;

    std::cout<<"месяц ";
    std::cin>>todayMonth;

    std::cout<<"год ";
    std::cin>>todayYear;

    if (todayYear-birthYear>18){
        std::cout<<"+";
    }
    else if (todayYear-birthYear==18)
    {
        if (todayMonth>=birthMonth){
            if (todayDay>birthDay){
                std::cout<<"+";
            }
            else{
                std::cout<<"-";
            }
        }
    }
    else{
        std::cout<<"-";
    }

}