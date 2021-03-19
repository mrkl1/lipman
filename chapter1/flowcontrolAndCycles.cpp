//
// Created by us on 19.03.2021.
//

#include <iostream>

void whileEx(){
    int i = 0;
    while(i < 10){
        std::cout<<"while "<<i<<"\n";
        i++;
    }
    std::cout<<"end of while"<<std::endl;
}

void forEx(){

    for (int i = 0;i < 10;i++){
        std::cout<<"for "<<i<<"\n";
    }
    std::cout<<"end of for"<<std::endl;
}

void doWhileEx(){

    int i = 10;
    do {
        std::cout<<"do while "<<i<<"\n";
        i++;

    }while(i < -1);
    std::cout<<"end of do while"<<std::endl;
}

//ctrl+d lin
//ctrl+z win
void infiniteInput(){
    int sum = 0,value = 0;
    while(std::cin >> value){
        sum += value;
    }
    std::cout <<"Sum is: " <<sum<< std::endl;

}

int main(){
//    whileEx();
//    forEx();
//    doWhileEx();
    infiniteInput();

}
