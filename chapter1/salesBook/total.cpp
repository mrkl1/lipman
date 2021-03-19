//
// Created by us on 19.03.2021.
//

#include <iostream>
#include "Sales_item.h"


int main(){
    Sales_item total;

    if (std::cin>> total){
        Sales_item trans;
        while (std::cin>>trans){
            if (total.isbn() == trans.isbn()){
                total+= trans;

            } else {
                std::cout << total<<"\n";
                total = trans;

            }
        }
        std::cout<<total<<"\n";
    } else {
        std::cerr <<"No data?!"<<std::endl;
        return -1;
    }
    return 0;
}