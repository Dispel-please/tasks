#include <iostream>

int main() {
    int fisrNum;
    int secNum;

    std::cout << "Введите первое число:" ;
    std::cin >> fisrNum;

    std::cout << "Введите второе число:" ;
    std::cin >> secNum;

    if (fisrNum>secNum) {
       std::cout << "Наименьшее число:" << secNum;
    }

    else if (fisrNum<secNum) {
        std::cout << "Наименьшее число:" << fisrNum;
    }

    else {
        std::cout << "Равны";
    }
}