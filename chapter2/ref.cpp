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

    int i = 43;
    const int &r1 = i;
    const int &r2 = 42;
    i = 55;
    std::cout<<"r1 "<<r1<<" "<<r2<<" "<<42<<"\n";

    int errNumb = 0;
    //константный указатель
    //тут нельзя поменять только адрес
    int *const curErr = &errNumb;
    const double pi = 3.14;
    //константный указатель на константный объект
    //нельзя поменять адрес и значение напрямую
    //через объект можно,  хотя хз в чем смысл так делать
    double test =4;
    const double *const pip = &test;
    std::cout<<*pip<<std::endl;

    //const позволит изменить значение объекта
    //а constexpr не позволит скомпилировать
    //test = 8;
    std::cout<<*pip<<std::endl;
}



int main(){
    int newVal = 1;
    int &ref = newVal;
    pointerEx();
    ex231();
    std::cout<<&newVal<<" "<<&ref<<"\n";
}