//
// Created by us on 06.04.2021.
//


//логика такая, что определяется переменная препроцессора
//для программы и если она была уже определена, то
//объявление больше не происходит
#ifndef S_H
#define S_H
#include <string>
struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0; // доход
}; //тут должна быть точка с запятой
//g++ подскажет если что
#endif
