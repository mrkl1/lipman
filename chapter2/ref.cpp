//
// Created by us on 26.03.2021.
//

#include <iostream>

void ex231(){
    int i, &ri = i;
    i = 5;
    ri = 10;
    std::cout<<ri<<" "<<i<<"\n";
}

void pointerEx(){
    double *p1,*p2;
    double dp = 55.2;

    p1 = &dp;
    *p1 += 33;
    std::cout<<&p1<<p1<<" "<<*p1<<" "<<dp<<" "<<&dp<<"\n";

    p2 = nullptr;
    //*p2 - приведет к ошибке сегментирования
    bool t = p2 == nullptr;
    std::cout<<"t = "<<typeid(t).name()<<" "<<p2<<"\n";

    //указатели можно использовать в условии
    //любой отличиный от нуля является true
    //p2!=p1 можно даже сравнивать
    if (p2){
        std::cout<<"p2 now is nullptr"<<"\n";
    }
    p2 = p1;

    if (p2){
        std::cout<<"p2 now is "<<p2<<"\n";
    }
                //ссылка на указатель выглядит так
    int *ip=0, *&r = ip;
    std::cout<<ip<<r<<std::endl;

}



int main(){
    int newVal = 1;
    int &ref = newVal;
    pointerEx();
    ex231();
    std::cout<<&newVal<<" "<<&ref<<"\n";
}