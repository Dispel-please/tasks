#include<iostream>

int main(){
    int duty;
    int remainder=0;
    int pay;

    std::cout<<"Долг ";
    std::cin>>duty;

    while (duty>0)
    {
        std::cout<<"Cколько заплатили ";
        std::cin>>pay;

        if (duty-pay>0){
            std::cout<<"Остаток долга "<<duty-pay << "\n";
            duty-=pay;
        }

        else if (duty-pay==0) {
            break;
        }
        else{
        remainder=pay-duty;
        break;
        }
    }
    std::cout<<"Долг погашен, остаток " << remainder;
    
}