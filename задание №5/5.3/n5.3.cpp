#include <iostream>

int main()
 {
    int currentDay;
    int firstWeekDay;

    std::cout<<"С какого дня недели началась неделя? ";
    std::cin>>firstWeekDay;

    std::cout<<"Какой сегодня день? ";
    std::cin>>currentDay;

    int auxiliaryDay=currentDay+(firstWeekDay-1);

    if ( (firstWeekDay<1) || (firstWeekDay>7) ) {
        std::cout<<"Неправильно указан день";
        return 0;
    } 

    if ( (currentDay<1) || (currentDay>31) ) {
        std::cout<<"Неправильно указан день";
        return 0;
    }

    else if (( ((auxiliaryDay%7==0) || auxiliaryDay%7==6)) || (currentDay<=5) || ((8<=currentDay) && (currentDay<=10))  )
    {
        std::cout<<"Выходной";
    }
else {
    std::cout<<"Раб день";
    }
} 