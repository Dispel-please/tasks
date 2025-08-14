#include <iostream>

int main()
 {
    int currentDay;

    std::cout<<"Какой сегодня день?";
    std::cin>>currentDay;

    if ( (currentDay<1) || (currentDay>31) ) {
        std::cout<<"Неправильно указан день";
    }

else if ( ((currentDay%7==0) || (currentDay%7==6)) || (currentDay<=5) || ((8<=currentDay) && (currentDay<=10))  )
    {
        std::cout<<"Выходной";
    }
else {
    std::cout<<"Раб день";
}
} 