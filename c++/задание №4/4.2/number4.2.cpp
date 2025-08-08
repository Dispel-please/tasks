#include <iostream>

int main() {
    int fisrNum;
    int secNum;
    int guessSum;
    int realSum;

    std::cout << "Введите первое число:" ;
    std::cin >> fisrNum;

    std::cout << "Введите второе число:" ;
    std::cin >> secNum;

    std::cout << "Введите сумму:" ;
    std::cin >> guessSum;

    realSum = fisrNum + secNum;

    if (realSum == guessSum) {
       std::cout << "Верно!";
    }

    else {
        std::cout << "Ошибка! Верный результат: " << realSum;
    }

    return 0;
}

