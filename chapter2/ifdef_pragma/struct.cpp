
#include <iostream>
//имена для препроцессора должны быть уникальны
//во всем проекте
//можно раскомментить для проверки
//#include "t.h"
#include "s.h"

#include <string>

// g++ struct.cpp s.h t.h -o struct.out && ./struct.out
int main(){
    Sales_data data1, data2;
    data1.bookNo = 1;
    data2.bookNo = 1;
    data1.units_sold = 6;
    data2.units_sold = 1;



    return 0;
}



