//
// Created by us on 19.03.2021.
//
#include <iostream>

int main(){
    std::cout << "enter two numbers:"<<"\n";
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout<<"num 1 = "<<v1<<" num 2 = "<<v2<<std::endl;;

    if (v1 == 1){
        std::cerr<<"error example"<<std::endl;
    }
    //можно сделать lorize lib
    if (v2 == 2){
        std::clog<<"\033[31;1;4mLog\033[0m"<<std::endl;
    }

    return 0;
}