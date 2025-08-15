#include<iostream>

int main() {
    int firstNum=1;
    int secNum=2;
    int count;
    int num=2;

    std::cout<<"Введите число последовательности ";
    std::cin>>count;

    if (count<=0)
    {
        std::cout<<"Невозможное число ";
    }

    if (count==1 || count==2) {
        std::cout<<"1";
        return 0;
    }

    else{
        int whileCounter=3;
        
        while (whileCounter!=count)
        {
            num=firstNum+secNum;
            firstNum=secNum;
            secNum=num;
            whileCounter+=1;
        }
      
    }
    std::cout<<num;
}