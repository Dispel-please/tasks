#include <iostream>

int main() {
    int a;
    int b;
    int c;

    int helpSide;

    int m;
    int n;
    int k;

    std::cout<<"Первая коробка\n"<< "Первая сторона ";
    std::cin>>a;
    std::cout<<"Вторая сторона ";
    std::cin>>b;
    std::cout<<"Третья сторона ";
    std::cin>>c;

    std::cout<<"Вторая коробка коробка\n"<< "Первая сторона ";
    std::cin>>m;
    std::cout<<"Вторая сторона ";
    std::cin>>n;
    std::cout<<"Третья сторона ";
    std::cin>>k;

    if (b>a) {
        helpSide=a;
        a=b;
        b=helpSide;
    }
    if (c>a) {
        helpSide=a;
        a=c;
        c=helpSide;
    }
    if (c>b) {
        helpSide=b;
        b=c;
        c=helpSide;
    }

    if (n>m) {
        helpSide=m;
        m=n;
        n=helpSide;
    }
    if (k>m) {
        helpSide=m;
        m=k;
        k=helpSide;
    }
    if (k>n) {
        helpSide=n;
        n=k;
        k=helpSide;
    }
    if (a*b*c>m*n*k){
        if (a>m && b>n && c>k){
            std::cout<<"Возможно 1ю в 2ю";
        }
        else {
        std::cout<<"Невозможно.";
        }
    }

    else if (a*b*c<m*n*k){
        if (a<m && b<n && c<k){
            std::cout<<"Возможно 2ю в 1ю";
        }
        else {
        std::cout<<"Невозможно";
        }
    }
    
    else {
        std::cout<<"Невозможно они =";
    }
    std::cout << "Первая коробка: " << a << " " << b << " " << c << std::endl;
    std::cout << "Вторая коробка: " << m << " " << n << " " << k << std::endl;
}